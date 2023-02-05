#include <stdio.h>

int main(){
    float pi = 3.141592;
    float radio;
    float altura;

    printf("Ingrse la altura del cono: \n");
    scanf("%f", &altura);
    if(altura <= 0){
        altura = 0;
    }

    printf("Ingrse el radio del cono: \n");
    scanf("%f", &radio);
    if(radio <= 0){
        radio = 0;
    }
    
    float volumen = (pi * (radio * radio) * altura) / 3;
    if(volumen == 0){
        printf("Revisa los datos, y vuelvelo a intentar");
    }
    else {
        printf("El Volumen del cono es de: %f", volumen);
    }
    
}


