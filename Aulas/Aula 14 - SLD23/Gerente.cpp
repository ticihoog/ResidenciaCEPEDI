class Empregado {
private:
string nome; float salario;
public:
nome = n;
Empregado (string n, float s) { salario = s; }
};
class Gerente: Empregado {
private:
string departamento;
public:
Gerente(string n, float s, string d): Empregado (n,s) departamento = d;
}
};

class Empregado {
private:
string nome;
float salario;
public:
Empregado() {
nome = "Default"; salario = 0; }
class Gerente: Empregado { private: string departamento; public:
Gerente (string d) { departamento = d; }

};