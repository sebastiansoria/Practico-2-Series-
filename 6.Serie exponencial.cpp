// 6.	Calcular la siguiente serie, donde X es un número real.
// S=x^1+x^2+x^3+?…………+x^n
#include<iostream>
#include"conio.h"
#include"math.h"
using namespace std;
int main()
{
	float i,x,n,suma;

	cout<<"El programa calcula la serie  S=x^1+x^2+x^3+...+x^n  , donde x es un numero real "<<endl;
	cout<<"Ingrese el valor de x"<<endl;
	cin>>x;
	cout<<"Ingrese el valor de n"<<endl;
	cin>>n;
	if((n>0)&& ((n-round(n))==0))
	{	
	suma=0;
	for(i=1;i<=n;i++)
	{
	suma=suma+pow(x,i);	
	}
	cout<<suma;
	}
	else
	{
	cout<<"ERROR"<<endl;
	cout<<"n debe ser un numero entero mayor a cero";
	}
}

