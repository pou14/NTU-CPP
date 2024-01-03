#include <iostream>
using namespace std;

class Pokemon{
	public:
		void Show();/*{
			cout << "Name: " << Name << endl;
			cout << "Lv: " << Lv << endl;
			cout << "Hp: " << HpCur << "/" << HpMax << endl;
		}*/
		void Attack(Pokemon &target);
		void Defence(int n);
		void Cure();
		
		string Name;
		int Lv;
		int HpCur;
		int HpMax;	
};

void Pokemon::Show(){
	cout << "Name: " << Name << endl;
	cout << "Lv: " << Lv << endl;
	cout << "Hp: " << HpCur << "/" << HpMax << endl;
}

int main(){
	
	Pokemon p1 = {"Pikachu", 10, 7, 10}, 
			p2 = {"Fire", 15, 25, 25};	
	p1.Lv = 99;
	//Show();
	//Pokemon.Show();
	p1.Show();
	p2.Show();
	return 0;
}
