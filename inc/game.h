#ifndef GAME_H
#define GAME_H

#include <string>
#include <vector>
#include <player.h>

class Game {
public:
    std::vector<Player> players;
    std::vector<Card> deck;
    Game(const std::vector<Player>& players);
    Game();
};

#endif