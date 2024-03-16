#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "card.h"

class Player {
private:
    std::string name;
    std::vector<Card> hand;
public:
    Player(const std::string& name);
    std::string getName() const;
    void addCard(const Card& card);
    std::vector<Card> getHand() const;
};

#endif // PLAYER_H