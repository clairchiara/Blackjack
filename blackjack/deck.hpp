//
//  deck.hpp
//  blackjack
//
//  Created by Clair Marchesani on 24/09/2016.
//  Copyright © 2016 Clair Marchesani. All rights reserved.
//

#ifndef deck_hpp
#define deck_hpp

#include <stdio.h>
#include <vector>
#include <random>
#include "card.hpp"

class Deck {
private:
	static const u_int DECK_SIZE;
	const u_int decks;
	std::vector<const Card*> cards;
	std::uniform_int_distribution<u_int> distribution;
	std::random_device randomDevice;
public:
	Deck();
	Deck(u_int);
	const Card* deal();
	float load() const;
};

#endif /* deck_hpp */
