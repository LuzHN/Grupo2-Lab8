#ifndef Soldado_h
#define Soldado_h

#include <iostream>

using std::string;

class Soldado{
	protected:
		string NombreSoldado;
		string CiudadProcedencia;
		int EdadSoldado;

	public:

		Soldado();
		~Soldado();
		
		void setNombreSoldado(string);
		string getNombreSoldado();

		void setCiudadProcedencia(string);
		string getCiudadProcedencia();

		void setEdadSoldado(int);
		int getEdadSoldado();


};

#endif
