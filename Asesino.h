#pragma once
#include "Soldado.h"

class Asesino: public Soldado
{
	private:
		int asesinatos;
		int stealth;


	public:
		Asesino(int,int);
		~Asesino();
		void setAsesinatos(int);
		int getAsesinatos();
		void setStealth(int);
		int getStealth();
		int calcularAtaque();
		int calcularDefensa();
};