#include "Arqueros.h"
#include "Soldado.h"

Arqueros::Arqueros(string pNom, string pCiudad, int pEdad, int pFlechas, double pPrecision):Soldado(pNom, pCiudad, pEdad)
{
	flechas = pFlechas;
	precision = pPrecision;
	AtaqueSoldado = calcularAtaque();
	DefensaSoldado = 0;
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

void Arqueros::setPrecision(double pPrecision)
{
	precision = pPrecision;
}

double Arqueros::getPrecision()
{
	return precision;
}

int Arqueros::calcularAtaque()
{
	return flechas*(precision/1000);
}