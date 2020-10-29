//Calcular la siguiente serie:
//S= X/1! -  X^3/3! + X^5/5! - .......(+/-)X^n/n!;  n es impar
#include<iostream>
#include<conio.h>
#include"math.h"
using namespace std;
int main()
{
float i=1,k=1,factorial1=1,suma1=0,factorial2=1,suma2=0,x;
int n;

cout<<"Este programa calcula la serie S= X/1! -  X^3/3! + X^5/5! - .......(+/-)X^n/n!; donde n es un numero entero impar"<<endl;
cout<<"Introduzca x: ";
cin>>x;
cout<<"Introduzca n: ";
cin>>n;


if(n%2!=0)
{

//Para los terminos positivos
for(i=1;i<=n;i=i+4)
{
factorial1=1;
for(k=1;k<=i;k++)
{
factorial1=factorial1*k;
}
suma1=suma1+(pow(x,i)/factorial1);
}
//Para los terminos negativos
for(i=3;i<=n;i=i+4)
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

}
else
cout<<"Error"<<endl<<"Debe ingresar un numero impar";



getch();
return 0;
}
