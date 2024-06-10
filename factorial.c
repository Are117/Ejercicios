#include <stdio.h>//inclusión de librería estandar
int calculo_factorial(int numero);//declaración de la función

int main(){
int factorial=0;
printf("Calcule el factorial de cualquier numero positivo\n");
printf("Por favor, ingrese un numero positivo\n");
int numero;//variable para el numero del cual calcularemos el factorial
scanf("%d", &numero);

factorial=calculo_factorial(numero);//llamada de la función, asignandole su valor a la variable factorial
printf("La factorial de %d es: %d", numero, factorial);//imprime la factorial del número

    return 0;
}

int calculo_factorial(int numero){//procedimiento de la función
int factorial=1;
for(int i=numero; i>0; i--){//utilizo for porque se la cantidad de iteraciones que se necesitan, en este caso la misma cantidad que la del numero ingresado
factorial *=i;
}
return factorial;//retorna el valor de la variable factorial
}