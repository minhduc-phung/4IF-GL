all: main

main: *.o
	g++ -o main *.o

all.o: lexer.o automate.o main.o all.etat all.symbole

lexer.o: lexer.cpp
	g++ -c lexer.cpp

automate.o: automate.cpp
	g++ -c automate.cpp

main.o: main.cpp
	g++ -c main.cpp

##### Etats ###########
all.etat: etat.o E0.o E1.o E2.o E3.o E4.o E5.o E6.o E7.o E8.o E9.o

etat.o: ./etats/etat.cpp
	g++ -c ./etats/etat.cpp

E0.o: ./etats/E0.cpp
	g++ -c ./etats/E0.cpp

E1.o: ./etats/E1.cpp
	g++ -c ./etats/E1.cpp

E2.o: ./etats/E2.cpp
	g++ -c ./etats/E2.cpp

E3.o: ./etats/E3.cpp
	g++ -c ./etats/E3.cpp

E4.o: ./etats/E4.cpp
	g++ -c ./etats/E4.cpp

E5.o: ./etats/E5.cpp
	g++ -c ./etats/E5.cpp

E6.o: ./etats/E6.cpp
	g++ -c ./etats/E6.cpp

E7.o: ./etats/E7.cpp
	g++ -c ./etats/E7.cpp

E8.o: ./etats/E8.cpp
	g++ -c ./etats/E8.cpp

E9.o: ./etats/E9.cpp
	g++ -c ./etats/E9.cpp

##### Symbole #####	
all.symbole: symbole.o expression.o entier.o plus.o mult.o openPar.o closePar.o fin.o

symbole.o: ./symbole/symbole.cpp
	g++ -c ./symbole/symbole.cpp

expression.o: ./symbole/expression.cpp
	g++ -c ./symbole/expression.cpp

entier.o: ./symbole/entier.cpp
	g++ -c ./symbole/entier.cpp

plus.o: ./symbole/plus.cpp
	g++ -c ./symbole/plus.cpp

mult.o: ./symbole/mult.cpp
	g++ -c ./symbole/mult.cpp

openPar.o: ./symbole/openPar.cpp
	g++ -c ./symbole/openPar.cpp

closePar.o: ./symbole/closePar.cpp
	g++ -c ./symbole/closePar.cpp

fin.o: ./symbole/fin.cpp
	g++ -c ./symbole/fin.cpp

####### Nettoyage #######
clean:
	rm -f *.o

clean.main: clean
	rm -f main