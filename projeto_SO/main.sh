#!/bin/sh
directory=$1
# Procura todos arquivos ".sh" e roda o script shebang.sh
# para cada um deles.
find $directory -type f -name "*.sh" | while read file_name
do
    echo "$file_name"
    ./shebang.sh "$file_name"
done
