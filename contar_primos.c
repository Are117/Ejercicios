#include <stdio.h>//inclusión de librería estandar

int es_primo(int valor);//declaración de la funcion que defina si el numero es primo o no 

int main(){
printf("Se calculara los numeros primos desde el 1 hasta la cantidad que seleccione\n");
printf("Ingrese el numero limite para calcular los numeros primos\n");
int repeticiones;
scanf("%d", &repeticiones);

int cantidad=0;
printf("Los numeros primos son:\n");
//utilizo la función for porque conozco el numero de iteraciones que necesito
for(int i=2; i<=repeticiones; i++){//la estructura for se repetira hasta que i alcance el numero de repeticiones 
if(es_primo(i)){//condicion en base de la función para que ejecute la acción solo en caso de que el numero sea primo 
printf("%d\n", i);
cantidad +=1;//Esta variable almacena la cantidad de primos que hay
}
}
printf("La cantidad de numeros primos es: %d", cantidad);

    return 0;
}

int es_primo(int valor){//la función determina si el numero es divisible para 0, si lo es lo marca como no primo 
int Esprimo=1;
    for(int j=2; j<valor; j++){
        if(valor%j==0){
            Esprimo=0;
        }
        if(valor==2){
            Esprimo=1;
        }
    }
return Esprimo;
}