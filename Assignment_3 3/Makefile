OPT = -Wall

#List.o was between Time.o and View.o
OBJS = main.o Calendar.o Event.o WorkEvent.o SchoolEvent.o Date.o Time.o View.o Control.o

cal: $(OBJS) EventServer.o Array.o
	g++ $(OPT) -o cal $(OBJS) EventServer.o Array.o

main.o:	main.cc Calendar.h Event.h List.h
	g++ $(OPT) -c main.cc

Control.o: Control.cc Control.h
	g++ $(OPT) -c Control.cc

View.o: View.cc View.h
	g++ $(OPT) -c View.cc

#List.o: List.cc List.h
#	g++ $(OPT) -c List.cc

Calendar.o: Calendar.cc Calendar.h
	g++ $(OPT) -c Calendar.cc

Event.o: Event.cc Event.h
	g++ $(OPT) -c Event.cc

WorkEvent.o: WorkEvent.cc WorkEvent.h
	g++ $(OPT) -c WorkEvent.cc

SchoolEvent.o: SchoolEvent.cc SchoolEvent.h
	g++ $(OPT) -c SchoolEvent.cc

Date.o:	Date.cc Date.h
	g++ $(OPT) -c Date.cc

Time.o:	Time.cc Time.h
	g++ $(OPT) -c Time.cc

clean:
	rm -f $(OBJS) cal
