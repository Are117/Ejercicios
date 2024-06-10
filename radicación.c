#include <stdio.h>//inclusión de librería estandar

int potenciacion(int base);

int main(){
    int radicando;
    int indice=3;
    int raiz=0;
    int resultadofinal=1;
    int potencia=0;
    int i=1;
//muestra un mensaje descriptivo y pide ingresar al usuario la base 
printf("Por favor, ingrese el numero del que quiere calcular la raiz cubica exacta\n");
scanf("%d", &radicando);

while(resultadofinal>0){//utilizo la estructura while porque necesito que ocurra determinado evento para detener el bucle
potencia=potenciacion(i);//introduce la función potenciación que sirve para calcular el numero a la tercera potenci
resultadofinal = radicando-potencia;//si el radicando menos la potencia de dicho numero es =0 entonces esa es la raíz y da por terminado el ciclo 
raiz= i;//la raiz sera el numero perteneciente a i en la actual iteración
i++;
}

printf("La raiz cubica de %d es: %d", radicando, raiz);//imprime la raiz
    return 0;
}

int potenciacion(int base){//procedimiento de la función
    //variables para los resultados de las potencias
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
return potencia2;//returna el valor de potencia 2
}