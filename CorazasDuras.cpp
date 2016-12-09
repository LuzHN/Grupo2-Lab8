#include "CorazasDuras.h"
#include <iostream>
#include "Soldado.h"

CorazasDuras::CorazasDuras(){

}

CorazasDuras::CorazasDuras(string pNom, string pCiudad, int pEdad, int pDureza, int pLanzas):Soldado(pNom, pCiudad, pEdad)
{
	dureza = pDureza;
	cantidadLanzas = pLanzas;
	AtaqueSoldado = cantidadLanzas;
	DefensaSoldado = dureza;
}

CorazasDuras::~CorazasDuras(){

}

void CorazasDuras::setDureza(int pDureza){
	dureza = pDureza;
}

int CorazasDuras::getDureza(){
	return dureza;
}

void CorazasDuras::setCantidadLanzas(int pCantiadadLanzas){
	cantidadLanzas = pCantiadadLanzas;
}

int CorazasDuras::getCantidadLanzas(){
	return cantidadLanzas;
}
