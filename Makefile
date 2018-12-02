OPT = -Wall

t08:	main.o Book.o Library.o Array.o View.o Control.o List.o FictionBook.o NonFictionBook.o
	g++ $(OPT) -o t08 main.o Book.o Library.o Array.o View.o Control.o List.o FictionBook.o NonFictionBook.o

main.o:	main.cc Book.h Library.h Array.h List.h
	g++ $(OPT) -c main.cc

Control.o: Control.cc Control.h View.h
	g++ $(OPT) -c Control.cc

View.o: View.cc View.h Array.h
	g++ $(OPT) -c View.cc

Array.o: Array.cc Array.h Book.h Library.h
	g++ $(OPT) -c Array.cc

List.o: List.cc List.h Book.h
	g++ $(OPT) -c List.cc

Library.o: Library.cc Library.h 
	g++ $(OPT) -c Library.cc

FictionBook.o: FictionBook.cc FictionBook.h Book.h
	g++ $(OPT) -c FictionBook.cc

NonFictionBook.o: NonFictionBook.cc NonFictionBook.h Book.h
	g++ $(OPT) -c NonFictionBook.cc

Book.o:	Book.cc Book.h
	g++ $(OPT) -c Book.cc

clean:
	rm -f *.o t08
