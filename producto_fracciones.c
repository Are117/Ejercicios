#include <stdio.h>//inclusión de librería estandar

float producto_fracciones(int repeticiones);//declaración de la función

int main(){

//muestra mensaje descriptivo
printf("Calcular el producto de la serie 1 * 1/2 * 1/3... * 1/n.\n");


int repeticiones; //Variable para almacenar el numero de repeticiones
float producto=0;

//pide al usuario que ingrese el numero de repeticiones
printf("Por favor ingrese el numero de veces que quiere que se multiplique la serie\n");
scanf("%d", &repeticiones);

producto=producto_fracciones(repeticiones);//llamado a la función
printf("El producto de la serie %d veces es: %.2f", repeticiones, producto);
    return 0;
}

float producto_fracciones(int repeticiones){
float numerador=1; //Variable para almacenar el numerador
float denominador=1; //Variable para almacenar el denominador
float producto=1; //Variable para almacenar el producto de fracciones
for(int i=1; denominador<repeticiones; i++){
denominador=i;
producto *= numerador/denominador;
}

return producto;
}