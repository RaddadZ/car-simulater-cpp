#include "DepoHatasi.hpp"
#include "Hata.hpp"

#include <string>
using std::string;

	DepoHatasi::DepoHatasi(const string &msg):Hata("Depo: "+msg){ }
