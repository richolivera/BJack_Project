#ifndef HAND_HH
#define HAND_HH

#include "Card.hh"

// Hand class
//-----------
// attributes:
//    ap_cardArr: Pointer to the start of an array of card pointers
//    a_size: size of this array
//
// methods:
//    

class Hand
{
private:
    const Card** ap_cardArr;   
    int  a_size;
public:
/*    Hand(Card** cardArr, int size); //remove for simplicity */
    Hand(const Card* firstCard);
    Hand();
    ~Hand();
    const Card* getCard(int index);
    int getSize();
    void addCard(const Card* newCard);
};

#endif
