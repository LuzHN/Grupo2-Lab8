#ifndef Soldado_h
#define Soldado_h

#include <iostream>

using std::string;

class Soldado{
	protected:
		string NombreSoldado;
		string CiudadProcedencia;
		int EdadSoldado;

		int AtaqueSoldado;
		int DefensaSoldado;

	public:

		Soldado(string, string, int);
		Soldado();
		~Soldado();
		
		void setNombreSoldado(string);
		string getNombreSoldado();

		void setCiudadProcedencia(string);
		string getCiudadProcedencia();

		void setEdadSoldado(int);
		int getEdadSoldado();

		virtual int getAtaqueSoldado();
		virtual int getDefensaSoldado();


};

#endif
