//Calcular el producto de los primeros N números enteros.
//P= 1x2x3x........xN
#include<iostream>
#include "conio.h"
using namespace std;
int main()
{
	int i,n,producto=1;
	cout<<"Ingrese el n-esimo termino para sacar su factorial"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	producto=producto*i;		
	}
	cout<<"El factorial de "<<n<<" es :"<<endl<<producto;
	
	getch();
	return 0;
}
