#include "Asesino.h"
#include "Soldado.h"

Asesino::Asesino(int pAsesinatos, int pStealth)
{
	asesinatos = pAsesinatos;
	stealth = pStealth;
	ataque = calcularAtaque;
	defensa = calcularDefensa;
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

int Asesino::getAtaque()
{

}

int Asesino::getDefensa()
{

}

int Asesino::calcularAtaque()
{
	return asesinatos;
}

int Asesino::calcularDefensa()
{
	return stealth*10;
}
