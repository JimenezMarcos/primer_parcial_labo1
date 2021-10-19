#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Biblioteca.h"
#include "ArrayCliente.h"

#define TRUE 1
#define FALSE 0


int IniciarCliente(eCliente* lista, int tam)
{
	int retorno;

	retorno = -1;

	for(int i=0; i<tam; i++)
	{
		lista[i].isEmpty = TRUE;
	}
	retorno = 0;

	return retorno;
}

int AgregarCliente(eCliente* lista, int tam, int id, char nombre[],char cuit[],char direccion[],char localidad[], int posicion)
{
	int retorno;
	retorno = 0;


	lista[posicion].idCliente = id;
	strcpy(lista[posicion].nombreCliente, nombre);
	strcpy(lista[posicion].cuitCliente, cuit);
	strcpy(lista[posicion].direccionCliente, direccion);
	strcpy(lista[posicion].localidadCliente, localidad);

	lista[posicion].isEmpty = FALSE;

	retorno = -1;

	return retorno;
}

int BuscarLibre(eCliente* lista, int tam)
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

int CargarCliente (eCliente* lista, int tam, int idCliente)
{

	int retorno;
	int posicionVacia;
	eCliente auxiliar;


	posicionVacia = BuscarLibre (lista, tam);
	retorno=0;

	if(posicionVacia != -1)
	{
		if(PedirStringSoloLetras("Ingrese el nombre del Cliente: ", auxiliar.nombreCliente))
		{
			if(PedirStringNumerico("Ingrese el cuit del Cliente: ", auxiliar.cuitCliente))
			{
				if(PedirStringAlfanumerico("Ingrese la direccion del Cliente: ", auxiliar.direccionCliente))
				{
					if(PedirStringSoloLetras("Ingrese la Localidad del Cliente: ", auxiliar.localidadCliente))
					{
						retorno = AgregarCliente(lista, tam, idCliente, auxiliar.nombreCliente, auxiliar.cuitCliente, auxiliar.direccionCliente , auxiliar.localidadCliente, posicionVacia);
					}
				}
				else
				{
					printf("No se pudo cargar la direccion.\n");
				}
			}
			else
			{
				printf("No se pudo cargar el cuit.\n");
			}
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

int EncontrarClientePorId(eCliente* lista, int tam,int id)
{
	int retorno;

	retorno = -1;

	for(int i = 0 ; i < tam; i++)
	{
		if(lista[i].isEmpty != TRUE && lista[i].idCliente == id)
		{
			retorno = i;
		}
	}

	return retorno;
}

int ModificarCliente (eCliente* lista, int tam)
{
	int idEmpleado;
	int retorno;
	int posicion;
	int opcion;

	retorno = 0;


	ImprimirClientes(lista, tam);

	while(!PedirInt("Ingrese el ID del empleado que desea modificar: ", &idEmpleado))
	{
		printf("Dato invalido\n");
	}


	posicion = EncontrarClientePorId(lista, tam, idEmpleado);
	if(posicion != -1)
	{

		while(!PedirInt("Que categoria desea modificar?\n"
				"1) Direccion\n"
				"2) Localidad\n"

				"Ingrese la opcion: ", &opcion))
		{
			printf("Dato invalido.\n");
		}

		switch(opcion)
		{
			case 1:

				if(PedirStringAlfanumerico("Ingrese la direccion del Cliente: ", lista[posicion].direccionCliente))
				{
					printf("La direccion se modifico exitosamente.\n");
					retorno = -1;
				}
				else
				{
					printf("No se pudo modificar la direccion.\n");
				}


			break;
			case 2:

				if(PedirStringSoloLetras("Ingrese la localidad del Cliente: ", lista[posicion].localidadCliente))
				{
					printf("La localidad se modifico exitosamente.\n");
					retorno = -1;
				}
				else
				{
					printf("No se pudo modificar la localidad\n");
				}
			break;

		}

	}

	return retorno;
}

int ImprimirClientes(eCliente* lista, int tam)
{
	int retorno;
	retorno = -1;

	for(int i = 0; i<tam; i++)
	{
		if(lista[i].isEmpty == FALSE)
		{
			MostrarEmpleado (lista[i]);
		}
	}

	return retorno;
}

void MostrarEmpleado (eCliente cliente)
{

	printf("-----------------------------------------------------------\n");
	printf("\t%4d \t%s \t%4s \t%s \t%s\n", cliente.idCliente, cliente.nombreCliente, cliente.cuitCliente, cliente.direccionCliente, cliente.localidadCliente);


}

int BajarCliente(eCliente* lista, int tam, int idIngresado)
{
	int retorno;

	retorno = 0;


	for(int i = 0; i<tam; i++)
	{
		if(lista[i].isEmpty != TRUE && lista[i].idCliente == idIngresado)
		{
			lista[i].isEmpty = TRUE;
			retorno = -1;
			break;
		}
	}


	return retorno;
}

int BajarClientePorId (eCliente* lista, int tam)
{
	int retorno;
	int idEmpleado;
	int posicion;
	int opcion;

	retorno = 0;

	ImprimirClientes(lista, tam);

	while(!PedirInt("Ingrese el ID del empleado que desea modificar: ", &idEmpleado))
	{
		printf("Dato invalido\n");
	}


	posicion = EncontrarClientePorId(lista, tam, idEmpleado);
	if(posicion != -1)
	{

		while(!PedirInt("Esta seguro que desea dar de baja este cliente?\n"
				"1) Si\n"
				"2) No\n"

				"Ingrese la opcion: ", &opcion))
		{
			printf("Dato invalido.\n");
		}

		switch(opcion)
		{
			case 1:

				if(BajarCliente(lista, tam, idEmpleado))
				{
					printf("El cliente se dio de baja correctamente.\n");
					retorno = -1;
				}
				else
				{
					printf("Hubo un error en la baja.\n");
				}

			break;
			case 2:
				printf("No se realizaron cambios.");
			break;

		}

	}

	return retorno;
}
