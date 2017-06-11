#include "Deck.hh"
//#include "stdio.h"

Deck::Deck()
{
/*static const Card trueDeck[52] = { Card('C', '2'), Card('C', '3'), Card('C', '4'),
                      Card('C', '5'), Card('C', '6'), Card('C', '7'),
                      Card('C', '8'), Card('C', '9'), Card('C', 'T'),
                      Card('C', 'J'), Card('C', 'Q'), Card('C', 'K'),
                      Card('C', 'A'),
                      Card('D', '2'), Card('D', '3'), Card('D', '4'),
                      Card('D', '5'), Card('D', '6'), Card('D', '7'),
                      Card('D', '8'), Card('D', '9'), Card('D', 'T'),
                      Card('D', 'J'), Card('D', 'Q'), Card('D', 'K'),
                      Card('D', 'A'),
                      Card('H', '2'), Card('H', '3'), Card('H', '4'),
                      Card('H', '5'), Card('H', '6'), Card('H', '7'),
                      Card('H', '8'), Card('H', '9'), Card('H', 'T'),
                      Card('H', 'J'), Card('H', 'Q'), Card('H', 'K'),
                      Card('H', 'A'),
                      Card('S', '2'), Card('S', '3'), Card('S', '4'),
                      Card('S', '5'), Card('S', '6'), Card('S', '7'),
                      Card('S', '8'), Card('S', '9'), Card('S', 'T'),
                      Card('S', 'J'), Card('S', 'Q'), Card('S', 'K'),
                      Card('S', 'A')
                    }; */
}

Deck::~Deck()
{
}

const Card* Deck::dealOneCard()
{
    if(a_gameDeck.size() > 0)
    {
        const Card* temp = a_gameDeck.front();
        a_gameDeck.pop_front();
        return temp;
    }
    else
    {
        return NULL;
    }
}

void Deck::shuffle()
{
    int index = 0;
    srand(time(NULL)); 
    // clear previous game deck
    a_gameDeck.clear();
    //initialize temp deck
    a_tempDeck.clear();
    for(int i = 0; i < DECK_SIZE; i++)
    {
        a_tempDeck.push_back(&trueDeck[i]);
    }
    //run shuffle loop
    while(a_tempDeck.size() > 0)
    {    
        //randomly remove one card ptr from temp deck
        //push that card to the start of game deck
        index = (rand() % a_tempDeck.size());
        a_gameDeck.push_front(a_tempDeck[index]);
        a_tempDeck.erase(a_tempDeck.begin()+index);
    }
}


