#include "Yolbil.hpp"
#include "MesafeHatasi.hpp"
#include "HizHatasi.hpp"
#include "DepoHatasi.hpp"

#ifndef ARAC_HPP
#define ARAC_HPP

class Arac
{
private:
	static const int DEPOKAPASITE = 20;
	static const int MAXHIZ = 180;
	static const int HM050 = 15;
	static const int HM5075 = 12;
	static const int HM75110 = 9;
	static const int HM110MAX = 6;

public:
	Arac();
	~Arac();
	double depodakiYakit;
	Yolbil *bilgisayar;
	void aracSur(double, double);
	void benzinAl(double);
	void kilometreSifirla();
	double harcamaOraniHesapla(double);
	void getAracBilgileri();
	void menzilHesapla();


};
#endif