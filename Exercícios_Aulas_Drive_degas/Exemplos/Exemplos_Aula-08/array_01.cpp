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

        
    return 0;
}