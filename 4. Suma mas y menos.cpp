//Calcular la siguiente suma
//	S= 1 - 2 + 3 - 4 + 5 - .........+/- N
#include<iostream>
#include"conio.h"
using namespace std;
int main()
{
	int i,n,suma1,suma2;
	cout<<"El programa le resolvera una suma de la forma S= 1 - 2 + 3 - 4 + 5 - .........+/- N"<<endl;
	cout<<"Ingrese el termino n-esimo"<<endl;
	cin>>n;
	suma1=0;
	suma2=0;
	if(n%2==0)//n es par
	{
		for(i=0;i<=n;i=i+2)
		{
		suma1=suma1+i;
		}
		for(i=1;i<n;i=i+2)
		{
		suma2=suma2+i;
		}
		cout<<"La sumatoria es: "<<suma2-suma1;
	}
	else//n es impar
	{
		
		for(i=0;i<n;i=i+2)
		{
		suma1=suma1+i;
		}
		
		for(i=1;i<=n;i=i+2)
		{
		suma2=suma2+i;
		}
		cout<<"La sumatoria es: "<<suma2-suma1;		
		
	}				
}
	
	

