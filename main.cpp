#include "Escuadron.h"
#include "Soldado.h"
#include "Arqueros.h"
#include "Asesino.h"
#include "CorazasDuras.h"

#include <iostream>
#include <vector>
#include <ncurses.h>
#include <cstdlib>


using namespace std;

int ImpresionMenu();
void cleanScreen();

int main(){

	initscr();


	vector<Escuadron*> bando1;
	vector<Escuadron*> bando2;


	int opcion = 0;

	while(opcion != 4){
		opcion = ImpresionMenu();



		

		switch(opcion){
			case 1:{ //crear escuadron
				printw("prueba");
				break;
			}
			case 2:{ //crear soldado
				break;
			}
			case 3:{ //empezar sim
				break;
			}
			case 4:{ //salir
				printw("\n\n Saliendo...");
				endwin();
				break;
			}
			default:{
				break;
			}
		}
	}
	return 0;
}

int ImpresionMenu(){
	int opcion = 0;
	printw("\n \n ====================== M e n u ================================\n"
				"\n"
				"1. Agregar Escuadron. \n"
				"2. Agregar Soldado. \n"
				"3. Empezar Sim. \n"
				"4. Salir. \n \n");
	refresh();
	opcion = getch();
	cleanScreen();

	return opcion;


}

void cleanScreen(){

	for (int i = 0; i < LINES; ++i)
	{
		for (int j = 0; j < COLS; ++j)
		{
			mvprintw(i, j, "         .        ");
		}
	}
}