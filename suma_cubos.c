#include <stdio.h>//inclusión de librería estandar

int cubo_n(int base);//declaración de función

int main(){
int repeticiones;
int suma=0;//variable para almacenar la suma de los cuadrados
int cubo=0;//variable para almacenar el cubo de cada numero

printf("Vamos a mostrar el resultado de la suma de los cubos de los primeros n numeros\n");
printf("Por favor ingrese el número de repeticiones\n");
scanf("%d", &repeticiones);

for(int i=1; i<=repeticiones; i++){//uso de la estructura for porque se cuantas veces debe repetirse el proceso y se detiene cuando i es igual al numero de repeticiones
   cubo=cubo_n(i);//llamada de la función y se le asigna su valor a la variable cubo
    suma +=cubo;//va sumando el cubo del numero que represente i
}
printf("La suma de los cuadrados de los primeros %d numeros es: %d", repeticiones, suma);//imprime el resultado de la suma

    return 0;
}

int cubo_n(int base){//la función multiplica la base (i) por si misma 3 veces y retorna este valor
int cubo=0;
    cubo=base*base*base;
    return cubo;
}