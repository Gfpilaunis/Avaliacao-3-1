// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

void copiarString(char *stringOriginal, char *copia) {
    copia = stringOriginal;
    printf("%s", copia);
}

int main() {
    // Write C code here
    char *copia [50]; //Aqui está o uso do vetor
    copiarString("Gabriel, Ana, Gustavo", copia);
    return 0;
}