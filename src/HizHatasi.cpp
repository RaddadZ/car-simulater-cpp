#include "HizHatasi.hpp"
#include "Hata.hpp"

#include <string>
using std::string;

	HizHatasi::HizHatasi(const string &msg):Hata("Hiz: "+msg){ }
