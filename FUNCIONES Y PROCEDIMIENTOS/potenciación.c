#include <stdio.h>//inclusión de librería estandar

int potenciacion(int base, int exponente);//declaración de función que toma en cuenta el exponente y la base

int main(){
    int base;
    int exponente;
    int potencia=0;

//muestra un mensaje descriptivo y pide ingresar al usuario la base y exponente
printf("Por favor, ingrese la base de la potencia\n");
scanf("%d", &base);
printf("Por favor, ingrese el exponente de la potencia(2 o 3)\n");
scanf("%d", &exponente);


potencia = potenciacion(base, exponente);//llamada de la función para asignarle el valor a la variable potencia

printf("La potencia de %d elevado al %d es: %d", base, exponente, potencia);

    return 0;
}

int potenciacion(int base, int exponente){//procedimiento de la función
    //variables para la potencia
    int potencia=0;
    int potencia2=0;
//uso la función for porque se el numero de las iteraciones, hasta que el i iguale a base
for(int i=1; i<=base; i++){
    potencia +=base;
}
//con la estructura for a la variable potencia2 le sumo el valor de potencia el numero de veces de la base
for(int j=1; j<=base; j++){
potencia2 += potencia;
}
if(exponente==2){
    potencia2 = potencia;//en caso de que el exponente sea 2, solo tomamos en cuenta el valor de potencia y se lo asignamos a potencia 2 para que no tome en cuenta el otro valor
}
return potencia2;//returna el valor de potencia 2
}