#pragma once
#include "Soldado.h"

class Soldado: public Soldado
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