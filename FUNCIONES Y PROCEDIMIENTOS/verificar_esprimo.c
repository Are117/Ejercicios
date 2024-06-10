#include <stdio.h>//inclusión de librería estandar

int es_primo(int valor);//declaración de la función

int main(){//función principal
int Esprimo=1;
int numero=5;

printf("Vamos a verificar si el numero ingresado es primo\n");
printf("Por favor, ingrese un numero\n");
scanf("%d", &numero);

Esprimo=es_primo(numero);//llama a la función y le asigna el valor a la variable Esprimo

if(Esprimo){//condición para que imprima un mensaje dependiendo de los valores de verdadero o falso (1 o 0) de la variable Esprimo
    printf("El numero %d es primo", numero);
}else{
    printf("El numero %d no es primo", numero);
}

    return 0;
}

int es_primo(int valor){//la función determina si el numero es divisible para 0, si lo es lo marca como no primo 
int Esprimo=1;//cuando es primo es igual a 1, equivale como verdadero, si equivale a 0, es falso
    for(int j=2; j<valor; j++){//usamos el for porque es mas óptimo y ademas conocemos el numero de iteraciones
        if(valor%j==0){
            Esprimo=0;
        }
        if(valor==2){
            Esprimo=1;//El caso de 2 es especial, por eso lo condicionamos para que lo reconozca como primo
        }
    }
return Esprimo;//devuelve el valor de la variable Esprimo
}