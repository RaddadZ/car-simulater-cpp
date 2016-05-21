#include "GirdiHatasi.hpp"
#include "Hata.hpp"

#include <string>
using std::string;

	GirdiHatasi::GirdiHatasi(const string &msg):Hata("Girdi: "+msg){ }
