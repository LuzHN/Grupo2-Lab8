#include "Soldado.h"


Soldado :: Soldado(){

}

Soldado :: Soldado(string pnom, string pciudad, int edad){
	NombreSoldado = pnom;
	CiudadProcedencia = pciudad;
	EdadSoldado = edad;
}

Soldado :: ~Soldado(){

}

void Soldado :: setNombreSoldado(string pNombre){
	NombreSoldado = pNombre;
}

string Soldado :: getNombreSoldado(){
	return NombreSoldado;
}

void Soldado :: setCiudadProcedencia(string pCiudad){
	CiudadProcedencia = pCiudad;
}

string Soldado :: getCiudadProcedencia(){
	return CiudadProcedencia;
}

void Soldado :: setEdadSoldado(int pEdad){
	EdadSoldado = pEdad;
}

int Soldado :: getEdadSoldado(){
	return EdadSoldado;
}

int Soldado :: getAtaqueSoldado(){
	return AtaqueSoldado;
}

int Soldado :: getDefensaSoldado(){
	return DefensaSoldado;
}

