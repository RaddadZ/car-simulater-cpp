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
		if (hiz < 0) throw HizHatasi("hiz sifir altinda");
		if (hiz > MAXHIZ) throw HizHatasi("hiz maxin ustunde");
		if (0 < hiz && hiz <= 50)
			return HM050;
		if (50 < hiz && hiz <= 75)
			return HM5075;
		if (75 < hiz && hiz <= 110)
			return HM75110;
		return HM110MAX;
}


void Arac::aracSur(double hiz, double kilometre){
	double harcananYakit = 0;
	double harcamaOrani = 0;
	try{
		harcamaOrani = harcamaOraniHesapla(hiz);
		if (kilometre < 0) throw MesafeHatasi("mesafe sifir altinda");
		harcananYakit = harcamaOrani*kilometre/100;
		if (harcananYakit > depodakiYakit) throw DepoHatasi("yakit yetmiyor");
		depodakiYakit-= harcananYakit;

		// bilgisayar guncellenir
		bilgisayar->kilometreEkle(kilometre);
		bilgisayar->zamanEkle(kilometre / hiz);
		bilgisayar->ortHizHesapla();
		harcamaOrani = harcamaOraniHesapla(bilgisayar->getOrtHiz());
		bilgisayar->ortYakitHesapla(harcamaOrani);
	}
	catch (DepoHatasi &err){
		cout << "Depo: " << err.Mesaj() << "\n";
	}
	catch (HizHatasi &err){
		cout << "Hiz: " << err.Mesaj() << "\n";
	}
	catch (MesafeHatasi &err){
		cout << "MesafeHatasi: " << err.Mesaj() << "\n";
	}
}

void Arac::benzinAl(double litre){
	try {
		if (litre < 0) throw DepoHatasi("girilen litre sifirin altinda");
		if (depodakiYakit+litre > DEPOKAPASITE) throw DepoHatasi("depo sigmiyor");
		depodakiYakit += litre;
	}
	catch (DepoHatasi &err){
		cout << "Depo: " << err.Mesaj() << "\n";
	}
}

void Arac::menzilHesapla(){
	try {
		double harcamaOrani = harcamaOraniHesapla(bilgisayar->getOrtHiz());
		bilgisayar->menzilHesapla(harcamaOrani,depodakiYakit);
	}
	catch (DepoHatasi &err){
		bilgisayar->setMenzil(0);
		cout << "Depo: " << err.Mesaj() << "\n";
	}
}

void Arac::kilometreSifirla() {
	bilgisayar->kilometreSifirla();
}

void Arac::getAracBilgileri(){
	cout 	<< "Arac max hizi (km/saat): " << MAXHIZ 
			<< "\nArac benzin deposu sigasi (litre): " << DEPOKAPASITE
			<< "\nArac benzin seviyesi uyarisi (litre): " << bilgisayar->gYAKITUYARI()
			<< "\nArac   0 ile 50  km/saat hizlarinda harcadigi yakit (litre): " << HM050
			<< "\nArac  51 ile 75  km/saat hizlarinda harcadigi yakit (litre): " << HM5075
			<< "\nArac  75 ile 110 km/saat hizlarinda harcadigi yakit (litre): " << HM75110
			<< "\nArac 110 ile MAX km/saat hizlarinda harcadigi yakit (litre): " << HM110MAX
			<< "\nBenzin: " << depodakiYakit
			<< "\n";
}



