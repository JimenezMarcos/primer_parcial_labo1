#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Biblioteca.h"
#include "ArrayCliente.h"
#include "ArrayPedido.h"
#include "nexo.h"

#define PENDIENTE 0
#define CARGADO 1
#define TRUE 1
#define FALSE 0

int CargarPedido (ePedido* listaPedido, int tamPedido, eCliente* listaCliente, int tamCliente)
{

	int retorno;
	int idVacio;
	int posicion;
	int idCliente;
	ePedido auxiliar;

	PedirInt("Ingrese el Id del Cliente: ", &idCliente);

	posicion = EncontrarClientePorId(listaCliente, tamCliente, idCliente);


	idVacio = BuscarPedidoLibre (listaPedido, tamPedido);
	retorno=0;




	if(idVacio != -1)
	{
		if(PedirFloat("Ingrese la cantidad de kilos del pedido: ", &auxiliar.kilosPedido))
		{

			retorno = AgregarPedido(listaPedido, tamPedido, idVacio, listaPedido->estadoPedido, listaPedido->kilosPedido, listaCliente->idCliente, posicion);

		}
		else
		{
			printf("No se pudo cargar el nombre.\n");
		}


	}
	else
	{
		printf("No hay legajos disponibles.\n");
	}

	return retorno;
}

int AgregarPedido(ePedido* lista, int tam, int id, int estadoPedido, float kilosPedido, int idCliente, int posicion)
{
	int retorno;
	retorno = 0;


	lista[posicion].idPedido = id;
	lista[posicion].idCliente = idCliente;
	lista[posicion].kilosPedido = kilosPedido;
	lista[posicion].estadoPedido = PENDIENTE;
	lista[posicion].isEmpty = FALSE;



	retorno = -1;

	return retorno;
}
