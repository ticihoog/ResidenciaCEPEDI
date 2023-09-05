#include <iostream>

int main () {
	int vetor[11] = {0,1,2,3,
			5,8,13,21,34,55};
	//queremos inserir o numer 1 na posição 2
	vetor[11];
	for (int i=10;i>=2;i--) //deslocando os posteriores a 2
		vetor[i+1] = vetor[i];
	vetor[2] = 1;  //inserindo o 1 na posição 2
	for (int i=0;i<11;i++)  //listar o vetor modificado
		std::cout << vetor[i] << "\n";
}



