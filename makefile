hepsi: libmake derle calistir
derle:
	g++ -I ./include/ -o ./lib/Yolbil.o -c ./src/Yolbil.cpp
	g++ -I ./include/ -o ./lib/Arac.o -c ./src/Arac.cpp
	g++ -I ./include/ -o ./bin/test ./lib/libhata.a ./lib/Yolbil.o ./lib/Arac.o ./src/test.cpp

.PHONY: libmake

libmake:
	$(MAKE) -C include
calistir:
	./bin/test.exe
