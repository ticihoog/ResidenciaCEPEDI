#include <iostream>

int main() {
    int num;
    
    // Parte a: Obter um número inteiro da entrada padrão
    std::cout << "Digite um número inteiro: ";
    std::cin >> num;

    // Parte b: Determinar se o valor pode ser representado como short int
    std::cout << num << " " << (num > std::numeric_limits<short int>::max() || num < std::numeric_limits<short int>::min() ? "é maior que um short int" : "este valor pertence ao intervalo dos short int") << std::endl;

    return 0;
}


/*

Neste programa, usamos o operador condicional (?) para determinar se o valor 
fornecido pode ser representado como um short int sem perda de informação. 
A função std::numeric_limits<short int>::max() retorna o valor máximo 
representável por um short int, e std::numeric_limits<short int>::min() retorna 
o valor mínimo representável por um short int. Se o valor fornecido for maior 
que o valor máximo ou menor que o valor mínimo, o programa imprime "é maior que 
um short int", caso contrário, imprime "este valor pertence ao intervalo dos short int".

*/