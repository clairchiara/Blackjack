//
//  main.cpp
//  blackjack
//
//  Created by Clair Marchesani on 24/09/2016.
//  Copyright © 2016 Clair Marchesani. All rights reserved.
//

#include <iostream>
#include "game.hpp"

using std::shared_ptr;

int main(int argc, const char * argv[]) {
	shared_ptr<Game> game(new Game(10000));
	game->play();
	return 0;
}
