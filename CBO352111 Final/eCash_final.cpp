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
			cout << "eCash: �b���n�X, �w�s��!" << endl;
			cout << "���¡AByeBye!" << endl;
		}
		
		void store(){
			cin >> m;
			if(m < 0){
				cout << "eCash: �п�J�j�l0�����B" << endl;
			}else{
				Money = temp;
				Money += m;
				temp = Money;
				cout << "eCash: �z�s�F" << m << "��" << endl;
			}
		}
		
		void pay(){
			cin >> m;
			if(m < 0){
				cout << "eCash: �п�J�j�l0�����B" << endl;
			}else if (Money < m){
				cout << "eCash: �z��������" << endl;
			}else{
				Money = temp;
				Money -= m;
				temp = Money;
				cout << "eCash: �z��F" << m << "��" << endl;
			}
		}
			
		
		void display(){
			Money = temp;
			cout << "eCash: �z�|��" << Money << "��" << endl;
		}
};

int main(){
	eCash p1;
	char inp, str[80];
	cout << "=== �w��ϥ�eCash ===" << endl; 
	cout << "eCash: �п�J�z���b��: ";
	cin >> str;
	
	if (FILE *ID = fopen(str, "r")){
		ifstream fin;
		fin.open(str);
		fin >> temp;
		cout << "eCash: �b���}�ҧ���!" << endl; 
	}else {
		cout << "eCash: �b�����s�b, �Ĥ@���ϥ�!" << endl; 
	}
	
	while(1){
		puts("");
		cout << str << "�z�n�A�п�ܶ���:" << endl; 
		puts("s: �x��"); 
		puts("p: ���O"); 
		puts("d: ��ܾl�B");
		puts("q: ���}"); 
		cout <<"> ";
		
		cin >> inp;
		switch(inp){
			case 's':
				cout << "�п�J���B:" << endl; 
				p1.store(); 
				system("pause");
				system("cls");
				break;
			case 'p':
				cout << "�п�J���B:" << endl; 
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
