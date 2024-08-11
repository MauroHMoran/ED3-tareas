/* Tarea 1:
Realizar un codigo sencillo en C que realice lo siguiente:
    1_ La diferencia entre dos numeros
    2_ La suma entre dos numeros
    3_ El producto entre esos dos numeros
    4_ Muestre por consola "Hola mundo"
*/

#include <stdio.h>
int main()
{
    int aux, num1, num2;
    num1=10; 
    num2=8;
    aux=num1-num2;
    printf("La diferencia de los numeros es %d \n", aux);
    aux=num1+num2;
    printf("La suma de los numeros es %d \n", aux);
    aux=num1*num2;
    printf("El producto de los numeros es %d \n", aux);
    printf("hola mundo\n");
    return 0;
}