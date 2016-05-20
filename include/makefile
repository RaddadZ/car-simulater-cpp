CC = g++
INCDIR = -I ./
INSTALLDIR = ../lib/
SRCDIR = ../src/
OBJS = $(INSTALLDIR)Hata.o $(INSTALLDIR)ZamanHatasi.o $(INSTALLDIR)DepoHatasi.o $(INSTALLDIR)HizHatasi.o $(INSTALLDIR)MesafeHatasi.o
hepsi: Hata.o ZamanHatasi.o DepoHatasi.o HizHatasi.o MesafeHatasi.o libhata.a
Hata.o: 
	$(CC) $(INCDIR) -o $(INSTALLDIR)Hata.o -c $(SRCDIR)Hata.cpp
ZamanHatasi.o: 
	$(CC) $(INCDIR) -o $(INSTALLDIR)ZamanHatasi.o -c $(SRCDIR)ZamanHatasi.cpp
DepoHatasi.o: 
	$(CC) $(INCDIR) -o $(INSTALLDIR)DepoHatasi.o -c $(SRCDIR)DepoHatasi.cpp
HizHatasi.o: 
	$(CC) $(INCDIR) -o $(INSTALLDIR)HizHatasi.o -c $(SRCDIR)HizHatasi.cpp
MesafeHatasi.o: 
	$(CC) $(INCDIR) -o $(INSTALLDIR)MesafeHatasi.o -c $(SRCDIR)MesafeHatasi.cpp
libhata.a: $(OBJS)
	ar rcs $(INSTALLDIR)libhata.a $(OBJS)
