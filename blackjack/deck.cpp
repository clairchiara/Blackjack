//
//  deck.cpp
//  blackjack
//
//  Created by Clair Marchesani on 24/09/2016.
//  Copyright © 2016 Clair Marchesani. All rights reserved.
//

#include "deck.hpp"

const Card* Deck::hit() {
	const Card* card = cards[cards.size() - 1];
	cards.pop_back();
	return card;
}