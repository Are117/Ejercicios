#include <stdio.h>//inclusión de librería estandar

//declaración de la función
int suma_digitos(int numero);

int main(){

int numero; //Variable para almacenar el numero al cual contaremos sus digitos
int suma=0;//Variable que mostrará la suma de los digitos que tiene el número

//muestra mensaje descriptivo y pide al usuario que ingrese el numero 
printf("Calculo la suma de los digitos de una cantidad\n");
printf("Por favor ingrese el numero a analizar\n");
scanf("%d", &numero);

suma=suma_digitos(numero);//se llama a la función y se le asigna su valor a la variable suma

printf("La suma de digitos de %d, es: %d ", numero, suma);//imprime la suma de los digitos
    return 0;
}

int suma_digitos(int numero){//proceso de la función
int suma=0;
int digito=0;
//condición en caso de que el número sea negativo
if(numero<0){
    numero=-numero;
}
do{//utilizo la estructura do while porque si la iteración se realiza al menos una vez, aumenta el marcador y esto cubre el escenario en que el numero fuera 0
    digito=numero%10;
    suma += digito;
    numero /=10;
}while(numero>0);
  
    return suma;
}