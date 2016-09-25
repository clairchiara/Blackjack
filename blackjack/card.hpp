//
//  card.hpp
//  blackjack
//
//  Created by Clair Marchesani on 24/09/2016.
//  Copyright © 2016 Clair Marchesani. All rights reserved.
//

#ifndef card_hpp
#define card_hpp

#include <vector>
#include <string>
#include <stdio.h>
#include <map>

typedef unsigned int u_int;

enum Suit {
	CLUBS,
	DIAMONDS,
	HEARTS,
	SPADES
};

enum Number {
	ACE = 11,
	TWO = 2,
	THREE = 3,
	FOUR = 4,
	FIVE = 5,
	SIX = 6,
	SEVEN = 7,
	EIGHT = 8,
	NINE = 9,
	TEN = 10,
	JACK = 10,
	QUEEN = 10,
	KING = 10
};

struct Card {
	static const std::map<Suit, std::string> suitToString;
	static const std::map<Number, std::string> numberToString;
	const Suit suit;
	const Number number;
	static const std::vector<Card> allCards;
	operator std::string() const;
};

#endif /* card_hpp */
