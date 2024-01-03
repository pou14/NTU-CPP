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
	cout << "=========== 猜數字遊戲 ===========\n" << endl; 
	cout << "規則: 每回合限定5次機會，必須在5次\n" << 
			"或5次內猜到電腦1~100隨機數字。\n" << 
			"(如需退出請輸入 '0')\n" << endl; 
	cout << "==================================\n" << endl;
	system("pause");
	cout << "  《以隨機產生數字，遊戲開始!》\n" << endl;	 
	cout << "請在" << x << "和" << y << "之間猜任何數字" << endl;
	
	
	while((inp != z) && (n != 6)){
		cout << " 第" << n << "次猜測> "; 
		cin >> inp;
		puts ("");
		
		if(inp == 0){
			return;
		}
		if (inp != z) {
			if ((inp < x) || (inp > y)){
				cout << "超出範圍，請在" << x << "到" << y <<"之間猜任何數字" << endl;
				continue;
			}else if(inp > z){
				y = inp;
				n++;
				if (n == 6){
					break;
				}
				cout << "猜測錯誤，請在" << x << "和" << y << "之間猜任何數字" << endl; 
				continue;
			}else if(inp < z){
				x = inp;
				n++;
				if (n == 6){
					break;
				}
				cout << "猜測錯誤，請在" << x << "和" << y << "之間猜任何數字" << endl; 
				continue;
			}	
		}
	}
	
	if (inp == z){
		cout << "==================================" << endl;
		cout << "\n恭喜! 你在第" << n << "次的時候猜到了隨機數字 <" <<
		z << "> \n感謝遊玩!" << endl; 
	}else{
		cout << "==================================" << endl;
		cout << "\n已用掉五次機會，正確數字是 <" << z << ">\n再接再厲!" << endl;	
	} 
}

void calc(){
	
	double x = 0, y = 0;
	char sel;
	
	puts("");
	cout << "=========== 基本計算機 ===========\n" << endl;
	cout << "使用方法: 輸入任何兩個數字，自動輸\n" <<
		 	"出相對的加減乘除答案。\n" <<
		 	"(輸入的兩個數字必須都小於2^31)\n" << endl;
	cout << "==================================\n" << endl;
	system("pause");
	cout << "第一個數字 > ";
	cin >> x;
	cout << "第二個數字 > ";
	cin >> y;
	puts("");
	
	cout << "請選擇相對的計算方法:" << endl;
	while(1){
		puts(" a 加法"); 
		puts(" s 減法"); 
		puts(" m 乘法"); 
		puts(" d 除法"); 
		puts(" e 全部計算"); 
		cout << "> ";
		cin >> sel;
		puts ("");
		
		switch(sel){
			case 'a':
				puts("加法:");
				cout << x << " + " << y << " = " << x + y << endl;
				return;
			case 's':
				puts("減法:");
				cout << x << " - " << y << " = " << x - y << endl;
				return;
			case 'm':
				puts("乘法:");
				cout << x << " * " << y << " = " << x * y << endl;
				return;
			case 'd':
				puts("除法:");
				cout << x << " / " << y << " = " << x / y << endl;
				return;
			case 'e':
				puts("全部計算:");
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
	cout << "========== 中文記事本 ==========\n" << endl;
	cout << "使用方法: 輸入任何想儲存的單字，\n" 
		 << "並會自動儲存至你的電腦硬碟。\n" 
		 << "如是第一次使用將會另存新檔，如不\n"
		 << "是的話取舊檔，並且不能做修改\n" << endl;
	cout << "================================\n" << endl;	 
	system("pause");
	cout << "請輸入您的檔案或新的檔案名稱 " << endl;
	cout << " > ";
	cin >> str;
	
	ifstream file(str);
	if (file.is_open()){
		cout << "\n《已讀取檔案》" << endl; 
		puts("");
		cout << str << ".txt: " << endl;
		while (getline (file, text)) {
	  		cout << text << endl;
		}
		file.close();
	}else{
		cout << "檔案不存在, 以另存新檔!\n" << endl; 
	 	cout << "請輸入資料" << endl;
		cout << " > ";	
		cin >> temp; 
		ofstream ifile(str);
	 	ifile << temp;
		ifile.close(); 
	 	puts("");
	 	cout << "檔案已儲存!" << endl;
	}
}
		
int main(){

	puts("");
	cout << "========== 多用途程序 ==========\n" << endl;
	cout << "請輸入代號來選擇需要的程序:\n" << endl; 
	char op;
		while(1){
			puts("n 猜數字遊戲"); 
			puts("c 基本計算機"); 
			puts("z 中文記事本"); 
			puts("q 離開"); 
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
					cout << "感謝遊玩，祝你有個美好的一天!" << endl; 
					return 0;
			}
			system("pause");
			system("cls");	
		}
		

	return 0;
}
