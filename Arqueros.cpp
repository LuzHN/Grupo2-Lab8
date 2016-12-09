#include "Arqueros.h"
#include "Soldado.h"

Arqueros::Arqueros(int pFlechas, double pPrecision)
{
	flechas = pFlechas;
	precision = pPrecision;
	soldado.setAtaque(calcularAtaque);
	soldado.setDefensa(calcularDefensa);
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