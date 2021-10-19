#ifndef ARRAYPEDIDO_H_
#define ARRAYPEDIDO_H_

typedef struct
{
	int idPedido;
	int estadoPedido;
	float kilosPedido;
	int idCliente;
	int isEmpty;

}ePedido;


/// @brief
///
/// @pre
/// @post
/// @param lista
/// @param tam
/// @return
int BuscarPedidoLibre(ePedido* lista, int tam);



#endif /* ARRAYPEDIDO_H_ */
