OPT = -Wall

cal:	main.o Date.o Time.o Event.o Calendar.o
	g++ $(OPT) -o cal main.o Date.o Time.o Event.o Calendar.o

main.o:	main.cc Date.h
	g++ $(OPT) -c main.cc

Date.o:	Date.cc Date.h
	g++ $(OPT) -c Date.cc

Time.o:	Time.cc Time.h
	g++ $(OPT) -c Time.cc

Event.o: Event.cc Event.h
	g++ $(OPT) -c Event.cc

Calendar.o: Calendar.cc Calendar.h
	g++ $(OPT) -c Calendar.cc

clean:
	rm -f *.o cal
