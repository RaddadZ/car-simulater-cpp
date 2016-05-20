#include "Arac.hpp"
#include "HizHatasi.hpp"
#include <iostream>
using namespace std;

int main(){
/**	Arac *araba = new Arac();
	araba->aracSur(50,200);
	araba->benzinAl(15);
	araba->kilometreSifirla();
	araba->aracSur(120,50);


	cout << depodakiYakit << "\n";
	cout << bilgisayar->getGenelKM() << "\n";
	cout << bilgisayar->gYAKITUYARI() << "\n";
	cout << bilgisayar->getYerelKM() << "\n";
	cout << "done\n";
**/

	try {
		throw HizHatasi("test hata yazısı");
	} catch(HizHatasi &hh){

	cout<<hh.Mesaj()<<endl;
	}
	return 0;
}
