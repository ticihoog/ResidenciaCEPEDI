#include <iostream>
#include <cmath>

int main() {
    int a, b, c;

    // Parte b: Obter dois números inteiros da entrada padrão
    std::cout << "Digite dois números inteiros: ";
    std::cin >> a >> b;

    // Parte c: Atribuir a + b a c e imprimir em formato hexadecimal
    c = a + b;
    std::cout << "Resultado da soma (formato hexadecimal): " << std::hex << c << std::endl;

    // Parte d: Atribuir a * b a c e imprimir em formato octal
    c = a * b;
    std::cout << "Resultado da multiplicação (formato octal): " << std::oct << c << std::endl;

    // Parte e: Atribuir o valor absoluto de a - b a c e imprimir
    c = std::abs(a - b);
    std::cout << "Valor absoluto da diferença: " << c << std::endl;

    // Parte g: Verificar se b é diferente de zero antes da divisão
    if (b != 0) {
        // Parte g: Atribuir o quociente de a / b a c e imprimir
        c = a / b;
        std::cout << "Resultado da divisão: " << c << std::endl;

        // Parte h: Verificar se a é divisível por b
        if (a % b == 0) {
            std::cout << "a é divisível por b." << std::endl;
        } else {
            std::cout << "a não é divisível por b." << std::endl;
        }
    } else {
        std::cout << "Divisão por zero não é possível." << std::endl;
    }

    return 0;
}


/*
    A função std::abs(x) é usada para calcular o valor absoluto de x.

    A função std::hex e std::oct do fluxo de saída (cout) é usada 
    para formatar a saída em hexadecimal e octal, respectivamente.

    A divisão por zero é verificada antes de calcular o quociente 
    para evitar erros de execução. Se a divisão por zero for detectada, 
    uma mensagem de aviso é impressa.
    
*/