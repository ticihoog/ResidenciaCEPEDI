#include <iostream>
#include <bitset>

int main() {
    // Parte a: Ler a informação genética da planta como um unsigned char
    unsigned char geneticInfo;
    std::cout << "Digite a informação genética da planta (valor entre 0 e 255): ";
    std::cin >> geneticInfo;

    // Parte b: Contar quantos genes estão presentes
    std::bitset<8> bitsetGenes(geneticInfo);
    int countGenes = bitsetGenes.count();
    std::cout << "Número de genes presentes: " << countGenes << std::endl;

    // Parte c: Solicitar o gene específico e verificar se está presente
    int geneNumber;
    std::cout << "Digite o número do gene que deseja verificar (entre 1 e 8): ";
    std::cin >> geneNumber;

    if (geneNumber >= 1 && geneNumber <= 8) {
        bool isGenePresent = bitsetGenes.test(geneNumber - 1);
        std::cout << "Gene " << geneNumber << (isGenePresent ? " está presente." : " não está presente.") << std::endl;
    } else {
        std::cout << "Número de gene inválido. Digite um número entre 1 e 8." << std::endl;
    }

    return 0;
}

/*
Neste programa, a informação genética da planta é representada por um unsigned 
char que armazena um valor entre 0 e 255. Cada bit do unsigned char representa 
um gene (de 1 a 8). Usamos a classe std::bitset<8> para manipular os bits e realizar 
as operações de contagem e teste. A função count() conta quantos bits estão definidos 
como 1 (genes presentes). A função test(pos) verifica se o bit na posição pos 
está definido como 1. Lembre-se de que o índice dos bits começa em 0, então o gene 1 está na posição 0, 
o gene 2 na posição 1 e assim por diante.
*/