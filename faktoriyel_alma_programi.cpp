#include <iostream>

using namespace std;

int main(){
	bool kontrol;
	
	do
	{
		char karakter;
		int faktoriyel=1,kac;
		cout << "hangi sayinin faktoriyelini almak istiyorsunuz = " << endl;
		cin >> kac;
		
		for(int i=1;i<=kac;i++){
			faktoriyel=faktoriyel*i;
		}
		cout << kac << " ! = " << faktoriyel;
		
		cout <<"devam etmek istiyorsaniz E istemiyorsaniz H" << endl;
		cin >> karakter;
		if (karakter== 'E'){
			kontrol = true;
		}
		else
		{
			kontrol = false;
		}
	}while(kontrol);{
	
	cout << "programdan ciktiniz";
	}
	
}
