
#include "main.h"

using namespace std;

Game game;

int main() {
    cout << "Welcome to Hanabi Simulator" << endl;
    initalizeGame();
    initalizeCards();
    shuffleDeck();
    //check cards
    for (int i = 0; i < game.deck.size(); i++) {
        cout << game.deck[i].getColor() << " " << game.deck[i].getValue() << endl;
    }

    cout << game.deck.size() << endl;
    return 0;
}

void shuffleDeck() {
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(game.deck.begin(), game.deck.end(), g);
}

void initalizeGame() {
    game.players.push_back(Player("Player 1"));
    game.players.push_back(Player("Player 2"));
    game.players.push_back(Player("Player 3"));
    game.players.push_back(Player("Player 4"));
}

void initalizeCards() {
    for (int i = 0; i < 5; i++) {
        //initalize ones
        for (int j = 0;j < 3;j++) {
            game.deck.push_back(Card(static_cast<Card::Color>(i), 1));
        }
        //initalize twos/threes/fours
        for (int j = 0;j < 2;j++) {
            game.deck.push_back(Card(static_cast<Card::Color>(i), 2));
            game.deck.push_back(Card(static_cast<Card::Color>(i), 3));
            game.deck.push_back(Card(static_cast<Card::Color>(i), 4));
        }
        //initalize fives
        game.deck.push_back(Card(static_cast<Card::Color>(i), 5));
    }
}
