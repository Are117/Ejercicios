#include <stdio.h>//inclusión de librería estandar

float suma_fracciones(int repeticiones);//declaración de la función que sumará las fracciones

int main(){

//Muestra mensaje descriptivo
printf("Calcular la suma de la serie 1 + 1/2 + 1/3... + 1/n.\n");
float suma=0; //Variable para almacenar la suma de fracciones
int repeticiones; //Variable para almacenar el numero de repeticiones

//Pide al usuario que ingrese el numero de repeticiones de la serie
printf("Por favor ingrese el numero de veces que quiere que se sume la serie\n");
scanf("%d", &repeticiones);

suma=suma_fracciones(repeticiones);//Se llama a la función y se le asigna su valor a la variable suma
printf("La suma de la serie %d veces es: %.2f", repeticiones, suma);//muestra en pantalla el resultado de la suma con solo 2 decimales

    return 0;
}

float suma_fracciones(int repeticiones){//proceso de la función

float numerador=1; //Variable para almacenar el numerador
float denominador=1; //Variable para almacenar el denominador
float suma=0; //Variable para almacenar la suma de fracciones

for(int i=1; denominador<repeticiones; i++){//uso del ciclo for porque conozco el numero de iteraciones que necesito, en este caso hasta que iguale a el numero de repeticiones ingresado
denominador=i;//el denominador va cambiando en razon a i 
suma += numerador/denominador;//se hace la división y esto se va almacenando en la variable suma
}

return suma;//retorna el valor de suma
}
