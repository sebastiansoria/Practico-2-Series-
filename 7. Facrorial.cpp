//Calcular el factorial de un número entero N. Donde se define como factorial de la siguiente forma: FAC(N) = 1x2x3x.....xN; 
//donde el factorial de cero es uno  (FAC(0) =1).  FAC(N)=N!, se lee factorial (!) de N.
#include<iostream>
#include"conio.h"
using namespace std;
int main()
{
int i,producto=1,N;	
cout<<"Este programa da el factorial de un numero entero N"<<endl;
cout<<"intorduzca N: ";
cin>>N;	
for(i=1;i<=N; i=i+1)	
{
producto=producto*i;
}

cout<<"FAC("<<N<<")="<<producto;


getch();
return 0;
}
