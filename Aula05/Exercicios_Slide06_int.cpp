#include <iostream>
#include <limits>

int main() {
    // Sobre o tipo int
    int minInt = std::numeric_limits<int>::min();
    int maxInt = std::numeric_limits<int>::max();
    
    std::cout << "O menor valor de int: " << minInt << std::endl;
    std::cout << "O maior valor de int: " << maxInt << std::endl;

    // Criando uma variável uli (unsigned long int) e atribuindo o maior valor possível
    unsigned long int uli = std::numeric_limits<unsigned long int>::max();
    
    std::cout << "Maior valor de unsigned long int: " << uli << std::endl;

    // Criando uma variável li (long int) e atribuindo o valor de uli
    long int li = static_cast<long int>(uli);
    uli = li; // Atribuindo o valor de li a uli

    std::cout << "Valor de li: " << li << std::endl;
    std::cout << "Valor de uli após a atribuição: " << uli << std::endl;
    
    // Atribuindo a li o maior valor que pode ser armazenado em um long int
    long int maxLi = std::numeric_limits<long int>::max();
    li = maxLi;

    std::cout << "Maior valor de long int: " << maxLi << std::endl;

    return 0;
}

/* 
menor e o maior valor que podem ser representados por um tipo int podem ser obtidos usando 
std::numeric_limits<int>::min() 
e 
std::numeric_limits<int>::max()
, respectivamente.

A variável uli é declarada como unsigned long int e atribuída o maior 
valor possível usando std::numeric_limits<unsigned long int>::max().

Ao atribuir o valor de uli a li (um long int), não ocorrerá nada de inesperado, 
pois o valor é simplesmente convertido. No entanto, ao atribuir o valor de li de volta a uli, 
o comportamento é indefinido, pois li pode conter um valor que não é representável 
por uli devido às diferenças nos intervalos de representação dos tipos.

O maior valor que pode ser armazenado em um long int pode ser obtido usando 
std::numeric_limits<long int>::max().

*/