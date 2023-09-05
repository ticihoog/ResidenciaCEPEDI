#include <iostream>

int main() {
    char ch1, ch2, ch3;

    // Parte b: Obter um caractere da entrada padrão
    std::cout << "Digite um caractere: ";
    std::cin >> ch1;

    // Parte c: Verificar o tipo de caractere
    std::string type;

    if (std::isupper(ch1)) {
        type = "letra maiúscula";
    } else if (std::islower(ch1)) {
        type = "letra minúscula";
    } else if (std::isdigit(ch1)) {
        type = "dígito";
    } else {
        type = "outro tipo de caractere";
    }

    std::cout << "O caractere digitado é " << type << std::endl;

    // Parte d: Atribuir valor 81 a ch2 e imprimir em diferentes formatos
    ch2 = 81;
    std::cout << "Valor numérico decimal de ch2: " << static_cast<int>(ch2) << std::endl;
    std::cout << "Valor octal de ch2: " << std::oct << static_cast<int>(ch2) << std::endl;
    std::cout << "Valor hexadecimal de ch2: " << std::hex << static_cast<int>(ch2) << std::endl;
    std::cout << "Caractere ch2: " << ch2 << std::endl;

    // Parte e: Atribuir letra minúscula correspondente a ch3 e imprimir em diferentes formatos
    ch3 = ch2 + ('a' - 'A'); // Convertendo para letra minúscula
    std::cout << "Valor numérico decimal de ch3: " << static_cast<int>(ch3) << std::endl;
    std::cout << "Valor octal de ch3: " << std::oct << static_cast<int>(ch3) << std::endl;
    std::cout << "Valor hexadecimal de ch3: " << std::hex << static_cast<int>(ch3) << std::endl;
    std::cout << "Caractere ch3: " << ch3 << std::endl;

    return 0;
}

/*
    Na parte c, a função std::isupper(ch) verifica se o caractere ch é uma letra maiúscula. 
    A função std::islower(ch) verifica se o caractere é uma letra minúscula, e std::isdigit(ch) verifica se é um dígito.

    Na parte d, a conversão explícita static_cast<int>(ch2) é usada para converter o 
    valor de ch2 para um valor inteiro antes de imprimir em diferentes formatos.

    Na parte e, para converter uma letra maiúscula para minúscula, subtrai-se a 
    diferença entre os códigos ASCII das letras maiúsculas e minúsculas ('A' - 'a') 
    do valor de ch2. Isso funciona porque as letras maiúsculas e minúsculas estão em 
    ordem contígua na tabela ASCII.


*/