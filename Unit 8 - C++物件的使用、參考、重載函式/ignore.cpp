#include <iostream>

using namespace std;
int main(int argc, char** argv) {

	
	char a[100], b[100];
	
	cin >> a;
	cin.ignore();
	cin.getline(b, 100);
	
	cout << "string a " << a << endl;
	cout << "string b " << b << endl;
	
	return 0;
}
