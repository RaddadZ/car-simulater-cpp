hepsi: derle calistir
derle:
	g++ -I ./include/ -o ./lib/Arac.o -c ./src/Arac.cpp
	g++ -I ./include/ -o ./lib/Yolbil.o -c ./src/Yolbil.cpp
calistir:
	./bin/test
