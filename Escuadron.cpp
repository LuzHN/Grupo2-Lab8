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

int Escuadron :: getAtaqueEscuadron(vector<Soldado*> sol){
	int ataque = 0;

	for (int i = 0; i < sol.size(); ++i)
	{
		ataque = ataque + sol.at(i) -> getAtaqueSoldado();
	}

	return ataque;
}

int Escuadron :: getDefensaEscuadron(vector<Soldado*> sol){
	int defensa = 0;

	for (int i = 0; i < sol.size(); ++i)
	{
		defensa = defensa + sol.at(i) -> getDefensaSoldado();
	}

	return defensa;
}