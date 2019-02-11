/*! 
	\file Monomio.hpp
	\brief Definición de la clase Monomio
*/

#ifndef _MONOMIO_HPP_
#define _MONOMIO_HPP_

// Para usar la funciones pow y std::abs
#include <cmath>

// Para controlar las pre y post condiciones mediante asertos
#include <cassert>

#define COTA_ERROR 1.0e-6  //!< Cota de error para la comparación números reales

// Se incluye la clase Monomio dentro del espacio de nombre de la asigantura: ed
namespace ed
{
//!  Definición de la clase Monomio:  \f$ coeficiente \hspace{1ex} X^{grado} \f$ 
class Monomio
{
	//! \name Atributos privados de la clase Monomio
	private:
		double coeficiente_;
		int grado_;

	//! \name Funciones o métodos públicos de la clase Monomio
	public:

	//! \name Constructores de la clase Monomio
		inline Monomio(double coeficiente=0.0,int grado=0){
			#ifndef NDEBUG
				assert( grado >= 0);
			#endif
			coeficiente_=coeficiente;
			grado_=grado;
			#ifndef NDEBUG
				assert( std::abs(coeficiente_-coeficiente)< COTA_ERROR );
				assert(grado_ == grado);
			#endif
		};

		inline Monomio(Monomio const  &m){
			coeficiente_=m.coeficiente_;
			grado_=m.grado_;
			#ifndef NDEBUG
			assert(std::abs(coeficiente_ - m.coeficiente_) < COTA_ERROR);
			assert(grado_ == m.grado_);
			#endif
		};

	//! \name Observadores: funciones de consulta de la clase Monomio

		inline const double getCoeficiente(){return coeficiente_;};
		inline const int getGrado(){return grado_;};

	//! \name Funciones de modificación de la clase Monomio

		inline void setCoeficiente(double f){
			coeficiente_=f;
			#ifndef NDEBUG
			assert(std::abs(coeficiente_-f) < COTA_ERROR);
			#endif
		};

		inline void setGrado(int g){
			#ifndef NDEBUG
			assert( g >= 0);
			#endif

			grado_=g;

			#ifndef NDEBUG
			assert(grado_ == g);
			#endif

		};


	/////////////////////////////////////////////////

	//! \name Operadores de la clase Monomio

	// Operadores de asignación

		// COMPLETAR LOS COMENTARIOS DE DOXYGEN
		Monomio & operator=(Monomio const &m);

		// COMPLETAR LOS COMENTARIOS DE DOXYGEN
		Monomio & operator=(double const &x);


	// Operadores aritméticos y asignación

		// COMPLETAR LOS COMENTARIOS DE DOXYGEN
		Monomio & operator+=(Monomio const &m);


		// COMPLETAR EL RESTO DE OPERADORES


	/////////////////////////////////////////////////////////////////////////////////////

	//! \name Funciones lectura y escritura de la clase Monomio

	// COMPLETAR


	///////////////////////////////////////////////////////////////////////

	//! \name Funciones auxiliares de la clase Monomio

	// COMPLETAR



};  // Fin de la definición de la clase Monomio

}  //  Fin de namespace ed.

// _MONOMIO_HPP_
#endif
