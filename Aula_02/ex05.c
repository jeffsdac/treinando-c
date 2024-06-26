#include <stdio.h>
#include <stdlib.h>

int main () {
    
    int numeroInteiro1 = 9;
    int numeroInteiro2 = 2;
    float numeroDecimal1 = 9;
    float numeroDecial2 = 2;

    int divisaoInteira = numeroInteiro1 / numeroInteiro2;

    float divisaoDecimal = numeroDecimal1 / numeroDecial2;

    printf("Inteiros: %d/%d = %d \n", numeroInteiro1, numeroInteiro2, divisaoInteira);
    printf("Decimais: %f \ %f = %f \n", numeroDecimal1, numeroDecial2, divisaoDecimal);
    
    return 0;
}