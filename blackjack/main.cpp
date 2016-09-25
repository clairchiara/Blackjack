//
//  main.cpp
//  blackjack
//
//  Created by Clair Marchesani on 24/09/2016.
//  Copyright © 2016 Clair Marchesani. All rights reserved.
//

#include <iostream>
#include "game.hpp"

int main(int argc, const char * argv[]) {
	Game game;
	game.showHand();
	std::cout << std::endl;
	while (not game.getHand().bust()) {
		std::cout << "Hit? ";
		std::string response;
		std::cin >> response;
		if (response.at(0) == 'y') {
			game.hit();
			game.showHand();
			std::cout << std::endl;
		} else return 0;
	}
	return 0;
}
