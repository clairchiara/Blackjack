//
//  deck.cpp
//  blackjack
//
//  Created by Clair Marchesani on 24/09/2016.
//  Copyright © 2016 Clair Marchesani. All rights reserved.
//

#include "deck.hpp"

const u_int Deck::DECK_SIZE = 52;

Deck::Deck() : Deck(1) {}

Deck::Deck(u_int decks) : distribution(0, DECK_SIZE * decks - 1) {
	if (decks > 6) decks = 6;
	// Is created shuffled
	cards.resize(DECK_SIZE * decks);
	for (u_int i = 0; i < decks; i++) {
		for (u_int j = 0; j < Card::allCards.size(); j++) {
			u_int where;
			do {
				where = distribution(randomDevice);
			} while (cards[where] != nullptr);
			cards[where] = &Card::allCards[j];
		}
	}
}

const Card* Deck::hit() {
	const Card* card = cards[cards.size() - 1];
	cards.pop_back();
	return card;
}