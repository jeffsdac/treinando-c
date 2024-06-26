#include <stdio.h>
#include <stdlib.h>

int main (){

    float pi = 3.1415;
    float raio = 20.78;
    float circuferencia = 2 * pi * raio;
    float area = pi * raio * raio;

    printf("O raio da circuferencia é: %f \n", raio);
    printf("\tCircuferencia = %.2f\n", circuferencia);
    printf("\tArea = %.2f\n", area); 

    return 0;
}