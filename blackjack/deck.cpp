//
//  deck.cpp
//  blackjack
//
//  Created by Clair Marchesani on 24/09/2016.
//  Copyright © 2016 Clair Marchesani. All rights reserved.
//

#include "deck.hpp"

Deck::Deck() : distribution(0, 51) {
	// Is created shuffled
	cards.resize(52);
	for (u_int i = 0; i < 52; i++) {
		u_int where;
		do {
			where = distribution(randomDevice);
		} while (cards[where] != nullptr);
		cards[where] = &Card::allCards[i];
	}
}

const Card* Deck::hit() {
	const Card* card = cards[cards.size() - 1];
	cards.pop_back();
	return card;
}