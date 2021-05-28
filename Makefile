CC = g++
CFLAGS = -Wall -g
 
tp1: bignum.o cmdline.o precisionfija.o tp1.o
	$(CC) $(CFLAGS) -o tp1 bignum.o cmdline.o precisionfija.o tp1.o

tp1.o: tp1.cpp bignum.h cmdline.h precisionfija.h 
	$(CC) $(CFLAGS) -c tp1.cpp

cmdline.o: cmdline.h
	$(CC) $(CFLAGS) -c cmdline.cpp
 
precisionfija.o: precisionfija.h
	$(CC) $(CFLAGS) -c precisionfija.cpp

bignum.o: bignum.h
	$(CC) $(CFLAGS) -c bignum.cpp

clean:
	@rm -f *.o *.out *.in tp1