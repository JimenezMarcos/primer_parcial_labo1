#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "Biblioteca.h"

#define FALSE 0
#define TRUE 1

void MostrarMenu()
{
	printf("\t\t\tMENU\n");
	printf("-----------------------------------------------------------\n");
	printf("\t1. \tALTA DE CLIENTE\n");
	printf("\t2. \tMODIFICAR DATOS DE CLIENTE\n");
	printf("\t3. \tBAJA DE CLIENTE\n");
	printf("\t4. \tCREAR PEDIDO DE RECOLECCION\n");
	printf("\t5. \tPROCESAR RESIDUOS\n");
	printf("\t6. \tIMPRIMIR CLIENTES\n");
	printf("\t7. \tIMPRIMIR PEDIDOS PENDIENTES\n");
	printf("\t8. \tIMPRIMIR PEDIDOS PROCESADOS\n");
	printf("\t9. \tLISTADO DE PEDIDOS POR LOCALIDAD\n");
	printf("\t10. \tPROMEDIO DE KILOS DE POLIPROPILENO POR CLIENTE\n");
	printf("\t0. \tSALIR\n\n");
	printf("-----------------------------------------------------------\n");
}





char ValidarChar (char caracterIngresado)
{
    int retorno;
    retorno = isdigit(caracterIngresado);

    while(retorno != 0)
    {
        printf("Dato erroneo, por favor reingrese una opcion: ");
        fflush(stdin);
        scanf("%c", &caracterIngresado);
        retorno = isdigit(caracterIngresado);
    }
    return caracterIngresado;
}




int PedirInt (char mensaje[], int* numero)
{
	int retorno;
	char numeroSinValidar [21];

	puts(mensaje);
	scanf("%s", numeroSinValidar);

	if (ValidarCadenaSiEsNumero(numeroSinValidar))
	{
		retorno = 1;

	} else
	{
		retorno = 0;
	}
	*numero = atoi(numeroSinValidar);
	return retorno;

}


float PedirFloat (char mensaje[], float* numero)
{
	int retorno;
	char numeroStr [21];
	retorno = 0;

	printf(mensaje);
	scanf("%s", numeroStr);

	if (ValidarCadenaSiEsNumero(numeroStr))
	{
		*numero = atof(numeroStr);

	} else
	{
		retorno = 1;
	}
	return retorno;
}

char PedirChar (char mensaje[])
{
    char caracter;

    printf("%s", mensaje);
    fflush(stdin);
	scanf("%c", &caracter);


	return caracter;

}

int PedirStringSoloLetras (char mensaje[], char stringIngresado[])
{
	char stringSinValidar [60];
	int retorno;
	retorno = 0;


	printf(mensaje);
	fflush(stdin);
	scanf("%[^\n]", stringSinValidar);



	if(ValidarCadenaEsSoloLetras(stringSinValidar))
	{
		strcpy(stringIngresado, stringSinValidar);
		retorno = 1;
	}

	return retorno;
}

int PedirStringAlfanumerico (char mensaje[], char stringIngresado[])
{
	char stringSinValidar [60];
	int retorno;
	retorno = 0;


	printf(mensaje);
	fflush(stdin);
	scanf("%[^\n]", stringSinValidar);



	if(ValidarCadenaEsAlfanumerica(stringSinValidar))
	{
		strcpy(stringIngresado, stringSinValidar);
		retorno = 1;
	}

	return retorno;
}

int PedirStringNumerico (char mensaje[], char stringIngresado[])
{
	char stringSinValidar [60];
	int retorno;
	retorno = 0;


	printf(mensaje);
	fflush(stdin);
	scanf("%[^\n]", stringSinValidar);



	if(ValidarCadenaSiEsNumero(stringSinValidar))
	{
		strcpy(stringIngresado, stringSinValidar);
		retorno = 1;
	}

	return retorno;
}

int SumarNumeros (int primerNumero, int segundoNumero)
{
	int suma;

	suma = primerNumero + segundoNumero;

	return suma;
}

int RestarNumeros (int primerNumero, int segundoNumero)
{
	int resultado;

	resultado = primerNumero - segundoNumero;


	return resultado;
}

float DividirNumeros (int primerNumero, int segundoNumero)
{

	float resultado;

	resultado = primerNumero / (float)segundoNumero;

	return resultado;
}

int MultiplicarNumeros (int primerNumero, int segundoNumero)
{
	int resultado;

	resultado = primerNumero * segundoNumero;

	return resultado;
}

int ValidarEnteroEnIntervalo (int numero, int min, int max)
{

	int retorno;

	retorno = 0;

    if(numero<min || numero>max)
    {
       	retorno = 1;
    }

    return retorno;
}


int ValidarCadenaSiEsNumero (char cadena[])
{
	int retorno;
	int i = 0;

	retorno = 1;

	while(cadena[i] != '\0')
	{
		if(cadena[i] < '0' || cadena[i] > '9')
		{
			retorno = 0;
		}
		i++;
	}

	return retorno;
}

int getNumeroAleatorio(int desde, int hasta, int iniciar)
{

	int aleatorio;

	if(iniciar)
	{
		srand(time(NULL));
		aleatorio = desde + (rand() % (hasta + 1 - desde));

	}



	return aleatorio;
}

int ValidarCadenaEsSoloLetras(char str[])
{
	int retorno;
	int i = 0;

	retorno = 1;

	while(str[i] != '\0')
	{
		if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z' ))
		{
			retorno = 0;
		}
		i++;
	}

	return retorno;;
}

int ValidarCadenaEsAlfanumerica(char str[])
{
	int retorno;
	int i = 0;

	retorno = 1;

	while(str[i] != '\0')
	{
		if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z' ) && (str[i] < '0' || str[i] > '9'))
		{
			retorno = 0;
		}
		i++;
	}

	return retorno;;
}



