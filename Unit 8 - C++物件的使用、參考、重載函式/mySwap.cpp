#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
/* Call by value
void MySwap(int a, int b){
	int tmp = a;
	a = b;
	b = tmp;
	cout << "By value, a = " << a << " b = " << b << endl;
}
*/

// Call by reference
void MySwap(int &a, int &b){
	cout << "By ref, a = " << a << " b = " << b << endl;
	int tmp = a;
	a = b;
	b = tmp;
	cout << "By ref, a = " << a << " b = " << b << endl;
}

// call by address
void MySwap(int *a, int *b){
	cout << "By addr, *a = " << *a << " *b = " << *b << endl;
	int tmp = *a;
	*a = *b;
	*b = tmp;
	cout << "By addr, *a = " << *a << " *b = " << *b << endl;
}
int main(int argc, char** argv) {
	
	int x = 10;
	int y = 20;
	cout << "x = " << x << " y = " << y << endl;
	MySwap(&x, &y);
	cout << "x = " << x << " y = " << y << endl;

	return 0;
}
