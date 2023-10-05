#include <iostream>
#include <vector>

using namespace std;

class Usuario;
class Cliente;
class Funcionario;
class Aluguel;
class Veiculo;
class Date;

class Date
{
private:
    int dia, mes, ano;

public:
    int getDia() const { return dia; }
    int getMes() const { return mes; }
    int getAno() const { return ano; }

    void setDia(int dia) { this->dia = dia; }
    void setMes(int mes) { this->mes = mes; }
    void setAno(int ano) { this->ano = ano; }

    void mostrarData() { cout << getDia() << "/" << getMes() << "/" << getAno() << endl; }
};

class Usuario
{
protected:
    string cpf, nome, endereco, telefone;

public:
    string getNome() { return nome; }
    string getCpf() { return cpf; }
    string getEndereco() { return endereco; }
    string getTelefone() { return telefone; }

    void setNome(string nome) { this->nome = nome; }
    void setEndereco(string endereco) { this->endereco = endereco; }
    void setTelefone(string telefone) { this->telefone = telefone; }
    void setCpf(string cpf) { this->cpf = cpf; }
};

class Cliente : public Usuario
{
private:
    string habilitacao;
    vector<Aluguel> historicoAlugueis;

public:
    string getNome() { return nome; }
    string getCpf() { return cpf; }
    string getEndereco() { return endereco; }
    string getTelefone() { return telefone; }

    void setNome(string nome) { this->nome = nome; }
    void setEndereco(string endereco) { this->endereco = endereco; }
    void setTelefone(string telefone) { this->telefone = telefone; }
    void setCpf(string cpf) { this->cpf = cpf; }

    vector<Aluguel> getHistoricoAlugueis() { return historicoAlugueis; }

    void setHabilitacao(string habilitacao) { this->habilitacao = habilitacao; }
    void setHistoricoAlugueis(Aluguel historico) { historicoAlugueis.push_back(historico); }

    float cotar_aluguel(Veiculo veiculo, Date dataInicio, Date dataFim) {}
    Aluguel solicitar_aluguel(Veiculo veiculo, Date dataInicio, Date dataFim) {}
    void devolver_veiculo(Aluguel aluguel, Date dataDevolucao);
};

class Funcionario : public Usuario
{
protected:
    vector<Aluguel> historicoAlugueis;

public:
    string getNome() { return nome; }
    string getCpf() { return cpf; }
    string getEndereco() { return endereco; }
    string getTelefone() { return telefone; }

    void setNome(string nome) { this->nome = nome; }
    void setEndereco(string endereco) { this->endereco = endereco; }
    void setTelefone(string telefone) { this->telefone = telefone; }
    void setCpf(string cpf) { this->cpf = cpf; }

    void finalizar_aluguel(Aluguel aluguel, Date dataDevolucao) {}
};

class Veiculo
{
protected:
    string identificador;
    string marca;
    string modelo;
    int anoFabricacao;
    float precoPorDia;

public:
    string getIdentificador() { return identificador; }
    string getMarca() { return marca; }
    string getModelo() { return modelo; }
    int getAnoFabricacao() { return anoFabricacao; }
    float getPrecoPorDia(){return precoPorDia};

    void setIdetificador(string identificador) { this->identificador = identificador; }
    void setMarca(string marca) { this->marca = marca; }
    void setModelo(string modelo) { this->modelo = modelo; }
    void setAnoFabricacao(int ano) { this->anoFabricacao = ano; }
    void setPrecoPorDia(float preco) { this->precoPorDia = preco; }
};

class Aluguel
{
protected:
    string identificador;
    Veiculo veiculo;
    Cliente cliente;
    Funcionario funcionario;
    Date dataInicio;
    Date dataFim;
    Date dataDevolucao;
    float desconto;
    float adicional;

public:
    float calcular_valor_final();
};

class FuncionarioCliente
{
    // class n para n entre funcionario e cliente
};

class FuncionarioVeiculo
{
    // class n para n entre funcionario e veiculo
};

class ClienteVeiculo
{
    // class n para n entre cliente e veiculo
};

int main()
{

    return 0;
}
