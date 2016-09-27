//
//  player.cpp
//  blackjack
//
//  Created by Clair Marchesani on 27/09/2016.
//  Copyright © 2016 Clair Marchesani. All rights reserved.
//

#include "player.hpp"

Player::Player(const Hand startingHand, const long startingCash) :
	hand(new Hand(startingHand)), cash(startingCash)
	{};

void Player::showHand() const {
	cout << *hand;
};
const Hand& Player::getHand() const {
	return *hand;
};

long Player::getCash() const {
	return cash;
};

bool Player::addCash(const long addend) {
	cash += addend;
	return cash > 0;
};

void Player::addCard(const Card* card) {
	hand->addCard(card);
};

void Player::emptyHand() {
	hand->empty();
};