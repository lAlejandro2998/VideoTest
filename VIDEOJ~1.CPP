#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
//juegos
int aleatorio()
{
	int resp2;
	randomize();
	resp2 = random(100);//ise esto para ver q numero imprimia y solo comprovar si deverda funcionava el randon
	return(resp2);
}


void presentacion()
{       clrscr();
	 cout<<"\n\n\tUniversidad Tecnol¢gica de Panam ";
	 cout<<"\n\tFacultad de IngernierÃ­a en Sistemas";
	 cout<<"\n\tDepartamento de Desarrollo de Software";
	 cout<<"\n\n\tCarrera: Lic. en Desarrollo de Software";
	 cout<<"\n\n\n\t\tProyecto #3";
	 cout<<"\n\n\tFalicitadora: Rosa Dutari De Samaniego";
	 cout<<"\n\tEstudiantes:";
	 cout<<"\n\t\tAlejandro Alvarado 8-930-1739";
	 cout<<"\n\t\tRenee Martin 8-938-67";
	 cout<<"\n\t\tIam Vega 8-924-1852";
	 cout<<"\n\t\tCristofer Frias 8-903-2154";
	 cout<<"\n\n\t\t\tSemestre I";
	 cout<<"\n\t\tPanam , 6 de Junio del 2016";
	 getch();
}

void instrucciones()
{       clrscr();
	cout << "hola mundo";
	getch();
}
void juego()
{
	int valor,j,h,v,numero;
	h=1;
	numero = aleatorio();
	for(j=9;j>=0;j=j-1)
	{	clrscr();
		cout<<numero<<"\t\t!!A que no adivinas el n£mero!!\n";
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

void salir()
{	clrscr();
	cout<<"!HASTA PRONTO!";
	getch();
}

void main()
{
	int menu,ciclo;
	clrscr();
	for (ciclo = 0; ciclo == 0;)
	{
		cout<< "\t\t-----MENé------\n";
		cout<< "\t\t0. Presentacion\n";
		cout<< "\t\t1. Indicaciones\n";
		cout<< "\t\t2. Juego\n";
		cout<< "\t\t3. Salir\n";
		cin >> menu;
		switch (menu)
		{
			case 0: presentacion();
					break;

			case 1: instrucciones();
					break;

			case 2: juego();
					break;

			case 3: salir();
				    break;
		}
		if(menu!=3)
		{	clrscr();
			cout<<"\n\n\n\n\n\n\n\n\n\t\tDesea regresar al men£?\n";
			cout<<"\t\tSi=0  No=1\n";
			cin>>ciclo;
		}
	}
	if(ciclo==1)
		{ clrscr();
			cout<<"\n\n\n\n\n\n\n\n\n\n\t\tAdi¢s, Pronto volveremos a verte";
		  getch();
		}

}