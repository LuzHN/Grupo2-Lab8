#include "Asesino.h"
#include "Soldado.h"

Asesino::Asesino(string pNom, string pCiudad, int pEdad, int pAsesinatos, int pStealth):Soldado(pNom, pCiudad, pEdad)
{
	asesinatos = pAsesinatos;
	stealth = pStealth;
	AtaqueSoldado = calcularAtaque();
	DefensaSoldado = calcularDefensa();
}

Asesino::~Asesino()
{

}

void Asesino::setAsesinatos(int pAsesinatos)
{
	asesinatos = pAsesinatos;
}

int Asesino::getAsesinatos()
{
	return asesinatos;
}

void Asesino::setStealth(int pStealth)
{
	stealth = pStealth;
}

int Asesino::getStealth()
{
	return stealth;
}

int Asesino::calcularAtaque()
{
	return asesinatos;
}

int Asesino::calcularDefensa()
{
	return stealth*10;
}
