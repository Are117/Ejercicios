#include <stdio.h>//inclusión de librería estandar

int suma_serie(int repeticiones);

int main(){
int repeticiones;
int suma=0;
printf("Vamos a calcular la suma de la serie 1+2+3+4....\n");
printf("Por favor ingrese el numero de veces que quiere que se repita la serie:\n");
scanf("%d", &repeticiones);

suma=suma_serie(repeticiones);
printf("La suma de los primeros %d valores de la serie es: %d", repeticiones, suma);
    return 0;
}

int suma_serie(int repeticiones){
    int suma=0;
for(int i=1; i<=repeticiones; i++){
    suma +=i;
}
return suma;
}
