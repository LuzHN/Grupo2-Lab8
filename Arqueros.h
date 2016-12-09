#pragma once
#include "Soldado.h"

class Arqueros: public Soldado
{
	private:
		int flechas;
		double precision;

	public:
		Arqueros(int,double);
		~Arqueros();
		void setFlechas(int);
		int getFlechas();
		void setPrecision(double);
		double getPrecision();
		int calcularAtaque();

};