#Blackjack Makefile

all: main.o Card.o Hand.o Deck.o BlackjackHand.o
	g++ -o blackjack.o main.o Hand.o Card.o Deck.o BlackjackHand.o

main.o: main.cpp
	g++ -c main.cpp

Hand.o: Hand.cpp
	g++ -c Hand.cpp

Card.o: Card.cpp
	g++ -c Card.cpp

Deck.o: Deck.cpp
	g++ -c Deck.cpp

BlackjackHand.o: BlackjackHand.cpp
	g++ -c BlackjackHand.cpp

