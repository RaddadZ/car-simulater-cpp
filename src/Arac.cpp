#include "Arac.hpp"
#include <iostream>
using namespace std;

Arac::Arac() {
	bilgisayar = new Yolbil();
}

Arac::~Arac() {
	delete bilgisayar;
}

double Arac::harcamaOraniHesapla(double hiz){
	// try {
	// 	if (hiz < 0) throw HizHatasi("hiz sifir altinda");
	// 	if (hiz > MAXHIZ) throw HizHatasi("hiz maxin altinda");
		if (0 < hiz && hiz <= 50)
			return HM050;
		if (50 < hiz && hiz <= 75)
			return HM5075;
		if (75 < hiz && hiz <= 110)
			return HM75110;
		return HM110MAX;
	// }
	// catch (HizHatasi &err){
	// 	cout << "Hiz: " << err.mesaj() << "\n";
	// }
}


void Arac::aracSur(double hiz, double kilometre){
	double harcananYakit = 0;
	double harcamaOrani = 0;
	// try{
		harcamaOrani = harcamaOraniHesapla(hiz);

		harcananYakit = harcamaOrani*kilometre/100;
	// if (harcananYakit > depodakiYakit) throw DepoHatasi("yakit yetmiyor");
		depodakiYakit-= harcananYakit;

		// bilgisayar guncellenir
		bilgisayar->kilometreEkle(kilometre);
		bilgisayar->zamanEkle(kilometre / hiz);
		bilgisayar->ortHizHesapla();
		harcamaOrani = harcamaOraniHesapla(bilgisayar->getOrtHiz());
		bilgisayar->ortYakitHesapla(harcamaOrani);
		bilgisayar->menzilHesapla(harcamaOrani,depodakiYakit);

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



