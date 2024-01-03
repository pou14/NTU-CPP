#include <iostream>
using namespace std;

class Square{
	private:
		int len;
		
	public :	
	
		Square(){
			len = 0;
		}
		Square(int n){
			setLen(n);
		}
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
	
	Square s1, s2, s3;
	
	//s1.len = 10;
	//s2.len = 20;
	int n1, n2;
	cin >> n1 >> n2;
	s1.setLen(n1);
	s2.setLen(n2);  
	
	cout << "Area = " << s1.area() << " cm^2" << endl;
	cout << "Area = " << s2.area() << " cm^2" << endl;
	cout << "Area = " << s3.area() << " cm^2" << endl;
	/*
	cout << "len: " << s1.getLen() << endl;
	cout << "area: " << s1.area() << endl;
	
	cout << "len: " << s2.getLen() << endl;
	cout << "area: " << s2.area() << endl;
	
	cout << "len: " << s3.getLen() << endl;
	cout << "area: " << s3.area() << endl;
	*/	
	return 0;
}
