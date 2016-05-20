#ifndef YOLBIL_HPP
#define YOLBIL_HPP

#include "DepoHatasi.hpp"


class Yolbil
{
private:
	static const int YAKITUYARI = 2; //litre
	// int YAKITUYARI;
	double ortHiz; // km/saat
	double ortYakit; // litre
	double genelKilometre;
	double yerelKilometre; // km
	double toplamSurmeZaman; // saat cinsinden
	double menzil;

public:
	Yolbil();
	// ~Yolbil();
	int gYAKITUYARI() const;
	void kilometreEkle(double);
	void zamanEkle(double);
	void kilometreSifirla();
	double getYerelKM();
	double getGenelKM();
	double getOrtHiz();
	double getOrtYakit();
	double getMenzil();
	void setMenzil(double);
	void ortHizHesapla();
	void ortYakitHesapla(double);
	void menzilHesapla(double,double);
};
#endif

