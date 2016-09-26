//
//  main.cpp
//  blackjack
//
//  Created by Clair Marchesani on 24/09/2016.
//  Copyright © 2016 Clair Marchesani. All rights reserved.
//

#include <iostream>
#include "game.hpp"

using std::endl;
using std::cin;

int main(int argc, const char * argv[]) {
	Game game;
	game.showHand();
	cout << endl;
	while (not game.getHand().bust()) {
		cout << "Action? ";
		unique_ptr<char> response(new char);
		cin.read(response.get(), 1);
		switch (*response) {
			case 'y':
				game.hit();
				game.showHand();
				cout << endl;
			break;
			case 'd':
				game.double_hit();
				game.showHand();
				cout << endl;
				return 0;
			case 's':
				return 0;
			default:
				return 0;
		}
	}
	return 0;
}
