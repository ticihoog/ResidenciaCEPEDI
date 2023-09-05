#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Ponto {
	float x, y;
	public:
	
	float get_x() {
		return x;
	}
	
	float get_y() {
		return y;
	}
	
	void le_Ponto() {
		cout << "Digite as coordenadas do ponto: ";
		cin >> x >> y;
	}
	
	string escreve_ponto() {
		return to_string(x) + " , " + to_string(y);
	}
	
	float distancia(Ponto p1) {
		return sqrt( pow(x - p1.get_x(),2) + 
						pow (y - p1.get_y(),2)  );
	}	
};

class Poligono {
	vector<Ponto> pontos;
	
	public:
	void le_pontos() {
		cout << "Criando um poligono!" << endl;
		char sn;
		do {
			Ponto p;
			p.le_Ponto();
			pontos.push_back(p);
			cout << "Deseja inserir mais pontos (s/n)?";
			cin >> sn;
		} while (sn!='n');
	}
	
	void lista_pontos() {
		cout << "As coordenadas digitadas foram" << endl;
		for (Ponto p: pontos)
			cout << "(" << p.escreve_ponto() << ") ";
	}
	
	float perimetro() {
		float per = 0;
		vector<Ponto>::iterator it2;
		Ponto p1;
		Ponto p2;
		for (auto it = pontos.begin(); 
					it != pontos.end()-1; it++) {
			it2 = it;
			advance(it2,1);
			p1 = *it;
			p2 = *it2;
			per += p1.distancia(p2);
		}
		//pegando distancia entre o primeiro e ultimo
		it2 = pontos.begin();
		p1 = *it2;
		per += p1.distancia(p2);
		return per;
	}
	
};
 
int main () {
	Poligono poli;
	//lendo os pontos
	poli.le_pontos();
	//listando os pontos
	poli.lista_pontos();
	// calculando o perímetro
	cout << endl << "Perimetro calculado: " <<
			 poli.perimetro() << endl;
			 
}





