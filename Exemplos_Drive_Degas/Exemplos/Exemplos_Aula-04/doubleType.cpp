#include <iostream> 
using namespace std;

int main(void) 
{
    float average; // average é uma variável de tipo float
    cout << "Qual a média do aluno?: ";
    cin >> average; // lendo um float da entrada padrão
    cout << "A média do aluno é " << average << endl;
    cout << "O tipo float ocupa " << sizeof(float) << " bytes na memória.\n";
    cout << "O tipo double ocupa " << sizeof(double) << " bytes na memória.\n";
    cout << "O tipo long double ocupa " << sizeof(long double) << " bytes na memória.\n";
    double val = 1.0/3.0;
    long double erro = 1.0/1234556789.0;
    cout << "O valor de val é: " << val << endl;
    cout << "O valor de erro é: " << erro << endl;
    val = 0.33333; // o literal é um double
    val = 33333e-5; // notação científica
    average = 7.3f; // o literal é um float
    erro = 0.12345L; // o literal é um long double
    return 0;
}

