#include <stdio.h>//inclusión de librería estandar

int producto_serie(int repeticiones);

int main(){

int repeticiones; //variable para almacenar numero de repeticiones
int producto=0; //variable para almacenar producto de la serie geometrica

//imprime mensaje descriptivo y pide al usuario que ingrese el numero de repeticiones
printf("Vamos a calcular el producto de la siguiente serie: 2, 4, 8, 16...\n");
printf("Ingrese la cantidad de repeticiones de la serie\n");
scanf("%d", &repeticiones);

producto=producto_serie(repeticiones);//llamada de la función

printf("El producto de la serie %d veces es %d", repeticiones, producto);//imprime un mensaje junto con el resultado de la serie
    return 0;
}

int producto_serie(int repeticiones){//proceso de la función
int producto=1;
int siguiente=2;
for(int i=1 ; i<=repeticiones; i++){//uso bucle for porque conozco el numero necesario de iteraciones y me permite inicializar i con su razon de cambio en la misma linea
producto *= siguiente;
siguiente *= 2;
}
return producto;//retorna el valor de producto
}