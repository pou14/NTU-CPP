#include <iostream>
using namespace std;

class eCash{
	private:
		int Money;
		int m;
		
	public:
		eCash(){
		 Money = 0;
		}
		
		~eCash(){
			cout<< "eCash: Thank you. Bye Bye." << endl;
		}
		void store(){
			cin >> m;
			if(m < 0){
				cout << "eCash: Please enter a number > 0." << endl;
			}else{
				Money += m;
				cout << "eCash: You stored " << m << "." << endl;
			}
		}
		
		void pay(){
			cin >> m;
			if(m < 0){
				cout << "eCash: Please enter a number > 0." << endl;
			}else if (Money < m){
				cout << "eCash: Insufficient balance." << endl;
			}else{
				Money -= m;
				cout << "eCash: You spend " << m << "." << endl;
			}
		}
			
		
		void display(){
			cout << "eCash: You remaining " << Money << "." << endl;
		}
};

int main(){
	eCash p1;
	char inp;
	while(1){
	
		cin >> inp;
		switch(inp){
			case 's':
				p1.store(); 
				break;
			case 'p':
				p1.pay();
				break;
			case 'd':
				p1.display();
				break;
			case 'q':
				return 0;
		}
	}
	
	return 0;
}
 
