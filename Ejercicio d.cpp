/*
Programa: arreglo de L longitud que almacene los números ingresados por el usuario y a la hora de imprimirlo me muestre los números elevados al cuadrado
Autor: Alejandro Santibañez Sanchez
Fecha: 23/03/2017
Resumen: Crear un arreglo de l longitud, que almacene los numeros ingresados por el usuario y en el momento de imprimirlo, los muestre elevados al cuadrado.
*/

#include<stdio.h>

int main(){
    int l=0,i;
    int vector[l];

    printf("Ingrese la longitud del vector \n");
    scanf("%d", &l);
    for(i = 0;i < l;i++){
        printf("Ingrese un numero en la posicion %d \n", i);
        scanf("%d", &vector[i]);
    }
    for(i = 0;i < l;i++){
        printf("%d ", vector[i] * vector[i]);
    }
    return 0;
}
