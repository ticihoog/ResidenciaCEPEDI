#include <iostream>
using namespace std;

int main(void)
{
    int n[5] = {1, 2, 3, 4, 5};
    char pal[6] = {'b','r','a','s','i','l'};
    float num[10] = {1.0, 2.0, 3.0};
    int cont[5] = {};
    int i = 0;
    cout << "i" << "\t" << "n[i]" << "\t" 
         << "cont[i]" << "\t" << "num[i]" << endl;
    while(i < 5){
        cout << i << "\t" 
             << n[i] << "\t" 
             << cont[i] << "\t" 
             << num[i] << endl;
        i++;
    }
    for(i = 0; i < 6; i++)
        cout << pal[i];

    cout << endl;
    return 0; 
}


