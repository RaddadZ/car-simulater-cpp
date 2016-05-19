#include "Yolbil.hpp"

void Yolbil::kilometreEkle(double kilometre){
	genelKilometre += kilometre;
	yerelKilometre += kilometre;
}

void Yolbil::zamanEkle(double zaman){
	toplamSurmeZaman += zaman;
}

void Yolbil::setYerelKM(double km){
	yerelKilometre=km;
}
double Yolbil::getYerelKM(){
	return yerelKilometre;
}

double Yolbil::getGenelKM(){
	return genelKilometre;
}
