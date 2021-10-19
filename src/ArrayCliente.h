#ifndef ARRAYCLIENTE_H_
#define ARRAYCLIENTE_H_

typedef struct
{
	int idCliente;
	char nombreCliente[60];
	char cuitCliente[12];
	char direccionCliente[60];
	char localidadCliente[60];
	int isEmpty;

}eCliente;

/// @brief
///
/// @pre
/// @post
/// @param lista
/// @param tam
/// @return
int IniciarCliente(eCliente* lista, int tam);


/// @brief
///
/// @pre
/// @post
/// @param lista
/// @param tam
/// @param id
/// @param nombre
/// @param cuit
/// @param direccion
/// @param localidad
/// @return
int AgregarCliente(eCliente* lista, int tam, int id, char nombre[],char cuit[],char direccion[],char localidad[], int posicion);


/// @brief
///
/// @pre
/// @post
/// @param lista
/// @param tam
/// @return
int BuscarLibre(eCliente* lista, int tam);


/// @brief
///
/// @pre
/// @post
/// @param lista
/// @param tam
/// @param idCliente
/// @return
int CargarCliente (eCliente* lista, int tam, int idCliente);


/// @brief
///
/// @pre
/// @post
/// @param lista
/// @param tam
/// @param id
/// @return
int EncontrarClientePorId(eCliente* lista, int tam,int id);


/// @brief
///
/// @pre
/// @post
/// @param lista
/// @param tam
/// @return
int ModificarCliente (eCliente* lista, int tam);


/// @brief
///
/// @pre
/// @post
/// @param lista
/// @param tam
/// @return
int ImprimirClientes(eCliente* lista, int tam);


/// @brief
///
/// @pre
/// @post
/// @param cliente
void MostrarEmpleado (eCliente cliente);


/// @brief
///
/// @pre
/// @post
/// @param lista
/// @param tam
/// @param idIngresado
/// @return
int BajarCliente(eCliente* lista, int tam, int idIngresado);


/// @brief
///
/// @pre
/// @post
/// @param lista
/// @param tam
/// @return
int BajarClientePorId (eCliente* lista, int tam);
#endif /* ARRAYCLIENTE_H_ */
