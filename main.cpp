#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
char wybor;
int a,b,r;
cout<<"______menu"<<endl; cout<<"---------"<<endl;
cout<<"A - Kwadrat"<<endl; cout<<"B - Prostokat"<<endl;
cout<<"C - Kolo"<<endl; cout<<"K - Koniec"<<endl;
cin>>wybor; cout<<"\n";

switch(wybor) {
	
	case 'A': cout << "Podaj zmienna a = "; cin>>a;
		cout<<"Pole kwadratu = "<<a*a<<endl;
		break;
		
	case 'B': cout<<"Podaj zmienna a = "; cin>>a;
		cout<<"Podaj zmienna b = "; cin>>b;
		cout<<"Pole prostakata = "<<a*b<<endl;
		break;
	case 'C': cout<<"Podaj promien = "; cin>>r;
		cout<<"Pole kola wynosi = "<<M_PI*r*r<<endl;
		break;
	default: cout<<"koniec programu"<<endl;
}


	getch();
	return 0;
}
