#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

class Ponto {
	public:
	float x, y;
};

class Poligono {
	public:
	vector<Ponto> pontos;
};
 
int main () {
	Poligono poli;
	cout << "Criando um poligono" << endl;
	char sn;
	do {
		cout << "Digite as coordenadas do ponto: ";
		Ponto p;
		cin >> p.x >> p.y;
		poli.pontos.push_back(p);
		cout << "Deseja inserir mais pontos (s/n)? ";
		cin >> sn;
	} while (sn !='n');
	//listando os pontos
	cout << "As coordenadas digitadas foram" << endl;
	for (Ponto p:poli.pontos)
		cout << "(" << p.x << "," << p.y << ") ";
	//calculando o perimetro
	float per = 0;
	vector<Ponto>::iterator it2;
	Ponto p1;
	Ponto p2;
	for (auto it = poli.pontos.begin(); it != poli.pontos.end(); it++) {
		it2 = it;
		advance(it2,1);
		p1 = *it;
		p2 = *it2;
		per += sqrt( pow(p1.x-p2.x,2) + pow(p1.y-p2.y,2) );
	}
	//pegando a distancia entre o ultimo e o primeiro pontos
	it2 = poli.pontos.begin();
	p1 = *it2;
	per += sqrt( pow(p1.x-p2.x,2) + pow(p1.y-p2.y,2) );
	cout << "Perimetro calculado: " << per << endl;
}





