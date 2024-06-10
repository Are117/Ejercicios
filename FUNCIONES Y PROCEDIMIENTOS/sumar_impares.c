#include <stdio.h>//inclusión de librería estandar


int sumar_impares(int repeticiones);//declaración de la función que sumara impares

int main(){//función principal

int repeticiones; 
int suma=0;//variable para almacenar el valor de la función sumar_impares


printf("Por favor, ingrese la cantidad de numeros impares que quiere que se sumen\n");
scanf("%d", &repeticiones);

printf("Los numeros impares del 1 al %d son:\n", repeticiones);//muestra en pantalla un mensaje

for(int i=1; i<=repeticiones; i+=2){//uso de la estructura for porque conozco el numero de iteraciones y me ayuda a hacer todo el proceso en una sola linea
 printf("%d\n", i);//imprime los numeros impares
}


suma=sumar_impares(repeticiones);//llama a la función y le asigna su valor a la variable suma
printf("La suma de los numeros impares desde el 1 hasta el %d  es: %d\n", repeticiones, suma);//muestra en pantalla el resultado de la suma

    return 0;
}

int sumar_impares(int repeticiones){//proceso de la función
    int suma=0;
    int i=1;

for(int i=1; i<=repeticiones; i +=2){//Uso de la función for porque conozco el numero necesario de iteraciones y en este caso es mas óptimo que el while
    suma += i;//variable que almacena la suma de impares
}

return suma;//retorna el valor de la variable suma
}