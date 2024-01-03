#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main(int argc, char** argv) {
	
	string temp;
	int n;
	cin >> n;
	string *p = new string[n];
	
	for(int i = 0; i < n; i++){
		cin >> p[i];
		
	}
	
	for(int j = n; j > 2; j--){
		for(int i = 0; i < j - 1; i++){
			if(p[i] > p[i+1]){
				temp = p[i];
				p[i] = p[i+1];
				p[i+1] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		cout << p[i] << " ";
	}
	cout << endl;
	
	delete []p;
	return 0;
}
