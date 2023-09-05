#include <iostream>
#include <string>

using namespace std;
 
int main () {
	string nome1("Fulano");
	string nome2("Beltrano");
	string nome3, nome4;
	cout << "Os dois primeiros nomes sao "
		<< nome1 << " e " << nome2 << endl;
	nome3 = "Sicrano";
	nome4 = nome3;
	cout << "O terceiro e o quarto nomes sao "
		<< nome3 << " e " << nome4 << endl;
}
