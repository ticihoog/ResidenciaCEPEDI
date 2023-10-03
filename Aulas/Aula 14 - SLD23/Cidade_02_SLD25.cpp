#include <iostream>
#include <vector>
#include <string>

class Localizacao {
public:
    Localizacao(const std::string& nome)
        : nome(nome) {}

    std::string getNome() const {
        return nome;
    }

private:
    std::string nome;
};

class Estado : public Localizacao {
public:
    Estado(const std::string& nome, const std::string& sigla)
        : Localizacao(nome), sigla(sigla) {}

    std::string getSigla() const {
        return sigla;
    }

private:
    std::string sigla;
};

class Cidade : public Localizacao {
public:
    Cidade(const std::string& nome, Estado* estado)
        : Localizacao(nome), estado(estado) {}

    Estado* getEstado() const {
        return estado;
    }

private:
    Estado* estado;
};

int main() {
    std::vector<Estado> estados;
    std::vector<Cidade> cidades;
    int escolha;

    while (true) {
        std::cout << "\nMenu:\n";
        std::cout << "1. Cadastrar Estado\n";
        std::cout << "2. Cadastrar Cidade\n";
        std::cout << "3. Listar Estados e Cidades\n";
        std::cout << "4. Sair\n";
        std::cout << "Escolha uma opção: ";
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
                if (estados.empty()) {
                    std::cout << "É necessário cadastrar um estado primeiro." << std::endl;
                } else {
                    std::string nomeCidade;
                    std::cout << "Digite o nome da cidade: ";
                    std::cin >> nomeCidade;

                    std::cout << "Escolha um estado para vincular a cidade (digite o número do estado):" << std::endl;
                    for (size_t i = 0; i < estados.size(); ++i) {
                        std::cout << i + 1 << ". " << estados[i].getNome() << " - " << estados[i].getSigla() << std::endl;
                    }

                    int escolhaEstado;
                    std::cin >> escolhaEstado;

                    if (escolhaEstado >= 1 && escolhaEstado <= static_cast<int>(estados.size())) {
                        cidades.emplace_back(nomeCidade, &estados[escolhaEstado - 1]);
                        std::cout << "Cidade cadastrada com sucesso para o estado " << estados[escolhaEstado - 1].getNome() << "." << std::endl;
                    } else {
                        std::cout << "Escolha de estado inválida." << std::endl;
                    }
                }
                break;
            }
            case 3: {
                std::cout << "\nEstados cadastrados e suas cidades:" << std::endl;
                for (const auto& estado : estados) {
                    std::cout << estado.getNome() << " - " << estado.getSigla() << std::endl;
                    for (const auto& cidade : cidades) {
                        if (cidade.getEstado() == &estado) {
                            std::cout << "  - " << cidade.getNome() << std::endl;
                        }
                    }
                }
                break;
            }
            case 4:
                std::cout << "Encerrando o programa. Adeus!" << std::endl;
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente." << std::endl;
        }
    }

    return 0;
}
