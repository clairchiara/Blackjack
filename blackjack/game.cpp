//
//  game.cpp
//  blackjack
//
//  Created by Clair Marchesani on 24/09/2016.
//  Copyright © 2016 Clair Marchesani. All rights reserved.
//

#include "game.hpp"

Game::Game() : deck(new Deck()), hand(new Hand([this] {
	std::array<const Card*, 2> initialCards;
	for (int i = 0; i < 2; i++) initialCards[i] = deck->deal();
	return initialCards;
}())) {};

void Game::deal() {
	hand->addCard(deck->deal());
};

void Game::showHand() const {
	std::cout << *hand;
};

void Game::hit() {
	deal();
};

const Hand& Game::getHand() const {
	return *hand;
};