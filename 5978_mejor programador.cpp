#include<iostream>
#include<string>
using namespace std;
int main()
{
    string nombre1, nombre2;
    int puntaje1, puntaje2;
    cout << "ingresen sus nombres y puntajes respectivanmente para indicar a mejor programador\n";
    cin >> nombre1 >> puntaje1 >> nombre2 >> puntaje2;
    if (puntaje1 > puntaje2)
    {
        cout<< nombre1 << " eres el mejor programador\n";
    }
    else if (puntaje2 > puntaje1)
    {
        cout << "hola " << nombre2 << " eres el mejor programador\n";
    }
    else
    {
        cout << "hola " << nombre1 << " y " << nombre2 << " son igual de buenos\n";
    }
    return 0;
}