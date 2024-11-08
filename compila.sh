# Compila el archivo objeto de la biblioteca
# Cuando pones -c en el comando gcc, no se genera un ejecutable, sino solo un archivo objeto (libreria.o)
gcc -c libreria.c -Wall -Wextra -Werror -o libreria.o

# Crea la biblioteca estática
# Esto permite que el programa principal (test.c) use las funciones de libreria.c sin tener el código fuente disponible.
ar rv liblibreria.a libreria.o

# Compila el programa principal y enlaza con la biblioteca estática
gcc test.c -L. -llibreria -Wall -Wextra -Werror -o test

# Limpia el archivo objeto de la biblioteca
rm libreria.o
