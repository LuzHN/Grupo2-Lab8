#include "Asesino.h"
#include "Soldado.h"

Asesino::Asesino(string pNom, string pCiudad, int pEdad, int pAsesinatos, int pStealth):Soldado(pNom, pCiudad, pEdad)
{
	asesinatos = pAsesinatos;
	stealth = pStealth;
	AtaqueSoldado = getAtaqueSoldado();
	DefensaSoldado = getDefensaSoldado();
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

int Asesino::getAtaqueSoldado()
{
	return asesinatos;
}

int Asesino::getDefensaSoldado()
{
	return stealth*10;
}
