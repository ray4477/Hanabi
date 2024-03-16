#ifndef CARD_H
#define CARD_h

#include <string>

/**
 * @brief A class representing a card in the game Hanabi
 * Color: The color of the card
 * Value: The value of the card
 * playerValue: Arbitrary value for player to use as they don't know card value
*/
class Card {
public:
    enum Color{
        RED,
        YELLOW,
        GREEN,
        BLUE,
        WHITE
    } ;

    Color color;
    int value;
    int playerValue;

    Card(Color color, int value);
    std::string getColor() const;
    int getValue() const;
};

#endif