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
#include "hand.hpp"
#include "deck.hpp"
#include "player.hpp"

using std::endl;
using std::cin;

class Game {
private:
	unique_ptr<Deck> deck;
	unique_ptr<Player> player;
public:
	Game(const long);
	void play();
	void deal();
	void showHand() const;
	const Hand& getHand() const;
	void hit();
	void double_hit();
	void split();
};

#endif /* game_hpp */
