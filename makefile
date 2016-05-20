hepsi: derle calistir
derle:
	g++ -I ./include/ -o ./lib/Yolbil.o -c ./src/Yolbil.cpp
	g++ -I ./include/ -o ./lib/Arac.o -c ./src/Arac.cpp
	g++ -I ./include/ -o ./lib/Hata.o -c ./src/Hata.cpp
	g++ -I ./include/ -o ./lib/HizHatasi.o -c ./src/HizHatasi.cpp
	g++ -I ./include/ -o ./lib/MesafeHatasi.o -c ./src/MesafeHatasi.cpp
	g++ -I ./include/ -o ./lib/DepoHatasi.o -c ./src/DepoHatasi.cpp
	g++ -I ./include/ -o ./bin/test.exe ./lib/DepoHatasi.o ./lib/MesafeHatasi.o ./lib/HizHatasi.o ./lib/Hata.o ./lib/Yolbil.o ./lib/Arac.o ./src/test.cpp

calistir:
	./bin/test.exe
