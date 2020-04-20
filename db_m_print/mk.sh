FILE=$1
if [ -z "$FILE" ]
then
    FILE=main
fi
gcc -g src/*.c main/$FILE.c -I include