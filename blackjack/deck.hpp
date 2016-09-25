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
	std::vector<const Card*> cards;
	std::uniform_int_distribution<u_int> distribution;
	std::default_random_engine randomEngine;
public:
	Deck();
	const Card* hit();
};

#endif /* deck_hpp */
