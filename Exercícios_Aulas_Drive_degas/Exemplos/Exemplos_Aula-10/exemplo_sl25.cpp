#include <iostream>
#include <vector>

using namespace std;
 
int main () {
	vector<int> vec {0,1,
		1,2,3,5,8,13,21};
	cout << vec.size() << endl;
	vec.push_back(34);
	cout << vec.size() << endl;
}



