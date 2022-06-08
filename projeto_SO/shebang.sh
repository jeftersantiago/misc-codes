#!/bin/sh
file=$1
# Checa se arquivo é executavel
# Se não é, transforma o arquivo
# em um executável.
if [ -x "$file" ];
then
    echo "Arquivo '$file' : é executável"
else
    echo "Arquivo '$file' : não é executável"
    # Torna aquivo executável 
    echo "Tornando arquivo '$file' em executável"
    chmod +x "$file"
fi
# Armazena conteúdo da primeira linha do arquivo.
read -r firstLine < $file
# Checa se tem o shebang "#!" 
shebang=false
case $firstLine in
    ("#!"*)
        shebang=true
esac
# Cria arquivo de backup se não tem shebang
if ( ! $shebang );
then
    # Cria o arquivo de backup com ".bak" no fim
    cp "$file" "$file".bak
    # Adiciona o shebang no inicio do arquivo.
    sed -i '1 i\#!/bin/bash' "$file"
fi
