OPT = -Wall

cal:	main.o Date.o Time.o Event.o Calendar.o Control.o View.o List.o
	g++ $(OPT) -o cal main.o Time.o Date.o Event.o Calendar.o List.o Control.o View.o 

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

Control.o: Control.cc Control.h
	g++ $(OPT) -c Control.cc

View.o: View.cc View.h
	g++ $(OPT) -c View.cc

List.o: List.cc List.h
	g++ $(OPT) -c List.cc

clean:
	rm -f *.o cal
