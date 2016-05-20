hepsi: derle calistir
derle:
	g++ -I ./include/ -o ./lib/Yolbil.o -c ./src/Yolbil.cpp
	g++ -I ./include/ -o ./lib/Arac.o -c ./src/Arac.cpp
	g++ -I ./include/ -o ./bin/test.exe ./lib/Yolbil.o ./lib/Arac.o ./src/test.cpp
calistir:
	./bin/test.exe
