//Suma de los cuadrados de los primeros N números enteros.
//	S=1^2+2^2+3^2+?…………+N^2
#include<iostream>
#include"conio.h"
#include"math.h"
using namespace std;
int main()
{
	float 	i,n,suma,menu;
		cout<<"Este programa calcula la sumatoria de los primeros n numeros naturales "<<endl;
		do	
		{
		suma=0;
		cout<<"Inserte el n-esimo termino: ";
		cin>>n;
		for (i=1;  i<=n;  i=i+1)
		{
			suma=suma+pow(i,2);	
		}
		cout<<"La Sumatoria es: "<<suma<<endl;
		cout<<"Inserte 1 si desea hacer otra sumatoria "<<endl;
		cout<<"Inserte 2 si desea salir "<<endl;
		cin>>menu;
		}
		while(menu==1);
		
}
