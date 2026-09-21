#include<iostream>
using namespace std;
int main()
{
    int A, B, X;
    cin >> A >> B;
    X = A - B;
    if (X > 0)
    {
    cout << "El negocio si va a jalar \n" << X;
    }
    else
    { 
    cout << "dejalo ya esta muerto\n" << X;
    }
    return 0;
}