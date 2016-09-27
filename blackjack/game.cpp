//
//  game.cpp
//  blackjack
//
//  Created by Clair Marchesani on 24/09/2016.
//  Copyright © 2016 Clair Marchesani. All rights reserved.
//

#include "game.hpp"
#include <exception>

Game::Game(const long startingCash) : deck(new Deck()), dealerHand(new Hand([this] {
	array<const Card*, 2> initialCards;
	for (int i = 0; i < 2; i++) initialCards[i] = deck->deal();
	return initialCards;
}())) {
	Hand hand{[this] {
		array<const Card*, 2> initialCards;
		for (int i = 0; i < 2; i++) initialCards[i] = deck->deal();
		return initialCards;
	}()};
	player = unique_ptr<Player>(new Player(hand, startingCash));
};

void Game::deal(const Person person) {
	if (person == PLAYER) player->addCard(deck->deal());
	else if (person == DEALER) dealerHand->addCard(deck->deal());
};

void Game::showHand(const Person person) const {
	if (person == PLAYER) player->showHand();
	else if (person == DEALER) cout << *dealerHand;
};

void Game::hit(const Person person) {
	deal(person);
};

void Game::double_hit() {
	deal(PLAYER);
};

const Hand& Game::getHand(const Person person) const {
	if (person == PLAYER) return player->getHand();
	else if (person == DEALER) return *dealerHand;
	else throw new std::exception();
};

void Game::play() {
	cout << "Your hand ";
	showHand(PLAYER);
	cout << endl << "Dealer's hand ";
	showHand(DEALER);
	cout << endl;
	bool end_loop{false};
	while ((not getHand(PLAYER).bust()) and (not end_loop) and getHand(PLAYER).value() != 21) {
		cout << "Action? ";
		unique_ptr<char> response(new char);
		cin.read(response.get(), 1);
		switch (*response) {
			case 'h':
				hit(PLAYER);
				showHand(PLAYER);
				cout << endl;
				break;
			case 'd':
				double_hit();
				showHand(PLAYER);
				cout << endl;
				end_loop = true;
				break;
			case 's': // TODO
				end_loop = true;
				break;
			default: // TODO
				end_loop = true;
				break;
		}
		cin.clear();
		cin.ignore();
	}
	cout << "Dealer plays..." << endl;
	while (not getHand(DEALER).bust() and getHand(DEALER).value() < 17 and getHand(DEALER).value() != 21) {
		hit(DEALER);
		showHand(DEALER);
		cout << endl;
	}
	return;
};