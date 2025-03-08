CFLAGS=-c -I.

all:  lab5-main.exe

lab5-main.exe:  BankRecord.o  lab5-main.o
	g++ BankRecord.o lab5-main.o  -o $@

BankRecord.o: BankRecord.cc BankRecord.h
	g++ $(CFLAGS) $<

lab5-main.o:  lab5-main.cc  BankRecord.h
	g++ $(CFLAGS) $<

clean:
	rm -f *.o *.exe

cleanwin:
	del *.o
	del *.exe
