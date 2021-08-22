#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void ecuacion(float*num1, float*num2, float*num3);

int main() {
    float num1;
    float num2;
    float num3;
    printf("Ingresa tu primer numero porfavor: ");
    scanf("%f", &num1);
    printf("Ingresa tu segundo numero porfavor: ");
    scanf("%f", &num2);
    printf("Ingresa tu tercer numero porfavor: ");
    scanf("%f", &num3);
    ecuacion(&num1, &num2, &num3);
    return 0;
}

void ecuacion(float*num1, float*num2, float*num3) {
    float resultadoRaiz;
    float resultado1;
    float resultado2;
    resultadoRaiz= sqrt(pow(*num2, 2)-((*num1) * (*num3) * 4));
    resultado1 = (-(*num2) + (resultadoRaiz)) / (2 * (*num1));
    resultado2 = (-(*num2) - (resultadoRaiz)) / (2 * (*num1));
    printf("El resultado de X1 es: %f \n", resultado1);
    printf("El resultado de X2 es: %f", resultado2);
}
