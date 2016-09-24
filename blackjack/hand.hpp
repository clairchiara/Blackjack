//
//  hand.hpp
//  blackjack
//
//  Created by Clair Marchesani on 24/09/2016.
//  Copyright © 2016 Clair Marchesani. All rights reserved.
//

#ifndef hand_hpp
#define hand_hpp

#include <stdio.h>
#include <vector>
#include "card.hpp"

class Hand {
private:
	std::vector<const Card*> cards;
public:
	Hand(const Card* [3]);
	unsigned int value() const;
	bool bust() const;
	void addCard(const Card*);
	void empty();
	std::vector<const Card*> getCards() const;
};

#endif /* hand_hpp */
