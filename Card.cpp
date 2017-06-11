#include <iostream>
#include "Card.hh"

Card::Card(char suit, char character): a_suit(suit), a_character(character)
{
}

char Card::getSuit() const
{
    return a_suit;
}

char Card::getCharacter() const
{
    return a_character;
}


