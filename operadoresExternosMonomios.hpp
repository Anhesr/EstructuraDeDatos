/*! 
	\file operadoresExternosMonomios.hpp
	\brief Ficheros con los prototipos de los operadores externos de la clase Monomio
*/

#ifndef _OperadoresExternosMonomios_HPP_
#define _OperadoresExternosMonomios_HPP_

// Facilita la entrada y salida
#include <iostream>

#include "Monomio.hpp"

// Para la sobrecarga de los operadores de flujo: << y >>
using std::istream;
using std::ostream;

// Espacio de nombre de la asigantura: ed
namespace ed
{
//////////////////////////////////////////////////////////////////////////////////////

	//! \name Operadores de igualdad  
		/**
		@fn bool operator==(ed::Monomio const & m1, ed::Monomio const & m2)
		@brief Operador de igualdad que comprueba si dos monomios son iguales
		@param ed::Monomio const & m1, ed::Monomio const & m2
		@return bool
		@post El valor devuelto es verdadero si son iguales(mismos coeficiente y grado)
		@post El valor devuelto es falso si son distintos
		*/
	bool operator==(ed::Monomio const & m1, ed::Monomio const & m2);

		/**
		@fn bool operator==(ed::Monomio const & m1, double const & m2)
		@brief Operador de igualdad que comprueba si el coeficiente de un monomio es igual a un Número
		@param ed::Monomio const & m1, double const & m2
		@return bool
		@post El valor devuelto es verdadero si son iguales el coeficiente y el número, y el grado del monomio es 0
		@post El valor devuelto es falso si son distintos
		*/
	bool operator==(ed::Monomio const & m1, double const & m2);

		/**
		@fn bool operator==(double const & m2, ed::Monomio const & m1)
		@brief Operador de igualdad que comprueba si el coeficiente de un monomio es igual a un Número
		@param double const & m2, ed::Monomio const & m1
		@return bool
		@post El valor devuelto es verdadero si son iguales el coeficiente y el número, y el grado del monomio es 0
		@post El valor devuelto es falso si son distintos
		*/
	bool operator==(double const & m2, ed::Monomio const & m1);


	//! \name Operadores de desigualdad 

		/**
		@fn bool operator!=(ed::Monomio const & m1, ed::Monomio const & m2)
		@brief Operador de igualdad que comprueba si dos monomios son distintos
		@param ed::Monomio const & m1, ed::Monomio const & m2
		@return bool
		@post El valor devuelto es verdadero si son distintos(mismos coeficiente o grado)
		@post El valor devuelto es falso si son iguales
		*/
	bool operator!=(ed::Monomio const & m1, ed::Monomio const & m2);

		/**
		@fn bool operator!=(ed::Monomio const & m1, double const & m2)
		@brief Operador de igualdad que comprueba si dos monomios son distintos
		@param ed::Monomio const & m1, double const & m2
		@return bool
		@post El valor devuelto es verdadero si el coeficiente del monimio y el numero son diferentes o el grado es distinto de 0
		@post El valor devuelto es falso si son iguales
		*/
	bool operator!=(ed::Monomio const & m1, double const & m2);

		/**
		@fn bool operator!=(double const & m2, ed::Monomio const & m1)
		@brief Operador de igualdad que comprueba si dos monomios son distintos
		@param double const & m2, ed::Monomio const & m1
		@return bool
		@post El valor devuelto es verdadero si el coeficiente del monimio y el numero son diferentes o el grado es distinto de 0
		@post El valor devuelto es falso si son iguales
		*/
	bool operator!=(double const & m2, ed::Monomio const & m1);


	///////////////////////////////////////////////////

	//! \name Operadores unarios prefijos

	// COMPLETAR LOS COMENTARIOS DE DOXYGEN

	ed::Monomio & operator+(ed::Monomio const & m);
	ed::Monomio & operator-(ed::Monomio const & m);

	// COMPLETAR EL OTRO OPERADOR UNARIO PREFIJO: resta


	//////////////////////////////////////////////////////////

	//! \name Operador binario de la suma 

	// COMPLETAR LOS COMENTARIOS DE DOXYGEN
	 ed::Monomio & operator+ (ed::Monomio const &m1, ed::Monomio const &m2);



	//////////////////////////////////////////////////////////
	//! \name Operador binario de la resta 

	ed::Monomio & operator- (ed::Monomio const &m1, ed::Monomio const &m2);


	///////////////////////////////////////////////////////////////////////////
	//! \name Operadores binarios de la multiplicación 

	// COMPLETAR
	ed::Monomio & operator*(ed::Monomio const &m1, ed::Monomio const &m2);
	ed::Monomio & operator*(ed::Monomio const &m1, double const & x);
	ed::Monomio & operator*(double const & x,ed::Monomio const &m1);

	///////////////////////////////////////////////////////////////////////////

	//! \name Operadores binarios de la división 

	ed::Monomio & operator/(ed::Monomio const &m1, ed::Monomio const &m2);
	ed::Monomio & operator/(ed::Monomio const &m1, double const & x);
	ed::Monomio & operator/(double const & x,ed::Monomio const &m1);


	/////////////////////////////////////////////////////////////////////////////

	//! \name Sobrecarga de los operadores de entrada y salida 

	// COMPLETAR LOS COMENTARIOS DE DOXYGEN
	 istream &operator>>(istream &stream, ed::Monomio &m);

	// COMPLETAR LOS COMENTARIOS DE DOXYGEN
	 ostream &operator<<(ostream &stream, ed::Monomio const &m);

}  // Fin de namespace ed.

#endif // _OperadoresExternosMonomios_HPP_


