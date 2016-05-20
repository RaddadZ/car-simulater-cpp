#include "Arac.hpp"
#include <iostream>
using namespace std;

int main(){
	Arac *araba = new Arac();
	araba->benzinAl(20);


	cout << araba->depodakiYakit << "\n";
	cout << araba->bilgisayar->getGenelKM() << "\n";
	cout << araba->bilgisayar->gYAKITUYARI() << "\n";
	cout << araba->bilgisayar->getYerelKM() << "\n";
	cout << araba->bilgisayar->getOrtHiz() << "\n";
	cout << "done\n";


	araba->aracSur(50,200);
	araba->benzinAl(15);
	araba->kilometreSifirla();
	araba->aracSur(120,50);


	cout << araba->depodakiYakit << "\n";
	cout << araba->bilgisayar->getGenelKM() << "\n";
	cout << araba->bilgisayar->gYAKITUYARI() << "\n";
	cout << araba->bilgisayar->getYerelKM() << "\n";
	cout << araba->bilgisayar->getOrtHiz() << "\n";
	cout << "done\n";

	araba->aracSur(80,70);
	araba->benzinAl(15);
	araba->aracSur(180,20);

	cout << araba->depodakiYakit << "\n";
	cout << araba->bilgisayar->getGenelKM() << "\n";
	cout << araba->bilgisayar->gYAKITUYARI() << "\n";
	cout << araba->bilgisayar->getYerelKM() << "\n";
	cout << araba->bilgisayar->getOrtHiz() << "\n";
	cout << "done\n";

	return 0;
}