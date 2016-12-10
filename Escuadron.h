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
		int AtaqueEscuadron;
		int DefensaEscuadron;
		char tipo;

	public:

		Escuadron(string);
		Escuadron();
		~Escuadron();

		void setNombreEscuadron(string);
		string getNombreEscuadron();

		void addSoldado(Soldado*);
		Soldado* getSoldado(int);

		int getAtaqueEscuadron();
		int getDefensaEscuadron();

		void setTipo(char);
		char getTipo();

};

#endif