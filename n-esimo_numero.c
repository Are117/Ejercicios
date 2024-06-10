#include <stdio.h>//inclusión de librería estandar

int calculo_enesimo(int numero);//declaración de la funcion

int main(){

int n_enesimo=0;
printf("Calcule el numero enesimo de cualquier numero positivo\n");
printf("Por favor, ingrese un numero positivo\n");
int numero;//variable para el numero del cual calcularemos el enesimo
scanf("%d", &numero);

n_enesimo=calculo_enesimo(numero);//llamada de la función, asignandole su valor a la variable n_enesimo
printf("El numero enesimo de %d es: %d", numero, n_enesimo);//imprime el numero enesimo 



    return 0;
}

int calculo_enesimo(int numero){//procedimiento de la función
int enesimo=0;
for(int i=numero; i>0; i--){//utilizo for porque se la cantidad de iteraciones que se necesitan, en este caso la misma cantidad que la del numero ingresado
enesimo +=i;
}
return enesimo;//retorna el valor de la variable enesimo
}