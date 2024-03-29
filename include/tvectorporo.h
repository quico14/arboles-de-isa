/**
*
*
*\author Isabel Martín Herrero 48539974 S
*
*
**/

/**
*\file tlistaporo.h
*\brief Archivo .h de la clase tporo
*Archivo que contiene la declaración la clase TPoro
*
**/

#ifndef __T_VECTOR_PORO__
#define __T_VECTOR_PORO__


#include <iostream>
#include "tporo.h"
using namespace std;

/** \class TVectorCom
*	\brief Clase que contiene un vector de poros.
*/
class TVectorPoro
{
	public:
		/** \brief Constructor por defecto 
		*Construye un vector de 0 componenetes
		*/
		TVectorPoro();

		/** \brief Constructor sobrecargado
		*Construye un vector de n componenetes
		*/
		TVectorPoro(const int);

		/** \brief Operator=
		* Asigna un complejo a otro.
		*/
		TVectorPoro(const TVectorPoro&);

		/** \brief Destructor
		* Hace que el vector tenga 0 componentes.
		*/
		~TVectorPoro();

		/** \brief Operator=
		* Asigna un vector a otro.
		*/
		TVectorPoro& operator=(const TVectorPoro &);

		/** \brief Operator ==
		* Devuelve true si ambos vectores son iguales.
		*/
		bool operator==(const TVectorPoro &) const;

		/** \brief Operator !=
		* Devuelve true si ambos vectores son distintos.
		*/
		bool operator!=(const TVectorPoro &) const;

		/** \brief Operator[]
		*De lectura y escritura operador corchete izquierda.
		*/
		TPoro & operator[](const int);

		/** \brief Operator[] const 
		*De lectura, operador corchete derecha.
		*/
		TPoro operator[](const int) const;

		/** \brief Tamano
		* Retornara el tamano del vector.
		*/
		int Longitud() const;

		//! \brief
		/*! Retornara el numero de componentes ocupadas distintas de 0*/
		int Cantidad() const;

		/** \brief Redimensionar
		* Cambia el vector al tamano que se pasa por parametro
		*/
		bool Redimensionar(const int);

		/** \brief Operator << 
		*Saca por pantalla los elementos del vector
		*/	
		friend ostream & operator<<(ostream &,const  TVectorPoro &);
	
	private:

		/** \brief Miembro datos
		* Puntero a un array de poros
		*/
		TPoro* datos;

		/** \brief Miembro
		* Almacena el tamano del vector
		*/
		int dimension;

		/** \brief Miembro error
		* Item de caso error que almacena un numero complejo vacio.
		*/
		TPoro error;
};

#endif
