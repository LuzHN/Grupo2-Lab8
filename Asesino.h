#pragma once
#include "Soldado.h"

class Asesino: public Soldado
{
	private:
		int asesinatos;
		int stealth;
		int ataque;
		int defensa;

	public:
		Asesino(string,string,int,int,int);
		~Asesino();
		void setAsesinatos(int);
		int getAsesinatos();
		void setStealth(int);
		int getStealth();
		int getAtaque();
		int getDefensa();
		int calcularAtaque();
		int calcularDefensa();
		virtual int getAtaqueSoldado();
		virtual int getDefensaSoldado();
};
