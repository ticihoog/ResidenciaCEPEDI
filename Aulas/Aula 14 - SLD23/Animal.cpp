#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    string nome;
    int idade;

public:
    Animal(string _nome, int _idade) : nome(_nome), idade(_idade) {}

    virtual void fazerSom() {
        cout << "O animal faz algum som!" << endl;
    }
};

class Cachorro : public Animal {
public:
    Cachorro(string _nome, int _idade) : Animal(_nome, _idade) {}

    void fazerSom() override {
        cout << "Au Au!" << endl;
    }
};

int main() {
    Animal animal("Bicho", 5);
    Cachorro cachorro("Rex", 3);

    cout << "Animal:" << endl;
    cout << "Nome: " << animal.nome << endl;
    cout << "Idade: " << animal.idade << endl;
    animal.fazerSom();

    cout << endl;

    cout << "Cachorro:" << endl;
    cout << "Nome: " << cachorro.nome << endl;
    cout << "Idade: " << cachorro.idade << endl;
    cachorro.fazerSom();

    return 0;
}
