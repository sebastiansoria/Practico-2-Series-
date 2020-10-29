//
#include<iostream>
#include<conio.h>
#include"math.h"
using namespace std;
int main()
{
int n,d;
int r=1;
cout<<"Este programa calcula el MCD (máximo común divisor) de dos números enteros, usando el algoritmo de Euclides."<<endl;
cout<<"Ingrese el numerador"<<endl;
cin>>n;
cout<<"Ingrese el denominador"<<endl;
cin>>d;
while(r!=0)
{	
r=n%d;
n=d;
d=r;

}
cout<<"El MCD es: "<<n;


getch();
return 0;
}
