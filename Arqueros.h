#pragma once
#include "Soldado.h"

class Arqueros: public Soldado
{
	private:
		int flechas;
		int precision;

	public:
		Arqueros(string,string,int,int,int);
		~Arqueros();
		void setFlechas(int);
		int getFlechas();
		void setPrecision(int);
		int getPrecision();
		virtual int getAtaqueSoldado();
		virtual int getDefensaSoldado();

};