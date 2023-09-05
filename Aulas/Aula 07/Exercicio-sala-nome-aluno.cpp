 		#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void){
    vector <string> students;
    string word;

    getline(cin, word);
    students.push_back(word);

    for(int i = 0; i <= students.size(); i++)
        cout << students[i];

    

    return 0;
}