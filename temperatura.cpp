#include <iostream> 
using namespace std; 
// 0 - 15 acender a led vermelha 
// 16 - 23 acender o led azul 
// 24 - 30 acender o led verde
// 32 - 37 acender o led roxo
// acima de 38 acender os leds vermelho e verde

int main()
{ 
    cout << "Iniciando o programa de temperatura \n"; 
    int temperatura = 90; 

    if (temperatura >= 0 && temperatura <= 15)
    {
        cout <<"Acender o led vermelho";
    } else if (temperatura >= 16 && temperatura <= 23) 
    {
        cout << "Acender o led azul" ;
    } else if (temperatura >= 24 && temperatura <= 30) 
    {
        cout << "Acender o led verde";
    } else if (temperatura >= 32 && temperatura <= 37) 
    {
        cout << "Acender o led roxo";
    } else {
        cout <<"Acender o led vermelho e o verde \n";
    }
    
    return 0; 
}