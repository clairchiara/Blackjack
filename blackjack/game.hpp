//
//  game.hpp
//  blackjack
//
//  Created by Clair Marchesani on 24/09/2016.
//  Copyright © 2016 Clair Marchesani. All rights reserved.
//

#ifndef game_hpp
#define game_hpp

#include <stdio.h>
#include <memory>
#include <set>
#include "hand.hpp"
#include "deck.hpp"
#include "player.hpp"

using std::endl;
using std::cin;

enum Person {
	PLAYER,
	DEALER
};

class Game {
private:
	unique_ptr<Deck> deck;
	unique_ptr<Hand> dealerHand;
	unique_ptr<Player> player;
	inline set<Action> allowedActions() const;
public:
	Game(const long);
	set<Action> action(Action);
	void play();
	void deal(const Person);
	void showHand(const Person) const;
	const Hand& getHand(const Person) const;
	void hit(const Person);
	void double_hit();
	void split();
};

#endif /* game_hpp */
