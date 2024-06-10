#include <stdio.h>//inclusión de librería estandar

int calculo_factorial(int numero);

int main(){
int suma=0;
int repeticiones;
int factorial=0;

printf("Vamos a calcular la suma de los factoriales de los primeros n numeros\n");
printf("Ingrese el numero de factoriales que desea sumar\n");
scanf("%d", &repeticiones);

for(int i=1; i<=repeticiones;i++){//utilizo for porque se la cantidad de iteraciones que se necesitan, en este caso la misma cantidad que la del numero ingresado y comienzo desde el 1
    factorial=calculo_factorial(i);
    suma +=factorial;
}
printf("La suma de los primeros %d factoriales es: %d", repeticiones, suma);//imprime la suma


    return 0;
}

int calculo_factorial(int numero){//procedimiento de la función
int factorial=1;
for(int i=numero; i>0; i--){//utilizo for porque se la cantidad de iteraciones que se necesitan, en este caso la misma cantidad que la del numero ingresado y va dismuyendo pues va multiplicando desde el numero ingresado hasta 1
factorial *=i;
}
return factorial;//retorna el valor de la variable factorial
}