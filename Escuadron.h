#ifndef Escuadron_h
#define Escuadron_h

#include "Soldado.h"
#include <iostream>
#include <vector>

using namespace std;

class Escuadron{

	protected:
		string NombreEscuadron;
		vector<Soldado*> soldados;

	public:

		Escuadron();
		~Escuadron();

		void setNombreEscuadron(string);
		string getNombreEscuadron();

		void addSoldado(Soldado*);
		Soldado* getSoldado(int);

};

#endif