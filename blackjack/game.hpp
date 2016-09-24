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

class Game {
private:
	std::unique_ptr<Hand> hand;
	std::unique_ptr<Deck> deck;
public:
	Game();
	void hit();
};

#endif /* game_hpp */
