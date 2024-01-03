#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <string>

using namespace std;

void ngGame(){
	int x = 1, y = 100, z;
	int n = 1;
	int inp;
	srand((unsigned)time(0)); 
	z = (rand() % 100) + 1;

	puts("");
	cout << "=========== �q�Ʀr�C�� ===========\n" << endl; 
	cout << "�W�h: �C�^�X���w5�����|�A�����b5��\n" << 
			"��5�����q��q��1~100�H���Ʀr�C\n" << 
			"(�p�ݰh�X�п�J '0')\n" << endl; 
	cout << "==================================\n" << endl;
	system("pause");
	cout << "  �m�H�H�����ͼƦr�A�C���}�l!�n\n" << endl;	 
	cout << "�Цb" << x << "�M" << y << "�����q����Ʀr" << endl;
	
	
	while((inp != z) && (n != 6)){
		cout << " ��" << n << "���q��> "; 
		cin >> inp;
		puts ("");
		
		if(inp == 0){
			return;
		}
		if (inp != z) {
			if ((inp < x) || (inp > y)){
				cout << "�W�X�d��A�Цb" << x << "��" << y <<"�����q����Ʀr" << endl;
				continue;
			}else if(inp > z){
				y = inp;
				n++;
				if (n == 6){
					break;
				}
				cout << "�q�����~�A�Цb" << x << "�M" << y << "�����q����Ʀr" << endl; 
				continue;
			}else if(inp < z){
				x = inp;
				n++;
				if (n == 6){
					break;
				}
				cout << "�q�����~�A�Цb" << x << "�M" << y << "�����q����Ʀr" << endl; 
				continue;
			}	
		}
	}
	
	if (inp == z){
		cout << "==================================" << endl;
		cout << "\n����! �A�b��" << n << "�����ɭԲq��F�H���Ʀr <" <<
		z << "> \n�P�¹C��!" << endl; 
	}else{
		cout << "==================================" << endl;
		cout << "\n�w�α��������|�A���T�Ʀr�O <" << z << ">\n�A���A�F!" << endl;	
	} 
}

void calc(){
	
	double x = 0, y = 0;
	char sel;
	
	puts("");
	cout << "=========== �򥻭p��� ===========\n" << endl;
	cout << "�ϥΤ�k: ��J�����ӼƦr�A�۰ʿ�\n" <<
		 	"�X�۹諸�[������סC\n" <<
		 	"(��J����ӼƦr�������p��2^31)\n" << endl;
	cout << "==================================\n" << endl;
	system("pause");
	cout << "�Ĥ@�ӼƦr > ";
	cin >> x;
	cout << "�ĤG�ӼƦr > ";
	cin >> y;
	puts("");
	
	cout << "�п�ܬ۹諸�p���k:" << endl;
	while(1){
		puts(" a �[�k"); 
		puts(" s ��k"); 
		puts(" m ���k"); 
		puts(" d ���k"); 
		puts(" e �����p��"); 
		cout << "> ";
		cin >> sel;
		puts ("");
		
		switch(sel){
			case 'a':
				puts("�[�k:");
				cout << x << " + " << y << " = " << x + y << endl;
				return;
			case 's':
				puts("��k:");
				cout << x << " - " << y << " = " << x - y << endl;
				return;
			case 'm':
				puts("���k:");
				cout << x << " * " << y << " = " << x * y << endl;
				return;
			case 'd':
				puts("���k:");
				cout << x << " / " << y << " = " << x / y << endl;
				return;
			case 'e':
				puts("�����p��:");
				cout << x << " + " << y << " = " << x + y << endl;
				cout << x << " - " << y << " = " << x - y << endl;
				cout << x << " * " << y << " = " << x * y << endl;
				cout << x << " / " << y << " = " << x / y << endl;
				return;		
		}	
	}
	system("pause");
}

void note(){
	
	FILE *Note;
	char str[80];
	string temp;
	string text;
	
	puts("");
	cout << "========== ����O�ƥ� ==========\n" << endl;
	cout << "�ϥΤ�k: ��J����Q�x�s����r�A\n" 
		 << "�÷|�۰��x�s�ܧA���q���w�СC\n" 
		 << "�p�O�Ĥ@���ϥαN�|�t�s�s�ɡA�p��\n"
		 << "�O���ܨ����ɡA�åB���వ�ק�\n" << endl;
	cout << "================================\n" << endl;	 
	system("pause");
	cout << "�п�J�z���ɮשηs���ɮצW�� " << endl;
	cout << " > ";
	cin >> str;
	
	ifstream file(str);
	if (file.is_open()){
		cout << "\n�m�wŪ���ɮסn" << endl; 
		puts("");
		cout << str << ".txt: " << endl;
		while (getline (file, text)) {
	  		cout << text << endl;
		}
		file.close();
	}else{
		cout << "�ɮפ��s�b, �H�t�s�s��!\n" << endl; 
	 	cout << "�п�J���" << endl;
		cout << " > ";	
		cin >> temp; 
		ofstream ifile(str);
	 	ifile << temp;
		ifile.close(); 
	 	puts("");
	 	cout << "�ɮפw�x�s!" << endl;
	}
}
		
int main(){

	puts("");
	cout << "========== �h�γ~�{�� ==========\n" << endl;
	cout << "�п�J�N���ӿ�ܻݭn���{��:\n" << endl; 
	char op;
		while(1){
			puts("n �q�Ʀr�C��"); 
			puts("c �򥻭p���"); 
			puts("z ����O�ƥ�"); 
			puts("q ���}"); 
			cout << " > ";
			cin >> op;
			
			switch(op){
				case 'n':
					system("cls");
					ngGame();
					break;
				case 'c':
					system("cls");
					calc();
					break;
				case 'z':
					system("cls");
					note();
					break;
				case 'q':
					cout << "�P�¹C���A���A���Ӭ��n���@��!" << endl; 
					return 0;
			}
			system("pause");
			system("cls");	
		}
		

	return 0;
}
