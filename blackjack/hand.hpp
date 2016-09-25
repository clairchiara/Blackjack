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
#include <iostream>
#include <vector>
#include <string>
#include <array>
#include "card.hpp"

class Hand {
private:
	std::vector<const Card*> cards;
public:
	Hand(const std::array<const Card*, 2>&);
	u_int value() const;
	bool bust() const;
	void addCard(const Card*);
	void empty();
	std::vector<const Card*> getCards() const;
	operator std::string() const;
};

std::ostream& operator<<(std::ostream&, Hand const&);

#endif /* hand_hpp */
