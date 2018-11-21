OPT = -Wall

t01:	main.o Book.o NonFictionBook.o FictionBook.o Library.o List.o  View.o Control.o
	g++ $(OPT) -o t01 main.o Book.o NonFictionBook.o FictionBook.o Library.o List.o View.o Control.o

main.o:	main.cc Control.h
	g++ $(OPT) -c main.cc

Control.o: Control.cc Control.h
	g++ $(OPT) -c Control.cc

View.o: View.cc View.h
	g++ $(OPT) -c View.cc

List.o: List.cc List.h
	g++ $(OPT) -c List.cc

Library.o: Library.cc Library.h
	g++ $(OPT) -c Library.cc

Book.o:	Book.cc Book.h
	g++ $(OPT) -c Book.cc

NonFictionBook.o: NonFictionBook.cc NonFictionBook.h
	g++ $(OPT) -c NonFictionBook.cc

FictionBook.o: FictionBook.cc FictionBook.h
	g++ $(OPT) -c FictionBook.cc

clean:
	rm -f *.o t01
