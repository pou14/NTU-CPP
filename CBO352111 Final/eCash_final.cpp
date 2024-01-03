#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;

int temp; 

class eCash{
	private:
		int Money;
		int m;
		FILE *ID;
		
	public:
		char str[80];
		eCash(){
			Money = 0;
		}
		
		~eCash(){
			cout << "eCash: 帳號登出, 已存檔!" << endl;
			cout << "謝謝，ByeBye!" << endl;
		}
		
		void store(){
			cin >> m;
			if(m < 0){
				cout << "eCash: 請輸入大餘0的金額" << endl;
			}else{
				Money = temp;
				Money += m;
				temp = Money;
				cout << "eCash: 您存了" << m << "元" << endl;
			}
		}
		
		void pay(){
			cin >> m;
			if(m < 0){
				cout << "eCash: 請輸入大餘0的金額" << endl;
			}else if (Money < m){
				cout << "eCash: 您的錢不夠" << endl;
			}else{
				Money = temp;
				Money -= m;
				temp = Money;
				cout << "eCash: 您花了" << m << "元" << endl;
			}
		}
			
		
		void display(){
			Money = temp;
			cout << "eCash: 您尚有" << Money << "元" << endl;
		}
};

int main(){
	eCash p1;
	char inp, str[80];
	cout << "=== 歡迎使用eCash ===" << endl; 
	cout << "eCash: 請輸入您的帳號: ";
	cin >> str;
	
	if (FILE *ID = fopen(str, "r")){
		ifstream fin;
		fin.open(str);
		fin >> temp;
		cout << "eCash: 帳號開啟完成!" << endl; 
	}else {
		cout << "eCash: 帳號不存在, 第一次使用!" << endl; 
	}
	
	while(1){
		puts("");
		cout << str << "您好，請選擇項目:" << endl; 
		puts("s: 儲值"); 
		puts("p: 消費"); 
		puts("d: 顯示餘額");
		puts("q: 離開"); 
		cout <<"> ";
		
		cin >> inp;
		switch(inp){
			case 's':
				cout << "請輸入金額:" << endl; 
				p1.store(); 
				system("pause");
				system("cls");
				break;
			case 'p':
				cout << "請輸入金額:" << endl; 
				p1.pay();
				system("pause");
				system("cls");
				break;
			case 'd':
				p1.display();
				system("pause");
				system("cls");
				break;
			case 'q':
				FILE *ID = fopen(str, "w");
				fprintf(ID, "%d", temp);
				fclose(ID);
				return 0;
		}
	}
	
	system("pause");
	system("cls");
	return 0;
}
