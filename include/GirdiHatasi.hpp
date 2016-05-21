#ifndef GIRDIHATASI_HPP
#define GIRDIHATASI_HPP

#include "Hata.hpp"
#include <string>
using std::string;

class GirdiHatasi: public Hata {
	public :
		GirdiHatasi(const string &msg);
};

#endif
