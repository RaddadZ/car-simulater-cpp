#include "Arac.hpp"
#include <iostream>
using namespace std;

int main(){
	Arac *araba = new Arac();
	araba->aracSur(50,200);
	araba->benzinAl(15);
	araba->kilometreSifirla();
	araba->aracSur(120,50);


	cout << depodakiYakit << "\n";
	cout << bilgisayar->getGenelKM() << "\n";
	cout << bilgisayar->gYAKITUYARI() << "\n";
	cout << bilgisayar->getYerelKM() << "\n";
	cout << "done\n";

	return 0;
}