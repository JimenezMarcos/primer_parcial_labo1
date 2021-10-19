#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Biblioteca.h"
#include "ArrayCliente.h"
#include "ArrayPedido.h"
#include "nexo.h"

#define TAM_CLIENTES 10 //RECORDAR MODIFICAR PARA LA ENTREGA DEL PARCIAL
#define TAM_PEDIDOS 5
#define TRUE 1
#define FALSE 0

int main(void) {
	setbuf(stdout, NULL);

	eCliente listaClientes[TAM_CLIENTES];
	ePedido listaPedidos[TAM_PEDIDOS];

	int idCliente;
	int opcion;
	int estadoOpcionUno;

	idCliente = 1;
	estadoOpcionUno = FALSE;


	do
	{

		MostrarMenu();

		while(!PedirInt("Ingrese su opcion (0-10): ", &opcion) && (opcion < 0 || opcion > 10))
		{
			printf("Dato invalido.\n");
		}

//VALIDAR NUMERO E INTERVALO
		switch(opcion)
		{
			case 1:

				IniciarCliente(listaClientes, TAM_CLIENTES);
				if(CargarCliente(listaClientes, TAM_CLIENTES, idCliente))
				{
					printf("El Cliente se dio de alta correctamente.\n");
					idCliente ++;
					estadoOpcionUno = TRUE;
				}
				else
				{
					printf("No se pudo dar de alta al Cliente.\n");
				}

				system("pause");

			break;
			case 2:

				if(estadoOpcionUno == TRUE)
				{
					if(ModificarCliente(listaClientes, TAM_CLIENTES))
								{
									printf("Se han guardado los cambios.\n");
									system("pause");
								}
								else
								{
									printf("No se realizaron cambios.\n");
									system("pause");
								}

				}
				else
				{
					printf("Primero debe cargar un cliente.\n");
					system("pause");
				}

			break;
			case 3:

				if(estadoOpcionUno == TRUE)
				{
					BajarClientePorId(listaClientes, TAM_CLIENTES);
				}
				else
				{
					printf("Primero debe cargar un cliente.\n");
				}

			break;
			case 4:

				if(estadoOpcionUno == TRUE)
				{
					ImprimirClientes(listaClientes, TAM_CLIENTES);
					CargarPedido(listaPedidos, TAM_PEDIDOS, listaClientes, TAM_CLIENTES);

				}
				else
				{
					printf("Para ingresar a esta opcion debe estar dado de alta almenos un Cliente.\n");

				}

			break;
			case 5:
			break;
			case 6:

				ImprimirClientes(listaClientes, TAM_CLIENTES);
				system("pause");

			break;
			case 7:
			break;
			case 8:
			break;
			case 9:
			break;
			case 10:
			break;

		}


		system("cls");
	}while(opcion !=0);






	return EXIT_SUCCESS;
}
