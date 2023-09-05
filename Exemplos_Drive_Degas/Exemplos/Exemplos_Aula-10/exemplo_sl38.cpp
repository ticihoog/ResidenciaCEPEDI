#include <iostream>
#include <vector>

using namespace std;
 
int main () {
	vector<int> vec {0,1,
		1,2,3,5,8,13,21};
	for (auto x = vec.begin();
			x!=vec.end();x++)
		cout << *x << endl;
	cout << "-------------" << endl;
	for (auto x = vec.rbegin();
			x!=vec.rend();x++)
		cout << *x << endl;
}



