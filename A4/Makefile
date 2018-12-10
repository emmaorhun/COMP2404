#Emma Orhun
#101071651
#04/12/18
#COMP2404
#Assignment 4

OPT = -Wall

OBJS = main.o Calendar.o Event.o SchoolEvent.o WorkEvent.o Control.o View.o  Date.o Time.o 

cal: $(OBJS) Array.o EventServer.o 
	g++ $(OPT) -o cal $(OBJS) Array.o EventServer.o 

main.o:	main.cc Calendar.h List.h Event.h 
	g++ $(OPT) -c main.cc

View.o: View.cc View.h
	g++ $(OPT) -c View.cc

Control.o: Control.cc Control.h
	g++ $(OPT) -c Control.cc

Calendar.o: Calendar.cc Calendar.h
	g++ $(OPT) -c Calendar.cc

Event.o: Event.cc Event.h
	g++ $(OPT) -c Event.cc

SchoolEvent.o: SchoolEvent.cc SchoolEvent.h
	g++ $(OPT) -c SchoolEvent.cc

WorkEvent.o: WorkEvent.cc WorkEvent.h
	g++ $(OPT) -c WorkEvent.cc

Time.o:	Time.cc Time.h
	g++ $(OPT) -c Time.cc

Date.o:	Date.cc Date.h
	g++ $(OPT) -c Date.cc

clean:
	rm -f $(OBJS) cal
