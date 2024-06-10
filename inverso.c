#include <stdio.h>//inclusión de librería estandar

void inverso(int numero);//declaración del proceso

int main(){

int numero;
printf("Calcular el inverso de un numero\n");
printf("Ingrese el numero a calcular\n");
scanf("%d", &numero);


printf("El inverso de %d es: ", numero);
inverso(numero);//llamada del proceso

    return 0;
}

//proceso que hace los calculos para marcar el inverso del numero
void inverso(int numero){
int digito=0;
//Condición en caso que el número sea negativo
if(numero<0){
    numero=-numero;
}

//uso la estructura do while para asegurarme de que al ingresar 0 se presente su inverso sin necesidad de usar una estructura condicional
do{
digito=numero%10;
numero /=10;
printf("%d", digito);//imprime el digito correspondiente
}while(numero>0);
}