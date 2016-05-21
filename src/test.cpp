#include "Arac.hpp"
#include "GirdiHatasi.hpp"

#include <iostream>
using namespace std;

Arac araba;

double degeral(string msg, int tekraral){
	double x;
	do {
		try {
			cin >> x;
			if (! cin) throw GirdiHatasi(msg);
		}
		catch(GirdiHatasi &err){
			cout << err.Mesaj();
			cin.clear();
			cin.ignore(100, '\n'); 
			x = -1;
		}
	} while (tekraral&&x == -1);
	
	return x;
}

void araciSur() {
	double hiz;
	double km;
	cout << "Aracin surulecegi hizi giriniz:\n";
	hiz = degeral("Gecerli bir deger girmediniz, bir daha deneyiniz\n",1);
	cout << "Aracin surulecegi kilometreyi giriniz:\n";
	km = degeral("Gecerli bir deger girmediniz, bir daha deneyiniz\n",1);
	araba.aracSur(hiz,km);
}

void benzinAl() {
	double litre;
	cout << "Litreyi giriniz:\n";
	litre = degeral("Gecerli bir deger girmediniz, bir daha deneyiniz\n",1);
	araba.benzinAl(litre);
}

void islemlerMenusu(){
	int secenek;
	while(true){
		cout << "---- Islemler Menusu:\n   1. Araci sur\n   2. Benzin al\n   3. Yerel kilometreyi sifirla\n   4. Ana menuye don\n   Secenek: ";
		secenek = degeral("",0);
		switch (secenek){
			case 1: araciSur();
					break;
			case 2: benzinAl();
					break;
			case 3: araba.kilometreSifirla();
					break;
			case 4: return;
			default: cout << "Gecerli bir secenek numarisi girmediniz\n";
		}
	}
}

void bilgisayarMenusu(){
	int secenek;
	while(true){
		cout << "---- Bilgisayar Menusu:\n   1. Genel kilometre goster\n   2. Yerel Kilometre goster\n   3. Ortalama hizini goster\n   4. Ortalama yakit tuketimi\n   5. Menzil\n   6. Ana menuye don\n   Secenek: ";
		secenek = degeral("",0);

		switch (secenek){
			case 1: cout << "Genel Kilometre: " << araba.bilgisayar->getGenelKM() << " km\n";
					break;
			case 2: cout << "Yerel Kilometre: " << araba.bilgisayar->getYerelKM()<< " km\n";
					break;
			case 3: cout << "Ortalama Hiz: " << araba.bilgisayar->getOrtHiz()<< " km/saat\n";
					break;
			case 4: cout << "Ortalama Yakit: " << araba.bilgisayar->getOrtYakit()<< " litre\n";
					break;
			case 5: araba.menzilHesapla();
					cout << "Gidilebilecek Menzil: " << araba.bilgisayar->getMenzil()<< " km\n";
					break;
			case 6: return;
			default: cout << "Gecerli bir secenek numarisi girmediniz\n";
		}
	}
}

int main(){

	int secenek=0;

	while(secenek != 3){

		cout << "-- Program Menusu:\n 0. Arac Bilgileri\n 1. Islemler\n 2. Yol Bilgisayari\n 3. Cikis\n Secenek: ";
		secenek = degeral("",0);

		switch (secenek){
			case 0: araba.getAracBilgileri();
					break;
			case 1: islemlerMenusu();
					break;
			case 2: bilgisayarMenusu();
					break;
			case 3: cout << "Program sonlaniyor\n";
					break;
			default: cout << "Gecerli bir secenek numarisi girmediniz\n";
		}
	}

	return 0;
}
