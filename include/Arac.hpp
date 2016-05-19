#ifndef ARAC_HPP
#define ARAC_HPP
class Araba
{
private:
	const int DEPOKAPASITE;
	const int MAXHIZ = 180;
	const int HM050 = 15;
	const int HM5075 = 12;
	const int HM75110 = 9;
	const int HM110MAX = 6;

	double depodakiYakit;
	Yolbil *bilgisayar;

public:
	Araba();
	~Araba();
	void aracSur(double, double);
	void benzinAl(double);
	void kilometreSifirla();

};
#endif