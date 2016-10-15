//
//  card.cpp
//  blackjack
//
//  Created by Clair Marchesani on 24/09/2016.
//  Copyright © 2016 Clair Marchesani. All rights reserved.
//

#include "card.hpp"

const map<const Suit, const string> Card::suitToString{
	{CLUBS, "♣"},
	{DIAMONDS, "♦"},
	{HEARTS, "♥"},
	{SPADES, "♠"}
};

const map<const Number, const string> Card::numberToString{
	{ACE, "A"},
	{TWO, "2"},
	{THREE, "3"},
	{FOUR, "4"},
	{FIVE, "5"},
	{SIX, "6"},
	{SEVEN, "7"},
	{EIGHT, "8"},
	{NINE, "9"},
	{TEN, "10"},
	{JACK, "J"},
	{QUEEN, "Q"},
	{KING, "K"},
};

const vector<const Card> Card::allCards{
	Card{CLUBS, ACE},
	Card{CLUBS, TWO},
	Card{CLUBS, THREE},
	Card{CLUBS, FOUR},
	Card{CLUBS, FIVE},
	Card{CLUBS, SIX},
	Card{CLUBS, SEVEN},
	Card{CLUBS, EIGHT},
	Card{CLUBS, NINE},
	Card{CLUBS, TEN},
	Card{CLUBS, JACK},
	Card{CLUBS, QUEEN},
	Card{CLUBS, KING},
	Card{DIAMONDS, ACE},
	Card{DIAMONDS, TWO},
	Card{DIAMONDS, THREE},
	Card{DIAMONDS, FOUR},
	Card{DIAMONDS, FIVE},
	Card{DIAMONDS, SIX},
	Card{DIAMONDS, SEVEN},
	Card{DIAMONDS, EIGHT},
	Card{DIAMONDS, NINE},
	Card{DIAMONDS, TEN},
	Card{DIAMONDS, JACK},
	Card{DIAMONDS, QUEEN},
	Card{DIAMONDS, KING},
	Card{HEARTS, ACE},
	Card{HEARTS, TWO},
	Card{HEARTS, THREE},
	Card{HEARTS, FOUR},
	Card{HEARTS, FIVE},
	Card{HEARTS, SIX},
	Card{HEARTS, SEVEN},
	Card{HEARTS, EIGHT},
	Card{HEARTS, NINE},
	Card{HEARTS, TEN},
	Card{HEARTS, JACK},
	Card{HEARTS, QUEEN},
	Card{HEARTS, KING},
	Card{SPADES, ACE},
	Card{SPADES, TWO},
	Card{SPADES, THREE},
	Card{SPADES, FOUR},
	Card{SPADES, FIVE},
	Card{SPADES, SIX},
	Card{SPADES, SEVEN},
	Card{SPADES, EIGHT},
	Card{SPADES, NINE},
	Card{SPADES, TEN},
	Card{SPADES, JACK},
	Card{SPADES, QUEEN},
	Card{SPADES, KING},
};

Card::operator string() const {
	return numberToString.at(number) + suitToString.at(suit);
};
