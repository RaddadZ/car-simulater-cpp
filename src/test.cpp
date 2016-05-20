#include "Arac.hpp"
#include "HizHatasi.hpp"
#include <iostream>
using namespace std;

int main(){
<<<<<<< HEAD
/**	Arac *araba = new Arac();
=======
	Arac *araba = new Arac();
	araba->benzinAl(20);


	cout << araba->depodakiYakit << "\n";
	cout << araba->bilgisayar->getGenelKM() << "\n";
	cout << araba->bilgisayar->gYAKITUYARI() << "\n";
	cout << araba->bilgisayar->getYerelKM() << "\n";
	cout << araba->bilgisayar->getOrtHiz() << "\n";
	cout << "done\n";


>>>>>>> 95d12ce96873a409cf509bdf449b3cdec44dbbd1
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
**/

	try {
		throw HizHatasi("test hata yazısı");
	} catch(HizHatasi &hh){

	cout<<hh.Mesaj()<<endl;
	}
	return 0;
}
