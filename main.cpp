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


	char opcion;

	while(opcion != '4'){
		opcion = ImpresionMenu();

		

		switch(opcion){
			case '1':{ //crear escuadron
				
				char nombreEscuadron[50];

				printw("\n \n Ingrese nombre del escuadron: ");
				refresh();

				getstr(nombreEscuadron);

				clear();

				Escuadron* esc = new Escuadron(nombreEscuadron);

				printw("\n \n Ingrese a que bando se va agregar ese escuadron:  \n"
								"1. Bando 1.\n"
								"2. Bando 2. \n");
				refresh();

				char bando;

				bando = getch();

				clear();

				printw("\n \n Ingrese que tipo de escuadron:  \n"
							"1. Frontal \n"
							"2. Vanguardia\n");
				refresh();

				char tip;

				tip = getch();

				clear();

				if(tip == '1'){
					esc -> setTipo('1');
				}
				if(tip == '2'){
					esc -> setTipo('2');
				} 

				if(bando == '1'){
					
					if(esc->getTipo()=='2'){
						int cont = 0;

						for (int i = 0; i < bando1.size(); ++i)
						{
							if(bando1.at(i) -> getTipo() == '2'){
								cont++;
							}
						}

						if(cont == 1){
							printw("\n \n No puede agregar mas escuadrones de Vanguardia al bando 1");
							refresh();
						} else{
							bando1.push_back(esc);
							printw("\n Se ha agregado al bando 1");
							refresh();
					}
				}
					else{
						bando1.push_back(esc);
					}
					
				} else if(bando == '2'){
					
					int cont = 0;
					if(esc->getTipo()=='2'){
						for (int i = 0; i < bando2.size(); ++i)
						{
							if(bando2.at(i) -> getTipo() == '2'){
								cont++;
							}
						}

						if(cont == 1){
							printw("\n \n No puede agregar mas escuadrones de Vanguardia al bando 2");
							refresh();
						} else{
							bando2.push_back(esc);
							printw("\n Se ha agregado al bando 2");
							refresh();
						}
					}
					else
						bando2.push_back(esc);
				} else{
					printw("\n Valor ingresado incorrecto.");
					refresh();
				}

				break;
			}
			case '2':{ //crear soldado
				printw("\n \n Ingrese el nombre del soldado: ");
				refresh();

				char nombre[20];

				getstr(nombre);

				clear();

				printw("\n \n Ingrese ciudad del soldado: ");
				refresh();

				char ciudad[20];

				getstr(ciudad);

				clear();

				printw("\n \n Ingrese edad del soldado: ");

				char edad;

				edad = getch();

				clear();

				int ed = edad - '0';

				if(ed <= 0){
					printw("\n \n Edad invalida");
					refresh();
				} else{
					printw("\n \n Ingrese tipo de soldado: "
								"1. Arquero. \n"
								"2. Coraza Dura. \n"
								"3. Asesino. \n \n");
					refresh();

					char tipo;
					tipo = getch();

					clear();

					switch(tipo){
						case '1':{
							printw("\n \n Ingrese cantidad de flechas: ");
							char flechas;

							flechas = getch();

							clear();

							int flechasInt = flechas - '0';

							printw("\n \n Ingrese precision del arquero: ");
							char precision;

							precision = getch();

							clear();

							int precisionInt = precision - '0';

							if(flechasInt < 0 || precisionInt < 0){
								printw("\n \n No puede ingresar valores negativos.");
								refresh();
							} else{
								Soldado* sol = new Arqueros(nombre, ciudad, ed, flechas, precisionInt);
							}

							
							break;
						} 
						case '2':{
							printw("\n \n Ingrese cantidad de lanzas: ");
							char lanzas;

							lanzas = getch();

							int lanzasInt = lanzas - '0';

							//printw("\n \n ")
							break;
						} 
						case '3':{
							break;
						}
					}
				}
				break;
			}
			case '3':{ //empezar sim
				break;
			}
			case '4':{ //salir
				printw("\n\n Saliendo...");
				refresh();
				endwin();
				break;
			}
			default:{
				break;
			}
		}
	}
	endwin();
	return 0;
}

int ImpresionMenu(){
	char opcion;
	printw("\n \n ====================== M e n u ================================\n"
				"\n"
				"1. Agregar Escuadron. \n"
				"2. Agregar Soldado. \n"
				"3. Empezar Sim. \n"
				"4. Salir. \n \n");

	refresh();
	opcion = getch();
	clear();

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