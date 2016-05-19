#include <stdlib.h>

class Arac
{
private:
	const int DEPOKAPASITE = 10;
	const int MAXHIZ = 180;
	const int HM050 = 15;
	const int HM5075 = 12;
	const int HM75110 = 9;
	const int HM110MAX = 6;

	double depodakiYakit;
	Yolbil *bilgisayar;

public:
	Arac(){
		bilgisayar = new bilgisayar();
	}
	~Arac(){
		delete bilgisayar;
	}
	
	
	void aracSur(double ortHiz, double kilometre){
		double harcananYakit=0;
		double surmeZaman=0;
		try {
			if (ortHiz < 0) throw HizHatasi("hiz sifir altinda");
			if (ortHiz > MAXHIZ) throw HizHatasi("hiz maxin altinda");
			if (kilometre < 0) throw MesafeHatasi("mesafe sifir altinda");

			if (0 < ortHiz && ortHiz <= 50)
			harcananYakit = HM050*kilometre/100;
			else if (50 < ortHiz && ortHiz <= 75)
				harcananYakit = HM5075*kilometre/100;
			else if (75 < ortHiz && ortHiz <= 110)
				harcananYakit = HM75110*kilometre/100;
			else 
				harcananYakit = HM110MAX*kilometre/100;

			if (harcananYakit > depodakiYakit) throw DepoHatasi("yakit yetmiyor");
			depodakiYakit-= harcananYakit;
			surmeZaman = kilometre / ortHiz;
			bilgisayar.kilometreEkle(kilometre);
			bilgisayar.zamanEkle(surmeZaman);
		}
		catch (HizHatasi &err){
			cout << "Hiz: " << err.mesaj() << "\n";
		}
		catch (MesafeHatasi &err){
			cout << "Mesafe: " << err.mesaj() << "\n";
		}
		catch (DepoHatasi &err){
			cout << "Depo: " << err.mesaj() << "\n";
		}
	}

	void benzinAl(double litre){
		try {
			if (litre < 0) throw DepoHatasi("girilen litre sifirin altinda");
			if (litre > DEPOKAPASITE) throw DepoHatasi("girilen litre depo kapasitesinden buyuktur")
			depodakiYakit += litre;
		}
		catch (DepoHatasi &err){
			cout << "Depo: " << err.mesaj() << "\n";
		}
	}

	void kilometreSifirla() {
		bilgisayar.setYerelKM(0);
	}

};