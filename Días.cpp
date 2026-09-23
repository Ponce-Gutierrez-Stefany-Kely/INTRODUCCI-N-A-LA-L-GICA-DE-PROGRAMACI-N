#include<iostream>
using namespace std;

int main()
{
    int dia;
    cin>>dia;
    switch (dia)
    {
    case 1:cout<< "\nLunes";break;
    case 2:cout<<"\nMartes";break;
    case 3:cout<<"\nMiercoles";break;
    case 4:cout<<"\nJueves";break;
    case 5:cout<<"\nviernes";break;
    case 6:cout<<"\nSabado";break;
    case 7:cout<<"\nDomingo";break;
    default : cout<<"error";break;
    }
    return 0;
    
}