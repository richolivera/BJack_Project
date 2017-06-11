#include "BlackjackHand.hh"

BlackjackHand::BlackjackHand():Hand(),
	                           a_handValue(0),
							   a_isSoftValue(false),
							   a_numCards(0),
							   a_isBlackjack(false)
{
}

BlackjackHand::BlackjackHand(const Card* firstCard):Hand(firstCard),a_handValue(0),
                                                              a_isSoftValue(false),
                                                              a_numCards(1),
													          a_isBlackjack(false)

{
    processHandValue(firstCard);
}

BlackjackHand::~BlackjackHand()
{
}

void BlackjackHand::hit(const Card * newCard)
{
   Hand::addCard(newCard);
}
void BlackjackHand::stand()
{

}
void BlackjackHand::displayHand() const
{

}

int BlackjackHand::getHandValue() const
{
    return a_handValue;
}

void BlackjackHand::processHandValue(const Card * addedCard)
{
    //retrieve the card value eg. K,Q,9,2,etc.
    char tempChar = addedCard->getCharacter();
    switch(tempChar)
    {
		case 'A':
            if(a_handValue <= 10)
            {
                a_handValue = a_handValue + 11;
                a_isSoftValue = true;
            }
            else
            {
                a_handValue = a_handValue + 1;
            }
            break;
        case 'K':
        case 'Q':
        case 'J':
        case 'T':
            a_handValue = a_handValue + 10;
            break;
		case '9':
            a_handValue = a_handValue + 9;
            break;
		case '8':
            a_handValue = a_handValue + 8;
            break;
		case '7':
            a_handValue = a_handValue + 7;
            break;
		case '6':
            a_handValue = a_handValue + 6;
            break;
		case '5':
            a_handValue = a_handValue + 5;
            break;
		case '4':
            a_handValue = a_handValue + 4;
            break;
		case '3':
            a_handValue = a_handValue + 3;
            break;
		case '2':
            a_handValue = a_handValue + 2;
            break;
        default:
            break;
    }
    //adjust for soft value overage case
    if((21 < a_handValue) && (true == a_isSoftValue))
    {
        a_handValue = a_handValue - 10;    
        a_isSoftValue = false;
    }
	//check hand for Blackjack (face card and ace)
	if((21 == a_handValue) && (2 == a_numCards) && (true == a_isSoftValue))
	{
		a_isBlackjack = true;
	}
}
