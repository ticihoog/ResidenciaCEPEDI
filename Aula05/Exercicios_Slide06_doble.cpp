#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main() {
    // Sobre o tipo float
    float minFloat = std::numeric_limits<float>::min();
    float maxFloat = std::numeric_limits<float>::max();
    
    std::cout << "Menor valor de float: " << minFloat << std::endl;
    std::cout << "Maior valor de float: " << maxFloat << std::endl;

    // Criando uma variável pif (float) e atribuindo o valor de pi
    float pif = 3.14159265358979323846f; // Exemplo de valor de pi com algumas casas decimais
    std::cout << "Valor de pif com precisão padrão: " << pif << std::endl;

    // Formatando a saída com diferentes quantidades de casas decimais
    std::cout << std::fixed << std::setprecision(2) << "Valor de pif com 2 casas decimais: " << pif << std::endl;
    std::cout << std::fixed << std::setprecision(4) << "Valor de pif com 4 casas decimais: " << pif << std::endl;
    std::cout << std::fixed << std::setprecision(8) << "Valor de pif com 8 casas decimais: " << pif << std::endl;
    std::cout << std::fixed << std::setprecision(16) << "Valor de pif com 16 casas decimais: " << pif << std::endl;

    // Criando uma variável pid (double) e atribuindo o valor de pi
    double pid = 3.14159265358979323846; // Valor de pi com algumas casas decimais
    std::cout << "Valor de pid com precisão padrão: " << pid << std::endl;

    // Comparando os valores de pif e pid com diferentes precisões
    std::cout << std::fixed << std::setprecision(8) << "Diferença entre pif e pid (precisão 8): " << std::abs(pif - pid) << std::endl;

    // Verificando a diferença entre double e long double
    double d = 1.234567890123456789;
    long double ld = 1.234567890123456789;

    std::cout << "Valor de d (double): " << d << std::endl;
    std::cout << "Valor de ld (long double): " << ld << std::endl;

    return 0;
}

/*
Para definir valores constantes com ponto flutuante, 
é comum acrescentar o sufixo f a um valor float e omiti-lo para um double. 
Isso indica explicitamente o tipo do número.

A função std::setprecision(n) do cabeçalho <iomanip> é usada para definir a 
precisão do número de casas decimais ao imprimir valores de ponto flutuante.

A diferença entre float e double é principalmente a precisão: double 
tem mais bits para armazenar informações, o que resulta em maior precisão em 
comparação com float.
*/