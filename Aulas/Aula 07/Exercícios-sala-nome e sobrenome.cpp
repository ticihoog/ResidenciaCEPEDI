#include <iostream>
#include <string>
using namespace std;

int main(void) {
    
    string nome, sobrenome;
    cout << "Digite o nome: " << endl;
    getline(cin, nome); 
    cout << "Digite o sobrenome: " << endl; 
    getline(cin, sobrenome); 
    cout << "O nome completo é: " << endl; 
    cout << nome + " " + sobrenome << endl;

    return 0;
}
