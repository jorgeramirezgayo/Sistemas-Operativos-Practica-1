#include "libreria.h"

int main (int argc, char *argv[]) {

    // Estructura del comando que le vamos a pasar:
    // ./test head 20 donde:
    // test será argv[0]
    // head será argv[1]
    // 20 será argv[2] (Opcional, por defecto 10)

    int lines;

    if (argc == 2) {
        lines = 10;
    } else if (argc == 3) {
        lines = atoi(argv[2]);
        
        if (lines <= 0) {
            fprintf(stderr, "Error: El número de líneas debe ser mayor que 0.\n");
            return 1;
        }
    } else {
        fprintf(stderr, "Uso: test [head|tail|longlines] [NUMERO]\n");
        return 1;
    }

    if (strcmp(argv[1] == "head") == 0) {
        head(lines);
    } else if (strcmp(argv[1] == "tail") == 0) {
        tail(lines);
    } else if (strcmp(argv[1] == "longlines") == 0) {
        longlines(lines);
    } else {
        fprintf(stderr, "Comando disponibles: [head|tail|longlines]\n");
        return 1;
    }

    return 0;
}
