#include "Escuadron.h"

Escuadron :: Escuadron(){

}

Escuadron :: ~Escuadron(){

}

Escuadron :: Escuadron(string nom){
	NombreEscuadron = nom;
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

int Escuadron :: getAtaqueEscuadron(){
	int ataque = 0;

	for (int i = 0; i < soldados.size(); ++i)
	{
		ataque = ataque + soldados.at(i) -> getAtaqueSoldado();
	}

	return ataque;
}

int Escuadron :: getDefensaEscuadron(){
	int defensa = 0;

	for (int i = 0; i < soldados.size(); ++i)
	{
		defensa = defensa + soldados.at(i) -> getDefensaSoldado();
	}

	return defensa;
}

void Escuadron :: setTipo(char tip){
	tipo = tip;
}

char Escuadron :: getTipo(){
	return tipo;
}