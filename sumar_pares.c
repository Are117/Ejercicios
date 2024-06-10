#include <stdio.h>//inclusión de librería estandar


int sumar_pares(int repeticiones);//declaración de la variable que va a sumar los numeros pares

int main(){//función principal

int repeticiones; 
int suma=0;


printf("Por favor, ingrese la cantidad de numeros pares que quiere que se sumen\n");
scanf("%d", &repeticiones);

printf("Los numeros pares del 1 al %d son:\n", repeticiones);//muestra mensaje

for(int i=2; i<=repeticiones; i +=2){//uso la estructura for porque en este caso es mas óptima que el while pues hace la inicialización, la condicipon y la razon de cambio en una sola linea
 printf("%d\n", i);//imprime los numeros pares
}


suma=sumar_pares(repeticiones);//llama a la función y le asigna su valor a la variable suma
printf("La suma de los numeros pares desde el 1 hasta el %d  es: %d\n", repeticiones, suma);//imprime el resultado de la suma

    return 0;
}

int sumar_pares(int repeticiones){//proceso de la función
    int suma=0;

for(int i=2; i<=repeticiones; i +=2){//con la estructura for sumo los numeros de 2 en 2, iniciando en 2 hasta el numero de repeticiones que hayan puesto
 suma += i;
}

return suma;//devuelve el valor de suma
}