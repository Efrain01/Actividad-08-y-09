#include <iostream>
#include "laboratorio.h"

using namespace std;

int main(){
    
    Computadora computadoras[5];
    string cadena;
    int entero;

    for (size_t i = 0; i < 5; i++){
        fflush(stdin);
        cin>>computadoras[i];
        cout<<endl<<endl;
    }
    
    Laboratorio lab;

    for (size_t i = 0; i < 5; i++){
        lab <<computadoras[i];
    }

    lab.mostrar();

    system("pause");
    return 0;
}