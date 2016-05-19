class Yolbil
{
private:
	const int YAKITUYARI = 2;
	double ortHiz;
	double genelKilometre;
	double yerelKilometre;
	double surmeZaman

public:
	Yolbil();
	~Yolbil();

	void kilometreEkle(double kilometre){
		genelKilometre += kilometre;
		yerelKilometre += kilometre;
	}

	void zamanEkle(double zaman){
		surmeZaman += zaman;
	}

	void setYerelKM(double km){
		yerelKilometre=km;
	}
	double getYerelKM(){
		return yerelKilometre;
	}

	double getGenelKM(){
		return genelKilometre;
	}
	
};