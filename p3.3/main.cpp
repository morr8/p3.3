/*
 •• P3.3
 Write a program that takes user input describing a playing card in the following shorthand notation:
 
 A
 Ace
 2 ... 10
 Card values
 J
 Jack
 Q
 Queen
 K
 King
 D
 Diamonds
 H
 Hearts
 S
 Spades
 C
 Clubs
 Your program should print the full description of the card. For example,
 
 Enter the card notation: QS
 Queen of Spades
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter the card notation: ";
    string card, number, suit;
    cin >> card;
    if (card.length() == 2)
    {
        number = card.substr(0, 1);
        suit = card. substr(1, 1);
    }
    else
    {
        number = card.substr(0, 2);
        suit = card. substr(2, 1);
    }
    if (suit == "D")
    {
        suit = "Diamonds";
    }
    else if (suit == "C")
    {
        suit = "Clubs";
    }
    else if (suit == "H")
    {
        suit = "Hearts";
    }
    else if (suit == "S")
    {
        suit = "Spades";
    }
    if (number == "1")
    {
        number = "Ace";
    }
    else if (number == "J")
    {
        number = "Jack";
    }
    else if (number == "Q")
    {
        number = "Queen";
    }
    else if (number == "K")
    {
        number = "King";
    }
    cout << number << " of " << suit << endl;
    
}
