#include <iostream>
using namespace std;

class Pokemon{
	public:
		void Show();
		void SetData(string na, int lv, int hpc, int hpm){
			
			if (hpc > hpm){
				cout << "HP Error" << endl;
				return;
			}
			Name = na;
			Lv = lv;
			HpCur = hpc;
			HpMax = hpm;
		}
		void Attack(Pokemon &target){
			if(HpCur <= 0){
				cout << Name << " Unable to attack" << endl;
				return;
			}
			if(target.HpCur <= 0){
				cout << "Enemy " << target.Name << " Lost his energy" << endl;
				return;
			}
			
			cout << Name << " attaked " << target.Name << " for " 
			<< Lv << " Health " << endl;
			target.Defence(Lv);
		}
		void Defence(int n){
			HpCur -= n;
			if (HpCur <= 0){
				cout << Name << " Lost his energy" << endl;
				HpCur = 0;
			}
		}
		void Cure(){
			cout << Name << " Health Cure" << endl;
			HpCur = HpMax;
		}
			
	private:
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
	
	Pokemon p1, p2;	
	
	p1.SetData("Pikachu", 10, 15, 15);
	p2.SetData("Fire", 15, 25, 25); 
	
	p1.Attack(p2);
	p2.Attack(p1);
	p1.Attack(p2);
	p2.Attack(p1);
	
	p1.Cure();
	
	p1.Show();
	p2.Show();
	return 0;
}
