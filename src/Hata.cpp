#include <string>
#include "Hata.hpp"
using std::string;

	Hata :: Hata( const string &msg):mesaj(msg){}
	string Hata::Mesaj(){ return "Hata: " + mesaj;}
