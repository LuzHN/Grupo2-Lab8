 #ifndef CORAZASDURAS_H
 #define CORAZASDURAS_H
 #include "Soldado.h"

class CorazasDuras: public Soldado{

private: 
 	int dureza;
 	int cantidadLanzas;
 	
public:
	CorazasDuras();
	CorazasDuras(string,string,int,int,int);
	~CorazasDuras();
	void setDureza(int);
	int getDureza();
	void setCantidadLanzas(int);
	int getCantidadLanzas();
	virtual int getAtaqueSoldado();
	virtual int getDefensaSoldado();
};
#endif
