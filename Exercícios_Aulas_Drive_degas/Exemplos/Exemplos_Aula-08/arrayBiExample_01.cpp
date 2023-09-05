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
    int i, j;
    cout << fixed;
    cout << setprecision(1);
    for(i = 0; i < NLIN; i++)
    {
        for(j = 0; j < NCOL; j++)
            cout << notas[i][j] << "\t";
        cout << endl;
    }
    return 0;
}





