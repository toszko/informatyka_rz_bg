#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int wybor;
	float kwota;
	
	cout<<"______________"<<endl;
	cout<<"	MENU"<<endl;
	cout<<"1 - Funty"<<endl;
	cout<<"2 - Dolary"<<endl;
	cout<<"3 - Euro"<<endl;
	cout<<"Wybierz: "; cin>>wybor;
	cout<<"______________"<<endl;
	
		switch(wybor) {
			
		case 1:
			cout<<"Funt [zl]: 6.7"<<endl;
			cout<<"Podaj kwote: "; cin>>kwota;
			cout<<"______________"<<endl;
			cout<<"Wynik: "<<kwota*6.7<<" zl"<<endl;
			cout<<"______________"<<endl;
			break;	
				
		case 2:
			cout<<"Dolar [zl]: 3.8"<<endl;
			cout<<"Podaj kwote: "; cin>>kwota;
			cout<<"______________"<<endl;
			cout<<"Wynik: "<<kwota*3.8<<" zl"<<endl;
			cout<<"______________"<<endl;
			break;	
		
		case 3:
			cout<<"Euro [zl]: 4.5"<<endl;
			cout<<"Podaj kwote: "; cin>>kwota;
			cout<<"______________"<<endl;
			cout<<"Wynik: "<<kwota*4.5<<" zl"<<endl;
			cout<<"______________"<<endl;
			break;	
		
		default:
			break;		
		}
		return 0;
}
