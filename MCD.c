#include <stdio.h>//inclusión de librería estandar

int calculo_MCD(int primerNumero, int segundoNumero);//declaración de la función

int main(){

int MCD;
int primerNumero, segundoNumero;

// Solicitar al usuario que ingrese dos números
printf("Ingrese el primer numero:\n");
scanf("%d", &primerNumero);
printf("Ingrese el segundo numero:\n");
scanf("%d", &segundoNumero);

MCD=calculo_MCD(primerNumero, segundoNumero);//llamado a la función
printf("El Maximo Comun Divisor de %d y %d es: %d", primerNumero, segundoNumero, MCD);

    return 0;

}


int calculo_MCD(int primerNumero, int segundoNumero) {//proceso de la función
    for(int MCD=segundoNumero; segundoNumero>0 ; primerNumero=MCD){//utiliza el algoritmo de Euclides para obtener el MCD
        MCD=segundoNumero;
        segundoNumero= primerNumero%segundoNumero;
    }
    return primerNumero;
}