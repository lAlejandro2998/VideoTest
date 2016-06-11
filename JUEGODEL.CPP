#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
//juegos
int aleatorio()
{
	int resp2;
	randomize();
	resp2 = random(1000);//ise esto para ver q numero imprimia y solo comprovar si deverda funcionava el randon
	cout << "valor es " << resp2;
}


void presentacion()
{


}

void intrucciones()
{
	cout << "hola mundo";


}
void juego()
{
	int valor;

}
void salir()
{

}

void main()
{
	int menu;
	for (ciclo = 0; ciclo == 0)
	{

		cout << "0. Presentacion";
		cout << "1. Indicaciones";
		cout << "2. Juego";
		cout << "3. Salir";
		cin >> menu;
		switch (menu)
		{
			case 0: presentacion();
					breack();

			case 1: indicaciones();
					breack();

			case 2: juego();
					breack();

			case 3: salir();
				    breack();
		}
	}
}
