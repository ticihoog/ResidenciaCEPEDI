#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char* argv[])
{
    cout << "O nome do programa: " << argv[0] << endl; 
    cout << "Quantidade de argumentos: " << argc << endl;

    if (argc == 1)
        cout << "Nenhum argumento passado." << endl;
    else
    {    
        cout << "Os argumentos passados são: " << endl;
        for (int i = 1; i < argc; i++)
            cout << "argv[" << i << "]: " << argv[i] << endl;
    }
    return 0;
}





