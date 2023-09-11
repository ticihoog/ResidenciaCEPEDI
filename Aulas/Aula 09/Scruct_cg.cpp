#include <iostream>
#include <string>
#include <vector>

// Definição da struct TituloEleitoral
struct TituloEleitoral {
    std::string nome;
    std::string numero;
    int anoEmissao;
    std::string dataNascimento;
    std::string zona;
    std::string secao;
    std::string municipio;
    std::string uf;

    // Função para imprimir os dados do título de eleitor
    void imprime_titulo() {
        std::cout << "Nome: " << nome << std::endl;
        std::cout << "Número: " << numero << std::endl;
        std::cout << "Ano de Emissão: " << anoEmissao << std::endl;
        std::cout << "Data de Nascimento: " << dataNascimento << std::endl;
        std::cout << "Zona: " << zona << std::endl;
        std::cout << "Seção: " << secao << std::endl;
        std::cout << "Município: " << municipio << std::endl;
        std::cout << "UF: " << uf << std::endl;
        std::cout << std::endl;
    }
};

int main() {
    std::vector<TituloEleitoral> titulos;

    int quantidadeTitulos;
    std::cout << "Quantos títulos de eleitor deseja inserir? ";
    std::cin >> quantidadeTitulos;

    std::cin.ignore(); // Limpa o buffer de entrada

    for (int i = 0; i < quantidadeTitulos; ++i) {
        TituloEleitoral titulo;

        std::cout << "Digite o nome do eleitor #" << i + 1 << ": ";
        std::getline(std::cin, titulo.nome);

        std::cout << "Digite o número do título do eleitor #" << i + 1 << ": ";
        std::cin >> titulo.numero;

        std::cout << "Digite o ano de emissão do título do eleitor #" << i + 1 << ": ";
        std::cin >> titulo.anoEmissao;

        std::cin.ignore(); // Limpa o buffer de entrada

        std::cout << "Digite a data de nascimento do eleitor (DD/MM/AAAA) #" << i + 1 << ": ";
        std::getline(std::cin, titulo.dataNascimento);

        std::cout << "Digite a zona eleitoral do eleitor #" << i + 1 << ": ";
        std::cin >> titulo.zona;

        std::cout << "Digite a seção eleitoral do eleitor #" << i + 1 << ": ";
        std::cin >> titulo.secao;

        std::cin.ignore(); // Limpa o buffer de entrada

        std::cout << "Digite o município do eleitor #" << i + 1 << ": ";
        std::getline(std::cin, titulo.municipio);

        std::cout << "Digite a UF (Unidade Federativa) do eleitor (ex: SP) #" << i + 1 << ": ";
        std::cin >> titulo.uf;

        titulos.push_back(titulo);
    }

    std::cout << "\nTítulos de eleitor digitados:" << std::endl;
    for (const TituloEleitoral& titulo : titulos) {
        titulo.imprime_titulo();
    }

    return 0;
}
