#include "Yolbil.hpp"

#ifndef ARAC_HPP
#define ARAC_HPP

class Arac
{
private:
	static const int DEPOKAPASITE = 10;
	static const int MAXHIZ = 180;
	static const int HM050 = 15;
	static const int HM5075 = 12;
	static const int HM75110 = 9;
	static const int HM110MAX = 6;

	double depodakiYakit;
	Yolbil *bilgisayar;

public:
	Arac();
	~Arac();
	void aracSur(double, double);
	void benzinAl(double);
	void kilometreSifirla();

};
#endif