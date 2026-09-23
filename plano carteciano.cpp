#include<iostream>
using namespace std;

int main()
{
    int x;
    int y;
    cin>>x>>y;
    if (x>0)
    {
     if(y>0)
     {
     cout<<"pertenece al I cuadrante";
     }
     else
     {
     cout<<"pertenece al IV cuadrante";
     }
    }
    else
    {
     if (y>0)
     {
     cout<<"pertenece al II cuadrante";
     }
     else
     {
     cout<<"pertenece al III cuadrante";
     }
    
    }
    return 0;
}