#include<iostream>
#include<string>
using namespace std;

int main()
{
    string resultado;
    int num;
    cin>>num;
    resultado = (num%2==0)? "par":"impar";
    cout<<resultado;
    return 0;
}