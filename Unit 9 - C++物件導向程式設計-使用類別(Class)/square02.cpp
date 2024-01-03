#include <iostream>
using namespace std;

class Square{
	private:
		int len;
		
	public :	
		int area(){
			return len * len;
		}
			
		void setLen(int n){
			if(n<0){
				cout << "Len can't be smaller than 0" << endl;
				len = 0;
				return;
			}
			len = n;
		}
		
		int getLen(){
			return len;
		}
};

int main(){
	
	Square s1, s2;
	
	//s1.len = 10;
	//s2.len = 20;
	s1.setLen(10);
	s2.setLen(20);  
	
	cout << "len: " << s1.getLen() << endl;
	cout << "area: " << s1.area() << endl;
	
	cout << "len: " << s2.getLen() << endl;
	cout << "area: " << s2.area() << endl;
	
	return 0;
}
