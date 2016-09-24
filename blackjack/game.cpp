//
//  game.cpp
//  blackjack
//
//  Created by Clair Marchesani on 24/09/2016.
//  Copyright © 2016 Clair Marchesani. All rights reserved.
//

#include "game.hpp"

Game::Game() : deck(new Deck()), hand(new Hand(deck->hit(), deck->hit(), deck->hit())) {};

void Game::hit() {
	hand->addCard(deck->hit());
};