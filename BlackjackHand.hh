#ifndef BLACKJACKHAND_HH
#define BLACKJACKHAND_HH

#include <iostream>
#include "Hand.hh"
#include "Card.hh"

class BlackjackHand : public Hand
{
private:
    int a_handValue;
    int a_numCards;
    bool a_isSoftValue;
	bool a_isBlackjack;
    void processHandValue(const Card * addedCard); //adds new card to a_handValue
public:
    BlackjackHand(const Card* firstCard);
    BlackjackHand();
    ~BlackjackHand();
    void hit(const Card *);
    void stand();
    void displayHand() const;
    int getHandValue() const;  // returns
};

#endif
