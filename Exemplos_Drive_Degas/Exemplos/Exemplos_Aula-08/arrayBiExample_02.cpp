#include <iostream>
#include <iomanip>
using namespace std;
#define NLIN 5  // 5 alunos
#define NCOL 3  // 3 notas por aluno

int main(void)
{
    float notas[NLIN][NCOL] = { { 5.3, 8.3, 7.1 },
                                { 4.2, 6.8, 7.3 },
                                { 6.0, 5.4, 1.0 },
                                { 9.7, 10.0, 9.6},
                                { 2.1, 5.8, 7.9 } };
    float mediaAluno[NLIN] = {0.0}, mediaAvalia[NCOL] = {0.0};
    cout << fixed;
    cout << setprecision(1);
    for(int i = 0; i < NLIN; i++){
        cout << "Notas do aluno " << i+1 << ": ";
        for(int j = 0; j < NCOL; j++){
            cout << notas[i][j] << "\t";
            mediaAluno[i] += notas[i][j];
            mediaAvalia[j] += notas[i][j];
        }
        mediaAluno[i] /= NCOL;
        cout << "Média do aluno " << i+1 << ": " << mediaAluno[i] << endl;
    }
    for(int j = 0; j < NCOL; j++){
        mediaAvalia[j] /= NLIN;
        cout << "Média da turma na avaliação " << j+1 << ": " << mediaAvalia[j] << endl;
    }
    return 0;
}







