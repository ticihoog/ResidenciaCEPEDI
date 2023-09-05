#include <iostream>
#include <string>

using namespace std;
 
int main () {
	string nome1("Residencia");
	for (int i=0; i<nome1.length();i++)
		cout << nome1.at(i) << endl;
}
