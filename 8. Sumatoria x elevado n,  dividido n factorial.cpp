//Calcular la siguiente serie:
//	S= X/1! + X^2/2! + X^3/3! + ........X^n/n!
#include<iostream>
#include<conio.h>
#include"math.h"
using namespace std;
int main()
{
float i,producto=1,suma=0,x;
int n;

cout<<"Este programa calcula la serie S= X/1! + X^2/2! + X^3/3! + ........X^n/n! , donde n es un numero entero"<<endl;
cout<<"Introduzca x: ";
cin>>x;
cout<<"Introduzca n: ";
cin>>n;
for(i=1;i<=n;i++)
{
producto=producto*i;
suma=suma+(pow(x,i)/producto);
}
cout<<"La Suma es: "<<suma;


getch();
return 0;
}
