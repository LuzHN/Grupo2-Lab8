#include "CorazasDuras.h"
#include <iostream>

CorazasDuras::CorazasDuras(){

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
