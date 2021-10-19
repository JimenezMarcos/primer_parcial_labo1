#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Biblioteca.h"
#include "ArrayPedido.h"

#define TRUE 1
#define FALSE 0

int BuscarPedidoLibre(ePedido* lista, int tam)
{
	int retorno;
	int i;

	retorno = 0;

	for(i = 0; i < tam; i++)
	{
		if(lista[i].isEmpty == TRUE)
		{
			retorno = i;
			break;
		}
	}

	return retorno;
}
