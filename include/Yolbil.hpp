#ifndef YOLBIL_HPP
#define YOLBIL_HPP

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

public:
	Yolbil();
	// ~Yolbil();
	int gYAKITUYARI() const;
	void kilometreEkle(double);
	void zamanEkle(double);
	void kilometreSifirla();
	double getYerelKM();
	double getGenelKM();
	void ortHizHesapla();
};
#endif

