#include <iostream>
using namespace std;

int main(void)
{
    double val[5] = {1.5, 2.4, 3.3, 4.2, 5.1};
    //double x[5] = val;
    double x[5], y[5];
    //y = val; // erro: a expressão deve ser um lvalue modificável
    for(int i = 0; i < 5; i++)
    {
        x[i] = val[i];
        y[i] = val[i];
    }
    return 0; 
}
 
 

