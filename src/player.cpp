#include "player.h"

Player::Player(const std::string& name) : name(name) {

}

std::string Player::getName() const {
    return name;
}

std::vector<Card> Player::getHand() const {
    return hand;
}

void Player::addCard(const Card& card) {
    hand.push_back(card);
}