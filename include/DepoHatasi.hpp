#ifndef DEPOHATASI_HPP
#define DEPOHATASI_HPP

#include "Hata.hpp"
#include <string>
using std::string;

class DepoHatasi: public Hata {
	public :
		DepoHatasi(const string &msg);
};

#endif
