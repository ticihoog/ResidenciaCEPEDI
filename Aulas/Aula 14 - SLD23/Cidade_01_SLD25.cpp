#include <iostream>
#include <vector>
#include <string>

class Estado {
public:
    Estado(const std::string& nome, const std::string& sigla)
        : nome(nome), sigla(sigla) {}

    std::string getNome() const {
        return nome;
    }

    std::string getSigla() const {
        return sigla;
    }

private:
    std::string nome;
    std::string sigla;
};

class Cidade {
public:
    Cidade(const std::string& nome, Estado* estado)
        : nome(nome), estado(estado) {}

    std::string getNome() const {
        return nome;
    }

    Estado* getEstado() const {
        return estado;
    }

private:
    std::string nome;
    Estado* estado;
};

void listarEstados(const std::vector<Estado>& estados) {
    std::cout << "\nEstados cadastrados:" << std::endl;
    for (const auto& estado : estados) {
        std::cout << estado.getNome() << " - " << estado.getSigla() << std::endl;
    }
}

void listarCidades(const std::vector<Cidade>& cidades) {
    std::cout << "\nCidades cadastradas:" << std::endl;
    for (const auto& cidade : cidades) {
        std::cout << cidade.getNome() << " - " << cidade.getEstado()->getNome() << " (" << cidade.getEstado()->getSigla() << ")" << std::endl;
    }
}

int main() {
    std::vector<Estado> estados;
    std::vector<Cidade> cidades;
    int escolha;

    while (true) {
        std::cout << "\n -------------- MENU --------------\n";
        std::cout << "\n   1. Cadastrar Estado\n";
        std::cout << "   2. Cadastrar Cidade\n";
        std::cout << "   3. Listar Estados\n";
        std::cout << "   4. Listar Cidades\n";
        std::cout << "   5. Sair\n";
        std::cout << "\n ----------------------------------\n";
        std::cout << "\n Escolha uma opção: ";
        std::cin >> escolha;

        switch (escolha) {
            case 1: {
                std::string nome, sigla;
                std::cout << "Digite o nome do estado: ";
                std::cin >> nome;
                std::cout << "Digite a sigla do estado: ";
                std::cin >> sigla;
                estados.emplace_back(nome, sigla);
                break;
            }
            case 2: {
                std::string nome, estadoSigla;
                std::cout << "Digite o nome da cidade: ";
                std::cin >> nome;
                std::cout << "Digite a sigla do estado da cidade: ";
                std::cin >> estadoSigla;

                Estado* estadoAssociado = nullptr;
                for (auto& estado : estados) {
                    if (estado.getSigla() == estadoSigla) {
                        estadoAssociado = &estado;
                        break;
                    }
                }

                if (estadoAssociado) {
                    cidades.emplace_back(nome, estadoAssociado);
                } else {
                    std::cout << "Sigla de estado inválida para a cidade " << nome << ". Cidade não cadastrada." << std::endl;
                }
                break;
            }
            case 3:
                listarEstados(estados);
                break;
            case 4:
                listarCidades(cidades);
                break;
            case 5:
                std::cout << "Encerrando o programa. Adeus!" << std::endl;
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente." << std::endl;
        }
    }

    return 0;
}
