#ifndef NEXO_H_
#define NEXO_H_


/// @brief
///
/// @pre
/// @post
/// @param listaPedido
/// @param tamPedido
/// @param listaCliente
/// @param tamCliente
/// @param idPedido
/// @return
int CargarPedido (ePedido* listaPedido, int tamPedido, eCliente* listaCliente, int tamCliente);


/// @brief
///
/// @pre
/// @post
/// @param lista
/// @param tam
/// @param id
/// @param estadoPedido
/// @param kilosPedido
/// @param idCliente
/// @param posicion
/// @return
int AgregarPedido(ePedido* lista, int tam, int id, int estadoPedido, float kilosPedido, int idCliente, int posicion);

#endif /* NEXO_H_ */
