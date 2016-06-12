#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int aleatorio()
{
	int resp2;
	randomize();
	resp2 = random(1000);
	return(resp2);
}


void presentacion()
{       clrscr();
	 cout<<"\n\n\n\t\t\t    Universidad Tecnol¢gica de Panam ";
	 cout<<"\n\t\t\t   Facultad de Ingernier¡a en Sistemas";
	 cout<<"\n\t\t\t  Departamento de Desarrollo de Software";
	 cout<<"\n\n\t\t\t  Carrera: Lic. en Desarrollo de Software";
	 cout<<"\n\n\n\t\t\t\t        Proyecto #3\n";
	 cout<<"\n\n\t\t\t   Falicitadora: Rosa Dutari De Samaniego\n";
	 cout<<"\n\t\t\t               Estudiantes:";
	 cout<<"\n\t\t\t      Alejandro Alvarado 8-930-1739";
	 cout<<"\n\t\t\t           Renee Martin 8-938-67";
	 cout<<"\n\t\t\t            Iam Vega 8-924-1852";
	 cout<<"\n\t\t\t        Cristofer Frias 8-903-2154";
	 cout<<"\n\n\t\t                         Semestre I";
	 cout<<"\n\t\t\t        Panam , 6 de Junio del 2016";
	 getch();
}

void instrucciones()
{       clrscr();
	cout << "\n\n\n\n\n\n\n\t\t\t**­A que no adivinas el n£mero!**\n";
	cout<<"\t\t\t\t  ¨C¢mo jugar?\n";
	cout<<"\t    -El computador generar  un n£mero al azar entre 0 y 1000, \n";
	cout<<"\t  tu objetivo ser  adivinar este n£mero en 10 intentos, mientras\n";
	cout<<"\t  no adivines se te ir  restando vida, y la cantidad de intentos\n";
	cout<<"\t  aumentar !, recuerda, solo tienes 10 vidas!,al acabarse\n";
	cout<<"\t  la cantidad de vidas, habr s perdido. ­­A JUGAR!!";
	getch();
}
void juego()
{
	int valor,j,h,v,numero;
	h=1;
	numero = aleatorio();
	for(j=9;j>=0;j=j-1)
	{	clrscr();
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t     *********************************************\n";
		cout<<numero<<"\t\t     *      !!A que no adivinas el n£mero!!      *\n";
		cout<<"\t\t     *********************************************\n";
		cin>>v;
		if(j==0)
		{	clrscr();
			cout<<"\n\n\n\n\n\n\n\n\n\n\t\t    ***********************************************\n";
			cout<<"\t\t    ***********­­RAYOS!! HAZ PERDIDO:C*************\n";
			cout<<"\t\t    **********INTENTOS: "<<h<<"*******VIDAS: "<<j<<"**********\n";
			cout<<"\t\t    ***********************************************\n";
			getch();
		}
		else
		{
			if(v==numero)
			{	clrscr();
				j=j+1;
				cout<<"\n\n\n\n\n\n\n\n\n\n\t\t    **********************************************\n";
				cout<<"\t\t    ***********FELICIDADES HAZ GANADO!!***********\n";
				cout<<"\t\t    **********INTENTOS: "<<h<<"*******VIDAS: "<<j<<"**********\n";
				cout<<"\t\t    **********************************************\n";
				getch();
				j=-1;
			}
			else
			{
				if(v<numero)
				{
					clrscr();
					cout<<"\n\n\n\n\n\n\n\n\n\n\t\t*****************************************************\n";
					cout<<"\t\t**********INTENTOS: "<<h<<" ***********VIDAS: "<<j<<" ***********\n";
					cout<<"\t\t*****************************************************\n";
					cout<<"\t\t*     ­­Est s muy abajo!!, vuelve a intentarlo!     *\n";
					cout<<"\t\t*****************************************************\n";
					getch();
				}
				else
				{
					if(v>numero)
					{	clrscr();
						cout<<"\n\n\n\n\n\n\n\n\n\n\t\t*****************************************************\n";
						cout<<"\t\t**********INTENTOS: "<<h<<" ***********VIDAS: "<<j<<" ***********\n";
						cout<<"\t\t*****************************************************\n";
						cout<<"\t\t*    ­­Est s muy arriba!!, vuelve a intentarlo!     *\n";
						cout<<"\t\t*****************************************************\n";
						getch();
					}
				}
			 }
		   }
		h=h+1;
	}
}

int salir()
{       int exit;
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t         **!HASTA PRONTO!**";
	getch();
	return(exit);
}

void main()
{
	int menu,ciclo,kik;
	clrscr();
	for (ciclo = 0; ciclo == 0;)
	{       clrscr();
		cout<< "\n\n\n\n\n\n\n\n\n\t\t\t          -----MENé------\n";
		cout<< "\t\t\t          0. Presentacion\n";
		cout<< "\t\t\t          1. Indicaciones\n";
		cout<< "\t\t\t          2. Juego\n";
		cout<< "\t\t\t          3. Salir\n\t\t\t          ";
		cin >> menu;
		switch (menu)
		{
			case 0: presentacion();
					break;

			case 1: instrucciones();
					break;

			case 2: juego();
					break;

			case 3:kik=salir();
				ciclo=kik;
				    break;
		}
		if(menu==0 || menu==1 || menu==2)
		{	clrscr();
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t      Desea regresar al men£?\n";
			cout<<"\t\t\t\t     Si=0  No=1\n\t\t\t\t          ";
			cin>>ciclo;
		}
	}
	if(ciclo==1)
		{ clrscr();
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t**­­HASTA PRONTO, QUE TENGAS BUEN DÖA!!**";
		  getch();
		}

}
