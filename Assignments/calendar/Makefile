OPT = -Wall

cal:	main.o Date.o Time.o
	g++ $(OPT) -o cal main.o Date.o Time.o

main.o:	main.cc Date.h
	g++ $(OPT) -c main.cc

Date.o:	Date.cc Date.h
	g++ $(OPT) -c Date.cc

Time.o:	Time.cc Time.h
	g++ $(OPT) -c Time.cc

clean:
	rm -f *.o cal
