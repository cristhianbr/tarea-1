#include <stdio.h>
#include "calculadora.h"

int main (void)
{
	int valor1,valor2,operacion,resultado;
	
	printf ("Que operacion desea \n1 para Resta\n2 para Suma\n3 para Division\n4 para Multiplicacion");
	scanf ("%d",&operacion);
	printf ("Ingrese el primer valor a los cuales le desea hacer la operacion");
	scanf ("%d",&valor1);
	printf ("\nIngrese el segundo valor");
	scanf ("%d",&valor2);

	swich (i)
	{
		case 1:
			z=resta(valor1,valor2);
			break;

		case 2:
            z=suma(valor1,valor2);
            break;

        case 3:
            z=division(valor1,valor2);
            break;

        case 4:
            z=multiplicacion(valor1,valor2)
			break;
	}

	printf("El resultado de la operacion es: %d", z);
	
	return 0;
} 
 


