OPT = -Wall

t05: Main.o Book.o Library.o Array.o View.o Control.o
	g++ $(OPT) -o t05 Main.o Book.o Library.o Array.o View.o Control.o

Main.o:
	g++ $(OPT) -c main.cc

Book.o:	Book.cc Book.h
	g++ $(OPT) -c Book.cc

Array.o: Array.cc Array.h
	g++ $(OPT) -c Array.cc

Library.o: Library.cc Library.h Book.h Array.h
	g++ $(OPT) -c Library.cc

View.o: View.cc View.h
	g++ $(OPT) -c View.cc

Control.o: Control.cc Control.h
	g++ $(OPT) -c Control.cc

clean:
	rm -f *.o t05
