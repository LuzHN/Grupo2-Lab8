#include "Escuadron.h"

Escuadron :: Escuadron(){

}

Escuadron :: ~Escuadron(){

}

void Escuadron :: setNombreEscuadron(string pNombre){
	NombreEscuadron = pNombre;
}

string Escuadron :: getNombreEscuadron(){
	return NombreEscuadron;
}

void Escuadron :: addSoldado(Soldado* sol){
	soldados.push_back(sol);
}

Soldado* Escuadron :: getSoldado(int pos){
	return soldados.at(pos);
}