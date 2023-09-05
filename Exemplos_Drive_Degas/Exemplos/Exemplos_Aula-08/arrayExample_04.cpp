#include <iostream>
using namespace std;

int main(void)
{
    double val[5] = {1.5, 2.4, 3.3, 4.2, 5.1};
    double soma = 0;
    for(int i = 0; i < 5; i++)
        soma += val[i];

    cout << "A soma dos elementos do vetor val eh: " << soma << endl;
    cout << "O tamanho do vetor val eh: " << sizeof(val) << endl;
    return 0; 
}
 

