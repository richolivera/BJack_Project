#ifndef CARD_HH
#define CARD_HH


class Card
{
private:
    char a_suit;
    char a_character;
public:
    Card(char suit, char character);
    char getSuit() const;
    char getCharacter() const;
//    Card* getCard();
};

#endif /* CARD_HH */ 
