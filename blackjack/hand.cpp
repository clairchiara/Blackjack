//
//  hand.cpp
//  blackjack
//
//  Created by Clair Marchesani on 24/09/2016.
//  Copyright © 2016 Clair Marchesani. All rights reserved.
//

#include "hand.hpp"

Hand::Hand(const std::array<const Card*, 3>& initialCards) {
	addCard(initialCards[0]);
	addCard(initialCards[1]);
	addCard(initialCards[2]);
};

u_int Hand::value() const {
	u_int aces{0};
	u_int sum{0};
	for (const Card* const card : cards) {
		if (card->number == ACE) aces++;
		sum += card->number;
		if (sum > 21) {
			while (aces > 0 and sum > 21) {
				aces--;
				sum -= 10;
			}
		}
	}
	return sum;
};

bool Hand::bust() const {
	if (value() > 21) return true;
	return false;
};

void Hand::addCard(const Card* card) {
	cards.push_back(card);
};

void Hand::empty() {
	cards.clear();
};

std::vector<const Card*> Hand::getCards() const {
	return cards;
};