#include "Card.hh"
#include "Hand.hh"
#include "Deck.hh"
#include <iostream>
using namespace::std;

int main()
{
    const Card testCard('S' , 'J');
    const Card testCard2('H' , 'Q');
    const Card testCard3('C' , '7');
    Deck myDeck;
    const Card * myCard = NULL;
    cout << "\n Suit: " << testCard.getSuit() << " ,  Value: "
        << testCard.getCharacter() << endl << endl;
    const Card* temp = &testCard;
    Hand ourHand(temp);
    temp = &testCard2;
    ourHand.addCard(temp);
    temp = &testCard3;
    ourHand.addCard(temp);
    for(int i=0; i<ourHand.getSize();i++)
    {
    cout << "\n Suit: " << ourHand.getCard(i)->getSuit() << " ,  Value: "
        << ourHand.getCard(i)->getCharacter() << endl << endl;
    }

    //print and entire shuffled deck
    myDeck.shuffle();
    cout << "\n\n ******* PRINTING SHUFFLED DECK ******** \n\n";
    do
    {
        myCard = myDeck.dealOneCard();
        if(myCard !=NULL)
        {
            cout << " Suit: " << myCard->getSuit() << " ,  Value: "
            << myCard->getCharacter() << endl;
        }
   }while(myCard != NULL);
    return 0;
}


