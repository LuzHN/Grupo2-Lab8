main:	main.o Escuadron.o CorazasDuras.o Asesino.o Soldado.o Arqueros.o 
	g++ main.o Escuadron.o CorazasDuras.o Asesino.o Soldado.o Arqueros.o -lncurses -o main

main.o: main.cpp Escuadron.h CorazasDuras.h Asesino.h Soldado.h Arqueros.h
	g++ -c main.cpp

Escuadron.o:	Escuadron.h Escuadron.cpp
	g++ -c Escuadron.cpp

CorazasDuras.o:	CorazasDuras.h CorazasDuras.cpp
	g++ -c CorazasDuras.cpp

Asesino.o:	Asesino.h Asesino.cpp
	g++ -c Asesino.cpp

Soldado.o:	Soldado.h Soldado.cpp
	g++ -c Soldado.cpp

Arqueros.o:	Arqueros.h Arqueros.cpp
	g++ -c Arqueros.cpp

clean:
	rm -f *.o main 
