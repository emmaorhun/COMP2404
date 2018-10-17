OPT = -Wall

t01:	main.o Book.o Library.o Array.o
	g++ $(OPT) -o t01 main.o Book.o Library.o Array.o

main.o:	main.cc Library.h
	g++ $(OPT) -c main.cc

Library.o: Library.cc Library.h
	g++ $(OPT) -c Library.cc

Array.o: Array.cc Array.h
	g++ $(OPT) -c Array.cc

Book.o:	Book.cc Book.h
	g++ $(OPT) -c Book.cc

clean:
	rm -f *.o t01
