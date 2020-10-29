//Hacer un programa para calcular el MCM (mínimo común múltiplo) de dos números enteros, donde MCM= (AxB)/MCD.
#include<iostream>
#include<conio.h>
#include"math.h"
using namespace std;
int main()
{
int n,d,a,b;
int r=1;
cout<<"Este programa calcula el MCM (mínimo común múltiplo) de dos números enteros, donde MCM= (AxB)/MCD."<<endl;
cout<<"Ingrese el primer numero"<<endl;
cin>>n;
cout<<"Ingrese el segundo numero"<<endl;
cin>>d;
a=n;
b=d;
while(r!=0)
{	
r=n%d;
n=d;
d=r;

}
cout<<"El MCM es: "<<a*b/n;


getch();
return 0;
}
