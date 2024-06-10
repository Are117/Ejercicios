#include <stdio.h>//inclusión de librería estandar

void serie(int repeticiones);//declaración del proceso

int main(){
int repeticiones;

printf("Vamos a reproducir la siguiente serie:\n 0, 1, 1, 2, 3, 5, 8, 13, 21, 34\n");
printf("Ingrese el numero de repeticiones que desea\n");
scanf("%d", &repeticiones);

printf("La secuencia repetida %d veces es:\n", repeticiones);//imprime mensaje antes de mostrar la serie
serie(repeticiones);//llamada del proceso
    return 0;
}

void serie(int repeticiones){//el proceso se encarga de imprimir el primer valor de la serie que es 0 y los siguientes en base a el procedimiento de asignar valores
int valor1=0;
int valor2=1;
int valor_siguiente=0;

printf("%d\n", valor1);

for(int contador = 0 ; contador < repeticiones-1 ; contador++){//utilizo la estructura for porque sé cual es el numero de iteraciones que necesito
    valor1=valor2;
    valor2=valor_siguiente;
    valor_siguiente=valor1+valor2;
        //muestra en pantalla el valor de la serie
    printf("%d\n", valor_siguiente);
}
}