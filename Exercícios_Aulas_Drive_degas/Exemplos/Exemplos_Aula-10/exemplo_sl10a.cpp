#include <iostream>
#include <string>
 
int main () {
	std::string nome1("Fulano");
	std::string nome2("Beltrano");
	std::string nome3, nome4;
	std::cout << "Os dois primeiros nomes sao "
		<< nome1 << " e " << nome2 << std::endl;
	nome3 = "Sicrano";
	nome4 = nome3;
	std::cout << "O terceiro e o quarto nomes sao "
		<< nome3 << " e " << nome4 << std::endl;
}
