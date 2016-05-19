#ifndef YOLBIL_HPP
#define YOLBIL_HPP

class Yolbil
{
private:
	static const int YAKITUYARI = 2; //litre
	double ortHiz; // km/saat
	double ortYakit; // litre
	double genelKilometre;
	double yerelKilometre; // km
	double toplamSurmeZaman; // saat cinsinden

public:
	Yolbil();
	~Yolbil();
	void kilometreEkle(double);
	void zamanEkle(double);
	void setYerelKM(double);
	double getYerelKM();
	double getGenelKM();
	
};
#endif

