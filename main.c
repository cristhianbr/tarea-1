#include <stdio.h>
#include "calculadora.h"

int main (void)
{
	int a,b,i,z;	
	printf ("Que operacion desea \n1 para Resta\n2 para Suma\n3 para Division\n4 para Multiplicacion");
	scanf ("%d",&i);
	printf ("Ingrese el primer valor a los cuales le desea hacer la operacion");
	scanf ("%d",&a);
	printf ("\nIngrese el segundo valor");
        scanf ("%d",&b);

swich (i)
{
	case 1:
               z=resta(a,b);
               break

        case 2:
               z=suma(a,b);
               break

        case 3:
               z=division(a,b);
               break

        case 4:
               z=multiplicacion(a,b);
               break
}

printf("El resultado de la operacion es: %d", z);









} 
 
return 0;
}
