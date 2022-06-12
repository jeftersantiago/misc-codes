#!/bin/sh
file=$1
# Checa se arquivo é executavel
# Se não é, transforma o arquivo
# em um executável.
make_executable () {
    if [ ! -x "$file" ]; then
        echo "Arquivo '$file' : não é executável"
        # Torna aquivo executável 
        echo "Tornando arquivo '$file' em executável"
        chmod +x "$file"
    fi
}
# Armazena conteúdo da primeira linha do arquivo.
read -r firstLine < $file
# Checa se tem o shebang "#!" 
shebang=false
case $firstLine in
    ("#!"*)
        shebang=true
esac
# Cria arquivo de backup se não tem shebang
if ( ! $shebang ); then
    # Cria o arquivo de backup com ".bak" no fim
    cp "$file" "$file".bak
    # Adiciona o shebang no inicio do arquivo.
    shebang="#!/bin/bash"
    (echo $shebang && cat "$file") > /tmp/tmp_file && mv /tmp/tmp_file "$file" 
fi
# Apenas o arquivo original vai ser executável, o ".bak" vai continuar
# como era antes (se era executável, continua executável).
make_executable
