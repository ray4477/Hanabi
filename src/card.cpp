#include "card.h"

Card::Card(Color color, int value) : color(color), value(value) {}

std::string Card::getColor() const {
    switch (color) {
        case RED:
            return "Red";
        case YELLOW:
            return "Yellow";
        case GREEN:
            return "Green";
        case BLUE:
            return "Blue";
        case WHITE:
            return "White";
    }
    return "Invalid color";
}

int Card::getValue() const {
    return value;
}

