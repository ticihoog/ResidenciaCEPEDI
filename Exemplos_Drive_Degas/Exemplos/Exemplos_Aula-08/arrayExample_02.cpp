#include <iostream>
using namespace std;

int main(void)
{
    int n[10];
    for(int i = 0; i < 10; i++)
        n[i] = i;
    
    cout << "Elemento" << "\t" << "Índice" << "\t" << "Valor" << endl;
    for(int i = 0; i < 10; i++)
        cout << i+1 << "\t\t" << i << "\t" << n[i] << endl;

    // acessando um elemento fora do limite do array
    cout << n[10] << endl;
    return 0; 
}

