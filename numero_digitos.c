#include <stdio.h>//inclusión de librería estandar

//declaración de la función
int numero_digitos(int numero);

int main(){

int numero; //Variable para almacenar el numero al cual contaremos sus digitos
int digitos;//Variable que mostrará el numero de digitos que tiene el número

//muestra mensaje descriptivo y pide al usuario que ingrese el numero 
printf("Calculo de el numero de digitos de una cantidad\n");
printf("Por favor ingrese el numero a analizar\n");
scanf("%d", &numero);

digitos=numero_digitos(numero);

printf("El numero de digitos de %d, es: %d ", numero, digitos);
    return 0;
}

int numero_digitos(int numero){
int contador=0;
//condición en caso de que el número sea negativo
if(numero<0){
    numero=-numero;
}
do{//utilizo la estructura do while porque si la iteración se realiza al menos una vez, aumenta el marcador y esto cubre el escenario en que el numero fuera 0
    numero /=10;
    contador++;
}while(numero>0);
  
    return contador;
}