#include <stdio.h>

#define BUFFER_LENGTH 1024

int head (int N) {
    int i = 0;
    char buffer[BUFFER_LENGTH];

    while (i < N) {
        if (fgets(buffer, BUFFER_LENGTH, stdin) != NULL) {
            printf("%s", buffer);
        }

        i++;
    }

    return 0;
}

int tail (int N) {

    // Array de N tamaño, 
    // cuando está lleno se desplazan todas las posiciones -1 y se añade la nueva línea al final

    // - ¿Puedo utilizar la longitud del buffer con una constante o mejor que cada función tenga su longitud?
    // - Para leer las líneas con memoria dinámica, como con buffer las estoy asignando 1024, debería después
    // reasignar el tamaño de memoria a cada línea con strlen?

    return 0;
}

int longlines (int N) {

    // Array de N tamaño, 
    // cuando está lleno se comprueba la longitud de todas las líneas que contiene y 
    // se sustituye si la nueva línea es más larga por la posición que corresponda y 
    // desplaza el resto de líneas hacia N (hacia cero estaría la línea más larga, en N estará la más corta)

    return 0;
}
