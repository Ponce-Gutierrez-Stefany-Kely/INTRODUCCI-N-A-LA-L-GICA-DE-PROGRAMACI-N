#include<iostream>
using namespace std;

int main()
{
    int clave,min;
    cout<< "ingrese la clave del pais y los minutos\n";
    cin>>clave, min;
    switch (clave)
    {
    case 12:cout<< min*2;break;
    case 15:cout<<min*2.2 ;break;
    case 18:cout<<min*4.5 ;break;
    case 19:cout<<min*3.5 ;break;
    case 23:cout<<min*6 ;break;
    case 25:cout<<min*6 ;break;
    case 29:cout<<min*5 ;break;
    default : cout<<"error" ;break;
    }
    return 0;
    
}