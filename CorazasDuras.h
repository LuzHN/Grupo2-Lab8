 #ifndef CORAZASDURAS_H
 #define CORAZASDURAS_H
 #include "Soldado.h"

class CorazasDuras: public Soldado{

private: 
 	int dureza;
 	int cantidadLanzas;
public:
	CorazasDuras();
	~CorazasDuras();
	void setDureza(int);
	int getDureza();
	void setCantidadLanzas(int);
	int getCantidadLanzas();

};
#endif
