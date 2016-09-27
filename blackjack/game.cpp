//
//  game.cpp
//  blackjack
//
//  Created by Clair Marchesani on 24/09/2016.
//  Copyright © 2016 Clair Marchesani. All rights reserved.
//

#include "game.hpp"

Game::Game(const long startingCash) : deck(new Deck()) {
	Hand hand{[this] {
		array<const Card*, 2> initialCards;
		for (int i = 0; i < 2; i++) initialCards[i] = deck->deal();
		return initialCards;
	}()};
	player = unique_ptr<Player>(new Player(hand, startingCash));
};

void Game::deal() {
	player->addCard(deck->deal());
};

void Game::showHand() const {
	player->showHand();
};

void Game::hit() {
	deal();
};

void Game::double_hit() {
	deal();
};

const Hand& Game::getHand() const {
	return player->getHand();
};

void Game::play() {
	showHand();
	cout << endl;
	while (not getHand().bust()) {
		cout << "Action? ";
		unique_ptr<char> response(new char);
		cin.read(response.get(), 1);
		switch (*response) {
			case 'h':
				hit();
				showHand();
				cout << endl;
				break;
			case 'd':
				double_hit();
				showHand();
				cout << endl;
				return;
			case 's':
				return;
			default:
				return;
		}
	}
	return;
};