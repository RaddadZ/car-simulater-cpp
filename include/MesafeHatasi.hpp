#ifndef MESAFEHATASI_HPP
#define MESAFEHATASI_HPP

#include "Hata.hpp"
#include <string>
using std::string;

class MesafeHatasi: public Hata {
	public :
		MesafeHatasi(const string &msg);
};

#endif
