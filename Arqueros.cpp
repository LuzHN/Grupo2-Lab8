#include "Arqueros.h"
#include "Soldado.h"

Arqueros::Arqueros(string pNom, string pCiudad, int pEdad, int pFlechas, int pPrecision):Soldado(pNom, pCiudad, pEdad)
{
	flechas = pFlechas;
	precision = pPrecision;
	AtaqueSoldado = getAtaqueSoldado();
	DefensaSoldado = getDefensaSoldado();
}

Arqueros::~Arqueros()
{

}

void Arqueros::setFlechas(int pFlechas)
{
	flechas = pFlechas;
}

int Arqueros::getFlechas()
{
	return flechas;
}

void Arqueros::setPrecision(int pPrecision)
{
	precision = pPrecision;
}

int Arqueros::getPrecision()
{
	return precision;
}

int Arqueros::getAtaqueSoldado()
{
	return flechas*(precision/1000);
}

int Arqueros::getDefensaSoldado()
{
	return 0;
}
