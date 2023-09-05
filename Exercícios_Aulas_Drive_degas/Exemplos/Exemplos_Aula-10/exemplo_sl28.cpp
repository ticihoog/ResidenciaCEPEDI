#include <iostream>
#include <vector>

using namespace std;
 
int main () {
	vector<int> vec {0,1,
		1,2,3,5,8,13,21};
	for (auto it = vec.begin(); 
			it != vec.end(); it++) 
		cout << *it << endl;
}



