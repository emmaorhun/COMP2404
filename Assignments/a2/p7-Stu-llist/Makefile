p7:	main.o Student.o List.o 
	g++ -o p7 main.o Student.o List.o 

main.o:	main.cc Student.h List.h 
	g++ -c main.cc

Student.o:	Student.cc Student.h
	g++ -c Student.cc

List.o:	List.cc List.h Student.h
	g++ -c List.cc

clean:
	rm -f *.o p7
