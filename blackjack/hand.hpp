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
#include <set>
#include <array>
#include "card.hpp"

using std::array;
using std::ostream;
using std::set;

enum Action {
	HIT,
	DOUBLE,
	SPLIT,
	STAND
};

class Hand {
private:
	vector<const Card*> cards;
	bool doubled;
public:
	Hand(const array<const Card*, 2>&);
	u_int value() const;
	bool bust() const;
	void addCard(const Card*);
	void addDCardAndDouble(const Card*);
	void empty();
	vector<const Card*> getCards() const;
	set<const Action> getAllowedActions() const;
	operator string() const;
};

ostream& operator<<(ostream&, const Hand&);

#endif /* hand_hpp */
