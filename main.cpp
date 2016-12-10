#include "Escuadron.h"
#include "Soldado.h"
#include "Arqueros.h"
#include "Asesino.h"
#include "CorazasDuras.h"

#include <iostream>
#include <vector>
#include <ncurses.h>
#include <cstdlib>
#include <sstream>
#include <string>


using namespace std;

int ImpresionMenu();

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

				clear();

				Escuadron* esc = new Escuadron(nombreEscuadron);

				printw("\n \n Ingrese a que bando se va agregar ese escuadron:  \n"
								"1. Bando 1.\n"
								"2. Bando 2. \n");
				refresh();

				char bando;

				bando = getch();
				clear();

				clear();

				printw("\n \n Ingrese que tipo de escuadron:  \n"
							"1. Frontal \n"
							"2. Vanguardia\n");
				refresh();

				char tip;

				tip = getch();
				clear();

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
						printw("\n Se ha agregado al bando 1.");
						refresh();
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
					else{
						bando2.push_back(esc);
						printw("\n Se ha agregado al bando 2");
						refresh();
					}
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
							char flechas[10];

							getstr(flechas);

							clear();

							int flechasInt = atoi(flechas);

							printw("\n \n Ingrese precision del arquero: ");
							char precision[10];

							getstr(precision);

							clear();

							int precisionInt = atoi(precision);

							if(flechasInt < 0 || precisionInt < 0){
								printw("\n \n No puede ingresar valores negativos.");
								refresh();
							} else{
								Soldado* sol = new Arqueros(nombre, ciudad, ed, flechasInt, precisionInt);

								printw("\n Ingrese el bando al que se va a agregar(Bando 1 o Bando 2): ");
								char posicionAgregar;

								posicionAgregar = getch();
								refresh();

								if(posicionAgregar=='1')
								{
									printw("\n\n Ingrese la posición del escuadron al que va a agregar este soldado: ");
									char posicionEscuadron;
									refresh();

									for (int i = 0; i < bando1.size(); ++i)
									{
										printw("%d",i);
										refresh();
										printw(". ");
										refresh();
										printw(bando1.at(i) -> getNombreEscuadron().c_str());
										refresh();
										printw("\n");
										refresh();
									}
									printw("\n\n");
									refresh();
									posicionEscuadron = getch();
									int posicionEscuadronInt = posicionEscuadron - '0';
									bando1.at(posicionEscuadronInt)->addSoldado(sol);



								}
								else if(posicionAgregar=='2')
								{
									printw("\n\n Ingrese la posición del escuadron al que va a agregar este soldado: ");
									char posicionEscuadron;
									refresh();

									for (int i = 0; i < bando2.size(); ++i)
									{
										printw("%d",i);
										refresh();
										printw(". ");
										refresh();
										printw(bando2.at(i) -> getNombreEscuadron().c_str());
										refresh();
										printw("\n");
										refresh();
									}
									printw("\n\n");
									refresh();
									posicionEscuadron = getch();
									int posicionEscuadronInt = posicionEscuadron - '0';
									bando2.at(posicionEscuadronInt)->addSoldado(sol);
								}
								else
								{
									printw("\n Valor incorrecto.");
									refresh();
								}
							}

							
							break;
						} 
						case '2':{
							printw("\n \n Ingrese cantidad de lanzas: ");
							char lanzas[10];

							getstr(lanzas);

							clear();

							int lanzasInt = atoi(lanzas);

							printw("\n \n Ingrese dureza de armadura: ");
							char dureza[10];

							getstr(dureza);

							clear();

							int durezaInt = atoi(dureza);

							if(lanzasInt < 0 || (durezaInt < 0||durezaInt>10)){
								printw("\n \n No puede ingresar valores negativos.");
								refresh();
							} else{
								Soldado* sol = new CorazasDuras(nombre, ciudad, ed, lanzasInt, durezaInt);
								printw("\n Ingrese el bando al que se va a agregar(Bando 1 o Bando 2): ");
								char posicionAgregar;

								posicionAgregar = getch();
								refresh();

								if(posicionAgregar=='1')
								{
									printw("\n\n Ingrese la posición del escuadron al que va a agregar este soldado: ");
									char posicionEscuadron;
									refresh();

									for (int i = 0; i < bando1.size(); ++i)
									{
										printw("%d",i);
										refresh();
										printw(". ");
										refresh();
										printw(bando1.at(i) -> getNombreEscuadron().c_str());
										refresh();
										printw("\n");
										refresh();
									}
									printw("\n\n");
									refresh();
									posicionEscuadron = getch();
									int posicionEscuadronInt = posicionEscuadron - '0';
									bando1.at(posicionEscuadronInt)->addSoldado(sol);



								}
								else if(posicionAgregar=='2')
								{
									printw("\n\n Ingrese la posición del escuadron al que va a agregar este soldado: ");
									char posicionEscuadron;
									refresh();

									string it;
									for (int i = 0; i < bando2.size(); ++i)
									{
										printw("%d",i);
										refresh();
										printw(". ");
										refresh();
										printw(bando2.at(i) -> getNombreEscuadron().c_str());
										refresh();
										printw("\n");
										refresh();
									}
									printw("\n\n");
									refresh();
									posicionEscuadron = getch();
									int posicionEscuadronInt = posicionEscuadron - '0';
									bando2.at(posicionEscuadronInt)->addSoldado(sol);
								}
								else
								{
									printw("\n Valor incorrecto.");
									refresh();
								}
							}
							break;
						} 
						case '3':{
							printw("\n \n Ingrese cantidad de asesinatos: ");
							char asesinatos[10];

							getstr(asesinatos);

							clear();

							int asesinatosInt = atoi(asesinatos);

							printw("\n \n Ingrese su capacidad para pasar desapercibido: ");
							char stealth[10];

							getstr(stealth);

							clear();

							int stealthInt = atoi(stealth);

							if(asesinatosInt < 0 || (stealthInt < 0||stealthInt>10)){
								printw("\n \n No puede ingresar valores negativos.");
								refresh();
							} else{
								Soldado* sol = new Asesino(nombre, ciudad, ed, asesinatosInt, stealthInt);
								printw("\n Ingrese el bando al que se va a agregar(Bando 1 o Bando 2): ");
								char posicionAgregar;

								posicionAgregar = getch();
								refresh();

								if(posicionAgregar=='1')
								{
									printw("\n\n Ingrese la posición del escuadron al que va a agregar este soldado: ");
									char posicionEscuadron;
									refresh();


									for (int i = 0; i < bando1.size(); ++i)
									{
										printw("%d",i);
										refresh();
										printw(". ");
										refresh();
										printw(bando1.at(i) -> getNombreEscuadron().c_str());
										refresh();
										printw("\n");
										refresh();
									}
									printw("\n\n");
									refresh();
									posicionEscuadron = getch();
									int posicionEscuadronInt = posicionEscuadron - '0';
									bando1.at(posicionEscuadronInt)->addSoldado(sol);



								}
								else if(posicionAgregar=='2')
								{
									printw("\n\n Ingrese la posición del escuadron al que va a agregar este soldado: ");
									char posicionEscuadron;
									refresh();

									for (int i = 0; i < bando2.size(); ++i)
									{
										printw("%d",i);
										refresh();
										printw(". ");
										refresh();
										printw(bando2.at(i) -> getNombreEscuadron().c_str());
										refresh();
										printw("\n");
										refresh();
									}
									printw("\n\n");
									refresh();
									posicionEscuadron = getch();
									int posicionEscuadronInt = posicionEscuadron - '0';
									bando2.at(posicionEscuadronInt)->addSoldado(sol);
								}
								else
								{
									printw("\n Valor incorrecto.");
									refresh();
								}
							}
							break;
						}
					}
				}
				break;
			}
			case '3':{ //empezar sim
				int defensa_total;
				int ataque_total;
				char invasor;
				char defensor;
				int cont = 0;
				bool juego_terminado;
				while(juego_terminado == false)
				{
					if(cont%2==0)
					{
						invasor = '1';
						defensor = '2';
					}
					else
					{
						invasor = '2';
						defensor = '1';
					}
					if(invasor == '1')
					{
						printw("\n Escoja un escuadron para atacar: ");
						refresh();
						char escuadron;
						for (int i = 0; i < bando1.size(); ++i)
						{
							if(bando1.at(i)->getTipo()=='1')
							{
								printw("%d",i);
								refresh();
								printw(". ");
								refresh();
								printw(bando1.at(i) -> getNombreEscuadron().c_str());
								refresh();
								printw("\n");
								refresh();
							}
						}
						printw("\n\n");
						refresh();
						escuadron = getch();
						ataque_total = bando1.at(escuadron-'0')->getAtaqueEscuadron();

						printw("\n Escoja un escuadron para atacar: ");
						refresh();
						char escuadron2;
						for (int i = 0; i < bando2.size(); ++i)
						{
							if(bando2.at(i)->getTipo()=='1')
							{
								printw("%d",i);
								refresh();
								printw(". ");
								refresh();
								printw(bando2.at(i) -> getNombreEscuadron().c_str());
								refresh();
								printw("\n");
								refresh();
							}
						}
						printw("\n\n");
						refresh();
						printw("\n\n");
						refresh();
						escuadron2 = getch();
						defensa_total = bando2.at(escuadron2-'0')->getDefensaEscuadron();
						if(ataque_total > defensa_total*10)
						{
							bando2.erase(bando2.begin()-(escuadron2-'0'));
						}
						else
						{
							printw("\n El ataque falló");
						}
					}
					else
					{
						printw("\n Escoja un escuadron para atacar: ");
						refresh();
						char escuadron;
						for (int i = 0; i < bando2.size(); ++i)
						{
							if(bando2.at(i)->getTipo()=='1')
							{
								printw("%d",i);
								refresh();
								printw(". ");
								refresh();
								printw(bando2.at(i) -> getNombreEscuadron().c_str());
								refresh();
								printw("\n");
								refresh();
							}
						}
						printw("\n\n");
						refresh();
						escuadron = getch();
						ataque_total = bando2.at(escuadron-'0')->getAtaqueEscuadron();

						printw("\n Escoja un escuadron para atacar: ");
						refresh();
						char escuadron2;
						for (int i = 0; i < bando1.size(); ++i)
						{
							if(bando1.at(i)->getTipo()=='1')
							{
								printw("%d",i);
								refresh();
								printw(". ");
								refresh();
								printw(bando1.at(i) -> getNombreEscuadron().c_str());
								refresh();
								printw("\n");
								refresh();
							}
						}
						printw("\n\n");
						refresh();
						printw("\n\n");
						refresh();
						escuadron2 = getch();
						defensa_total = bando1.at(escuadron2-'0')->getDefensaEscuadron();
						if(ataque_total > defensa_total*10)
						{
							bando1.erase(bando1.begin()-(escuadron2-'0'));
						}
						else
						{
							printw("\n El ataque falló");
						}
					}
					cont++;
				}
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