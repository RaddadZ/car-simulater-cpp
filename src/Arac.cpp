#include "Arac.hpp"
#include <iostream>
using namespace std;

Arac::Arac() {
	bilgisayar = new Yolbil();
}

Arac::~Arac() {
	delete bilgisayar;
}


void Arac::aracSur(double ortHiz, double kilometre){
	double harcananYakit=0;
	double surmeZaman=0;
	// try {
	// 	if (ortHiz < 0) throw HizHatasi("hiz sifir altinda");
	// 	if (ortHiz > MAXHIZ) throw HizHatasi("hiz maxin altinda");
	// 	if (kilometre < 0) throw MesafeHatasi("mesafe sifir altinda");

		if (0 < ortHiz && ortHiz <= 50)
		harcananYakit = HM050*kilometre/100;
		else if (50 < ortHiz && ortHiz <= 75)
			harcananYakit = HM5075*kilometre/100;
		else if (75 < ortHiz && ortHiz <= 110)
			harcananYakit = HM75110*kilometre/100;
		else 
			harcananYakit = HM110MAX*kilometre/100;

		// if (harcananYakit > depodakiYakit) throw DepoHatasi("yakit yetmiyor");
		depodakiYakit-= harcananYakit;
		surmeZaman = kilometre / ortHiz;
		bilgisayar->kilometreEkle(kilometre);
		bilgisayar->zamanEkle(surmeZaman);
	// }
	// catch (HizHatasi &err){
	// 	cout << "Hiz: " << err.mesaj() << "\n";
	// }
	// catch (MesafeHatasi &err){
	// 	cout << "Mesafe: " << err.mesaj() << "\n";
	// }
	// catch (DepoHatasi &err){
	// 	cout << "Depo: " << err.mesaj() << "\n";
	// }
}

void Arac::benzinAl(double litre){
	// try {
	// 	if (litre < 0) throw DepoHatasi("girilen litre sifirin altinda");
	// 	if (litre > DEPOKAPASITE) throw DepoHatasi("girilen litre depo kapasitesinden buyuktur")
		depodakiYakit += litre;
	// }
	// catch (DepoHatasi &err){
	// 	cout << "Depo: " << err.mesaj() << "\n";
	// }
}

void Arac::kilometreSifirla() {
	bilgisayar->kilometreSifirla();
}
