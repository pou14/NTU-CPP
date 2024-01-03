#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main(int argc, char** argv) {

	string s1, s2;
	char ch[100] = "banana";
	
	s1 = "apple";
	s2 = ch;
	
	cout << s1 << endl;
	cout << s2 << endl;
	
	cin >> s2;
	
	if (s1 == s2){
		cout << "1 == 2" << endl;
	} else if (s1 > s2){
		cout << "1 > 2" << endl;		
	}else {
		cout << "1 < 2" << endl;
	}
	
	strcpy(ch, s2.c_str());
	cout << ch << endl;
	
	return 0;
}
