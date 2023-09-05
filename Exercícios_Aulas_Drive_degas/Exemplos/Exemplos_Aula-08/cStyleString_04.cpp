#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    char word[100];
    cout << "Entre com uma frase: ";
    cin.getline(word, 100);
    int i = strlen(word);  
    cout << "A frase tem " << i << " caracteres." << endl;
    return 0;
}




