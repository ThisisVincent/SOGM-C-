

all:instrument

instrument:instrument.o instrument_main.o
	g++ -o instrument instrument.o instrument_main.o
	make clean


instrument.o: instrument.cpp
	g++ -c instrument.cpp

instrument_main.o: instrument_main.cpp
	g++ -c instrument_main.cpp

clean:
	rm instrument.o instrument_main.o
