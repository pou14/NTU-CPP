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
				cout << "eCash: You stored " << m << ".\n" << endl;
			}
		}
		
		void pay(){
			cin >> m;
			if(m < 0){
				cout << "eCash: Please enter a number > 0." << endl;
			}else if (Money < m){
				cout << "eCash: Insufficient balance. \n" << endl;
			}else{
				Money -= m;
				cout << "eCash: You spend " << m << ".\n" << endl;
			}
		}
			
		
		void display(){
			cout << "eCash: You remaining " << Money << ".\n" << endl;
		}
};

int main(){
	eCash p1;
	char inp;
	while(1){
		cout << "=== 歡迎使用eCash ===" << endl; 
		cout << "" << endl; 
		cout << "您好，請選擇項目" << endl; 
		puts("s: 儲值"); 
		puts("p: 消費"); 
		puts("d: 顯示餘額");
		puts("q: 離開"); 
		
		cin >> inp;
		switch(inp){
			case 's':
				cout << "請輸入金額:" << endl; 
				p1.store(); 
				break;
			case 'p':
				cout << "請輸入金額:" << endl; 
				p1.pay();
				break;
			case 'd':
				p1.display();
				break;
			case 'q':
				return 0;
		}
	}
	
	system("pause");
	system("cls");
	return 0;
}
 
