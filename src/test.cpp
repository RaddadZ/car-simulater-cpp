#include "Arac.hpp"
#include <iostream>
using namespace std;

int main(){
	Arac *araba = new Arac();

	
	araba->benzinAl(20);

	cout << araba->depodakiYakit << " depodaki yakit\n";
	cout << araba->bilgisayar->getGenelKM() << " genel km \n";
	cout << araba->bilgisayar->getYerelKM() << " yerel km \n";
	cout << araba->bilgisayar->getOrtHiz() << " ort hiz \n";
	cout << araba->bilgisayar->getMenzil() << " menzil \n";
	cout << araba->bilgisayar->getOrtYakit()  << " ort yakit\n";
	cout << "done\n";

	araba->aracSur(90,200);

	cout << araba->depodakiYakit << " depodaki yakit\n";
	cout << araba->bilgisayar->getGenelKM() << " genel km \n";
	cout << araba->bilgisayar->getYerelKM() << " yerel km \n";
	cout << araba->bilgisayar->getOrtHiz() << " ort hiz \n";
	cout << araba->bilgisayar->getMenzil() << " menzil \n";
	cout << araba->bilgisayar->getOrtYakit() << " ort yakit\n";
	cout << "done\n";

	araba->benzinAl(20);
	araba->aracSur(40,80);

	cout << araba->depodakiYakit << " depodaki yakit\n";
	cout << araba->bilgisayar->getGenelKM() << " genel km \n";
	cout << araba->bilgisayar->getYerelKM() << " yerel km \n";
	cout << araba->bilgisayar->getOrtHiz() << " ort hiz \n";
	cout << araba->bilgisayar->getMenzil() << " menzil \n";
	cout << araba->bilgisayar->getOrtYakit() << " ort yakit\n";
	cout << "done\n";


	return 0;
}