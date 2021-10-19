#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_


/// @brief
///
/// @pre
/// @post
void MostrarMenu();

/// @brief Valida que el caracter ingresado sea un char y no un digito
/// @param Caracter que busco validar
/// @return Caracter validado
char ValidarChar (char);


/// @brief
///
/// @pre
/// @post
/// @param mensaje
/// @param numero
/// @return
int PedirInt (char mensaje[], int* numero);



/// @brief
///
/// @pre
/// @post
/// @param mensaje
/// @param numero
/// @return
float PedirFloat (char mensaje[], float* numero);

/// @brief Funcion que solicita un caracter
/// @param Mensaje Texto que se muestra al pedir el caracter
/// @return El valor que retorna la funcion
char PedirChar (char[]);

/// @brief
///
/// @pre
/// @post
/// @param mensaje
/// @param stringIngresado
/// @return
int PedirStringSoloLetras (char mensaje[], char stringIngresado[]);


/// @brief
///
/// @pre
/// @post
/// @param mensaje
/// @param stringIngresado
/// @return
int PedirStringAlfanumerico (char mensaje[], char stringIngresado[]);


/// @brief
///
/// @pre
/// @post
/// @param mensaje
/// @param stringIngresado
/// @return
int PedirStringNumerico (char mensaje[], char stringIngresado[]);


/// @brief Funcion que calcula la suma de dos numeros ingresados
/// @param primerNumero primer numero involucrado en la operacion
/// @param segundoNumero segundo numero involucrado en la operacion
/// @return valor que devuelve la funcion (suma de ambos numeros)
int SumarNumeros (int, int);



/// @brief Funcion que calcula la resta de dos numeros ingresados
/// @param primerNumero primer numero involucrado en la operacion
/// @param segundoNumero segundo numero involucrado en la operacion
/// @return valor que devuelve la funcion (resta de ambos numeros)
int RestarNumeros (int, int);


/// @brief Funcion que calcula el cociente de dos numeros ingresados
/// @param primerNumero dividendo de la operacion
/// @param segundoNumero divisor de la operacion
/// @return valor que devuelve la funcion (cociente)
float DividirNumeros (int primerNumero, int segundoNumero);


/// @brief Funcion que calcula el producto de dos numeros ingresados
/// @param primerNumero primer numero involucrado en la operacion
/// @param segundoNumero segundo numero involucrado en la operacion
/// @return valor que devuelve la funcion (producto)
int MultiplicarNumeros (int primerNumero, int segundoNumero);


/// @brief Valida si un numero esta dentro de un intervalo definido por el usuario
/// @param numero Dato a validar
/// @param min Valor minimo que puede tomar el numero ingresado
/// @param max Valor maximo que puede tomar el numero ingresado
/// @param mensaje Texto que se muestra al pedir el numero
/// @return valor que devuelve la funcion
int ValidarEnteroEnIntervalo (int numero, int min, int max);


 /// @brief
 ///
 /// @pre
 /// @post
 /// @param cadena
 /// @return
int ValidarCadenaSiEsNumero (char cadena[]);


/// @brief
///
/// @pre
/// @post
/// @param str
/// @return
int ValidarCadenaEsSoloLetras(char str[]);


/// @brief
///
/// @pre
/// @post
/// @param str
/// @return
int ValidarCadenaEsAlfanumerica(char str[]);


#endif /* BIBLIOTECA_H_ */


