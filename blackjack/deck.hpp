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

using std::uniform_int_distribution;
using std::random_device;

class Deck {
private:
	static const u_int DECK_SIZE;
	const u_int decks;
	vector<const Card*> cards;
	uniform_int_distribution<u_int> distribution;
	random_device randomDevice;
public:
	Deck();
	Deck(u_int);
	const Card* deal();
	float load() const;
};

#endif /* deck_hpp */
