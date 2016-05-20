#include "Yolbil.hpp"

Yolbil::Yolbil(){
	// YAKITUYARI = 2;
	genelKilometre = 0;
	kilometreSifirla();
}

int Yolbil::gYAKITUYARI() const{
	return YAKITUYARI;
}

void Yolbil::kilometreEkle(double kilometre){
	genelKilometre += kilometre;
	yerelKilometre += kilometre;
}

void Yolbil::zamanEkle(double zaman){
	toplamSurmeZaman += zaman;
}
void Yolbil::kilometreSifirla(){
	ortHiz = 0; // km/saat
	ortYakit = 0; // litre
	yerelKilometre = 0; // km
	toplamSurmeZaman = 0; // saat cinsinden
}
double Yolbil::getYerelKM(){
	return yerelKilometre;
}

double Yolbil::getGenelKM(){
	return genelKilometre;
}

double Yolbil::getOrtHiz(){
	return ortHiz;
}

double Yolbil::getOrtYakit(){
	return ortYakit;
}


double Yolbil::getMenzil(){
	return menzil;
}

void Yolbil::setMenzil(double deger){
	menzil = deger;
}
void Yolbil::ortHizHesapla(){
	ortHiz = yerelKilometre / toplamSurmeZaman;
}

void Yolbil::ortYakitHesapla(double oran){
	ortYakit = oran*yerelKilometre/100;
}

void Yolbil::menzilHesapla(double oran, double yakit){
	if (yakit<YAKITUYARI) throw DepoHatasi("Kalan yakit cok dusuktur. maalesef araba surmeyin.");
	menzil = 100 * yakit / oran;
}