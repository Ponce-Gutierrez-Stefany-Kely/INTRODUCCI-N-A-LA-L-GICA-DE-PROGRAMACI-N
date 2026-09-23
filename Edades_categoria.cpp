#include <iostream>
using namespace std;
int main ()
{
    int L;
    cin>>L;

    if (L>3)
    {
        if (L>14)
        {
         if (L>18) 
         {
            if(L>65)
            {
                cout<<"TERCERA EDAD";
            }
            else
            {
                cout<<"ADULTO";
            }
         }  
         else
         {
            cout<<"JOVEN";
         }
        }
        else
        {
            cout<<"NINO";
        }
    }
    else
    {
        cout<<"BEBE";
    }
    return 0;
}