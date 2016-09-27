//
//  player.hpp
//  blackjack
//
//  Created by Clair Marchesani on 27/09/2016.
//  Copyright © 2016 Clair Marchesani. All rights reserved.
//

#ifndef player_hpp
#define player_hpp

#include <stdio.h>
#include "hand.hpp"

using std::unique_ptr;
using std::cout;

class Player {
private:
	unique_ptr<Hand> hand;
	long cash;
public:
	Player(const Hand, const long);
	void showHand() const;
	const Hand& getHand() const;
	void addCard(const Card*);
	void emptyHand();
	long getCash() const;
	bool addCash(const long);
};

#endif /* player_hpp */
