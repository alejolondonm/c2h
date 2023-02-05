#include <stdio.h>

int main(){
    float pi = 3.141592;
    float radio;
    float altura;

    printf("Ingrse la altura del cono: \n");
    scanf("%f", &altura);

    printf("Ingrse el radio del cono: \n");
    scanf("%f", &radio);
    
    float volumen = (pi * (radio * radio) * altura) / 3;
    printf("El Volumen del cono es de: %f", volumen);
}