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
    int n = N;
    printf("Funciona tail");
    return 0;


}

int longlines (int N) {
    int n = N;
    printf("Funciona longlines");
    return 0;
}
