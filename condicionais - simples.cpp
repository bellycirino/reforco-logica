#include <iostream>
using namespace std;
/*pergutar para im jogador e a sua idade. Exibir qual e a sua categoria no esporte da sua seguinte forma */

//infantil - 3 a 11 anos 
// juvenil - 12 a 17 anos 
// adulto - 18 a 30 anos 
// master - acima de 35

int main ()
{  
    int idade = 8;
    if (idade >=3 && idade <= 11) 
    {
        cout << "Voce esta na categoria infantil" << endl;
    }
    else if (idade >=12 && idade <= 17) 
    {
        cout << "Voce esta na categoria juvenil" << endl; 
    }
    else if (idade >=18 && idade <= 34) 
    {
        cout << "Voce esta na categoria adulto" << endl; 
    }
    else 
    {
        cout << "Voce nao tem idade suficiente para fazer este esporte" << endl; 
    }


    }