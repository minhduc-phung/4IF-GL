all: main

main: lexer.o symbole.o main.o
	g++ -o main lexer.o symbole.o main.o

lexer.o: lexer.cpp lexer.h
	g++ -c lexer.cpp

symbole.o: symbole.cpp symbole.h
	g++ -c symbole.cpp

main.o: main.cpp lexer.h symbole.h
	g++ -c main.cpp

clean:
	rm -f *.o

mrproper: clean
	rm -f analyse