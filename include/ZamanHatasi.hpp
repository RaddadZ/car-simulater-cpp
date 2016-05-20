#ifndef ZAMANHATASI_HPP
#define ZAMANHATASI_HPP

#include "Hata.hpp"
#include <string>
using std::string;

class ZamanHatasi: public Hata {
	public :
		ZamanHatasi(const string &msg);
};

#endif
