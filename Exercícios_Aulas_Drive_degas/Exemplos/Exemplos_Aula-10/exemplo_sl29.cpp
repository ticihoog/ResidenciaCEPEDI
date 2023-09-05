#include <iostream>
#include <vector>

using namespace std;
 
int main () {
	vector<int> vec {0,1,
		1,2,3,5,8,13,21};
	vector<int>::iterator it;
	it = vec.begin();
	cout << *it << endl;
	advance(it,1);
	cout << *it << endl;
	advance(it,4);
	cout << *it << endl;
}



