#include <iostream>
#include <vector>
#include <string>

using namespace std;
 
int main () {
    vector<string> vec;
    vec.push_back("Mestre");
    vec.push_back("Zangado");
    vec.push_back("Atchim");
    vec.push_back("Dunga");
    vec.push_back("Soneca");
    vec.push_back("Dengoso");
	vec.push_back("Feliz");
	for (string x:vec)
		cout << x << endl;
}



