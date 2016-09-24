//
//  game.cpp
//  blackjack
//
//  Created by Clair Marchesani on 24/09/2016.
//  Copyright © 2016 Clair Marchesani. All rights reserved.
//

#include "game.hpp"

Game::Game() : deck(new Deck()), hand(new Hand([this] {
	std::array<const Card*, 3> initialCards;
	for (int i = 0; i < 3; i++) initialCards[i] = deck->hit();
	return initialCards;
}())) {};

void Game::hit() {
	hand->addCard(deck->hit());
};