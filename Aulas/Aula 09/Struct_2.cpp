#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

void mostra_data () // falta essa instrução, não consegui ler o quadro

{
    cout << "Data de nascimento: " << el.dia_nasc << "/" <<  el.mes_nasc << "/" << el.ano_nasc << "/" << endl;

}


struct titulo_eleitor 
{
    string nome;
    int dia_nasc, mes_nasc, ano_nasc;
    string num_insc;
    string zona, secao;
    string municipio, uf;
    int dia_emis, mes_emis, ano_emis; 
};


int main()
{
    titulo_eleitor el;
    cout << "Digite o nome do eleitor: ";
    getline (cin, el.nome);
    cout << "Digite data de nascimento: ";
    cin >> el.dia_nasc >> el.mes_nasc >> el.ano_nasc;
    cout << endl 
         << endl 
         << endl;
    cout << "-------- Titulo de eleitor ---------" << endl;
    cout << "Nome: " << el.nome << endl;
    cout << "Data de nascimento: " << el.dia_nasc << "/" <<  el.mes_nasc << "/" << el.ano_nasc << "/" << endl;
    cout << endl;

    return 0;
}