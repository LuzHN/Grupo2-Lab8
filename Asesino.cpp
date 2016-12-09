#include "Asesino.h"

Asesino::Asesino(int pAsesinatos, int pStealth)
{
	asesinatos = pAsesinatos;
	stealth = pStealth;
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

