#ifndef DECK_HH
#define DECK_HH

#include "Card.hh"
#include <list>
#include <vector>
#include <time.h>
#include <stdlib.h>

// there is a way to hide this data.  I just have not figured it out yet
static const int DECK_SIZE = 52;
static const Card trueDeck[DECK_SIZE] = { Card('C', '2'), Card('C', '3'), Card('C', '4'),
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
                      };
                    

class Deck
{
private:
    std::vector<const Card *> a_tempDeck;
    std::list<const Card *> a_gameDeck;
public:
    Deck();
    ~Deck();
    const Card* dealOneCard();
    void   shuffle();

};

#endif 

