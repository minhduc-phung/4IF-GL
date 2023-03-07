CFLAGS = -c -w

all: main

main: *.o
	g++ -o main *.o

all.o: lexer.o automate.o main.o all.etat all.symbole

lexer.o: lexer.cpp
	g++ $(CFLAGS) lexer.cpp

automate.o: automate.cpp
	g++ $(CFLAGS) automate.cpp

main.o: main.cpp
	g++ $(CFLAGS) main.cpp

##### Etats ###########
all.etat: etat.o E0.o E1.o E2.o E3.o E4.o E5.o E6.o E7.o E8.o E9.o

etat.o: ./etats/etat.cpp
	g++ $(CFLAGS) ./etats/etat.cpp

E0.o: ./etats/E0.cpp
	g++ $(CFLAGS) ./etats/E0.cpp

E1.o: ./etats/E1.cpp
	g++ $(CFLAGS) ./etats/E1.cpp

E2.o: ./etats/E2.cpp
	g++ $(CFLAGS) ./etats/E2.cpp

E3.o: ./etats/E3.cpp
	g++ $(CFLAGS) ./etats/E3.cpp

E4.o: ./etats/E4.cpp
	g++ $(CFLAGS) ./etats/E4.cpp

E5.o: ./etats/E5.cpp
	g++ $(CFLAGS) ./etats/E5.cpp

E6.o: ./etats/E6.cpp
	g++ $(CFLAGS) ./etats/E6.cpp

E7.o: ./etats/E7.cpp
	g++ $(CFLAGS) ./etats/E7.cpp

E8.o: ./etats/E8.cpp
	g++ $(CFLAGS) ./etats/E8.cpp

E9.o: ./etats/E9.cpp
	g++ $(CFLAGS) ./etats/E9.cpp

##### Symbole #####	
all.symbole: symbole.o expression.o entier.o plus.o mult.o openPar.o closePar.o fin.o

symbole.o: ./symbole/symbole.cpp
	g++ $(CFLAGS) ./symbole/symbole.cpp

expression.o: ./symbole/expression.cpp
	g++ $(CFLAGS) ./symbole/expression.cpp

entier.o: ./symbole/entier.cpp
	g++ $(CFLAGS) ./symbole/entier.cpp

plus.o: ./symbole/plus.cpp
	g++ $(CFLAGS) ./symbole/plus.cpp

mult.o: ./symbole/mult.cpp
	g++ $(CFLAGS) ./symbole/mult.cpp

openPar.o: ./symbole/openPar.cpp
	g++ $(CFLAGS) ./symbole/openPar.cpp

closePar.o: ./symbole/closePar.cpp
	g++ $(CFLAGS) ./symbole/closePar.cpp

fin.o: ./symbole/fin.cpp
	g++ $(CFLAGS) ./symbole/fin.cpp

####### Nettoyage #######
clean:
	rm -f *.o

clean.main: clean
	rm -f main