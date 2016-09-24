//
//  deck.cpp
//  blackjack
//
//  Created by Clair Marchesani on 24/09/2016.
//  Copyright © 2016 Clair Marchesani. All rights reserved.
//

#include <random>
#include "deck.hpp"

Deck::Deck() {
	// Is created shuffled
	std::uniform_int_distribution<unsigned int> distribution(0, 51);
	std::default_random_engine randomEngine;
	cards.resize(52);
	for (unsigned int i = 0; i < 52; i++) {
		unsigned int where;
		do {
			where = distribution(randomEngine);
		} while (cards[where] == nullptr);
		cards[where] = &Card::allCards[i];
	}
}

const Card* Deck::hit() {
	const Card* card = cards[cards.size() - 1];
	cards.pop_back();
	return card;
}