#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double x, y, z;

    // Parte b: Obter dois números de ponto flutuante da entrada padrão
    std::cout << "Digite duas coordenadas (x e y): ";
    std::cin >> x >> y;

    // Parte c: Identificar em qual lado da curva f(x) = 5x + 2 está o ponto (x, y)
    double fx = 5 * x + 2;
    if (y > fx) {
        std::cout << "O ponto (" << x << ", " << y << ") está acima da curva." << std::endl;
    } else if (y < fx) {
        std::cout << "O ponto (" << x << ", " << y << ") está abaixo da curva." << std::endl;
    } else {
        std::cout << "O ponto (" << x << ", " << y << ") está sobre a curva." << std::endl;
    }

    // Parte d: Atribuir à variável z a distância euclidiana do ponto (x, y) ao centro de coordenadas
    z = std::sqrt(x * x + y * y);
    std::cout << "Distância euclidiana do ponto ao centro: " << z << std::endl;

    // Parte f: Atribuir à variável z o produto entre x e y e imprimir em notação científica
    z = x * y;
    std::cout << std::scientific << "Produto de x e y em notação científica: " << z << std::endl;

    return 0;
}


/*
    A função std::sqrt(x) é usada para calcular a raiz quadrada de x.

    A manipulação da saída em notação científica é feita usando 
    std::scientific do fluxo de saída (cout).
    
*/