//Calcular la siguiente serie:
//S= X/1! - X^2/2! + X^3/3! - ........(+/-)X^n/n!

#include<iostream>
#include<conio.h>
#include"math.h"
using namespace std;
int main()
{
float i=1,k=1,factorial1=1,suma1=0,factorial2=1,suma2=0,x;
int n;

cout<<"Este programa calcula la serie S= X/1! - X^2/2! + X^3/3! - ........(+/-)X^n/n! , donde n es un numero entero"<<endl;
cout<<"Introduzca x: ";
cin>>x;
cout<<"Introduzca n: ";
cin>>n;



//Para los terminos positivos
for(i=1;i<=n;i=i+2)
{
factorial1=1;
for(k=1;k<=i;k++)
{
factorial1=factorial1*k;
}
suma1=suma1+(pow(x,i)/factorial1);
}
//Para los terminos negativos
for(i=2;i<=n;i=i+2)
{
factorial2=1;
for(k=1;k<=i;k++)
{
factorial2=factorial2*k;
}
suma2=suma2+(pow(x,i)/factorial2);
}
//Resultado

cout<<"La Suma es: "<<suma1-suma2;






getch();
return 0;
}
