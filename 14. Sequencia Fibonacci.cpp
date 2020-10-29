//Hallar el n-esimo número de Fibonacci.  Un número de Fibonacci se obtiene de la siguiente forma:   F0 = 1, F1 = 1,  
//luego el siguiente o tercer número se obtiene sumando F2=F1 + F0= 1+1=2.     Cada número de Fibonacci se obtiene sumando los dos últimos,
// es decir, Fi = Fi-1 + Fi-2,  i=2, 3, 4,     .
//Luego la secuencia de números Fibonacci es 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, etc.

#include<iostream>
#include"conio.h"
using namespace std;
int Fibonacci(int);
int main()
{
	int n;
	cout<<"Este programa os da la secuencia fibonacci hasta un termino n-esimo"<<endl;
	cout<<"Ingrese el termino n-esimo: ";
	cin>>n;
	cout<<endl<<"..................................................."<<endl;
	Fibonacci(n-1);
}
int Fibonacci(int n)
{
	if(n-1<0)
	cout<<"Ingrese un valor mayor o igual a 0 ";
	else
	{
	
	if(n==0)
	cout<<"1";
	else
	{
	
	int a=0,b=1,c=0;
	for(int i=1;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;

	}
			
	cout<<c<<endl;
	}
	}
}



	
