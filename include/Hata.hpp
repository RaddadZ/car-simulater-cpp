#ifndef HATA_HPP
#define HATA_HPP

#include <string>
using std::string;

class Hata{
	private :
		string mesaj;
	public :
		Hata(const string &msg);
		string Mesaj();
};

#endif
