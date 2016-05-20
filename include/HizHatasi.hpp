#ifndef HIZHATASI_HPP
#define HIZHATASI_HPP

#include "Hata.hpp"
#include <string>
using std::string;

class HizHatasi: public Hata {
	public :
		HizHatasi(const string &msg);
};

#endif
