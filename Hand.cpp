#include <stdio.h>
#include "Hand.hh"
#include "Card.hh"

/*Hand::Hand(Card** cardArr, int size): a_size(size)
{
    ap_cardArr = new Card*[a_size];
    Card* temp = cardArr
    for(int i=0; i < size; i++)
    {
        ap_cardArr[i] = temp;
        temp++;
    }
} */

Hand::Hand(const Card* firstCard):a_size(1)
{
    ap_cardArr = new const Card*[a_size];
    ap_cardArr[0] = firstCard;
}

Hand::Hand():a_size(0)
{
}

Hand::~Hand()
{
    if(a_size > 0)
    {
        // if array size is zero, no need to delete
        delete[] ap_cardArr;
    }
}

const Card* Hand::getCard(int index)
{
    if((index >= 0)&&(index < a_size))
    {
        return ap_cardArr[index];
    }
    else
    {
        return NULL;
    }
}

int Hand::getSize()
{
    return a_size;
}

void Hand::addCard(const Card* newCard)
{
    if(a_size > 0)
    {
        const Card** temp = new const Card*[a_size+1];
        const Card* cur = temp[0];
        for(int i=0; i<(a_size); i++) 
        {
           temp[i] = ap_cardArr[i];
        }
        temp[a_size] = newCard;
        delete[] ap_cardArr;
        ap_cardArr = temp;
        a_size++;
    }
    else
    {
        ap_cardArr = new const Card*[a_size];
        ap_cardArr[0] = newCard;
    }
}




