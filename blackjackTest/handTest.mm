//
//  handTest.m
//  blackjack
//
//  Created by Clair Marchesani on 08/10/2016.
//  Copyright © 2016 Clair Marchesani. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "hand.hpp"

@interface handTest : XCTestCase {
	const Card* king;
	const Card* queen;
	const Card* five;
	const Card* ace;
	Hand* hand;
}

@end

@implementation handTest

- (void)setUp {
	[super setUp];
	king = new Card({HEARTS, KING});
	queen = new Card({SPADES, QUEEN});
	five = new Card({HEARTS, FIVE});
	ace = new Card({DIAMONDS, ACE});
}

- (void)tearDown {
	// Put teardown code here. This method is called after the invocation of each test method in the class.
	[super tearDown];
}

- (void)testHandBust {
	hand = new Hand(std::array<const Card*, 2>{{king, queen}});
	hand->addCard(five);
	XCTAssert(hand->bust());
	hand = new Hand(std::array<const Card*, 2>{{king, queen}});
	hand->addCard(ace);
	XCTAssert(not hand->bust());
}

- (void)testAddCard {
	hand = new Hand(std::array<const Card*, 2>{{king, queen}});
	XCTAssert(hand->getCards().size() == 2);
	hand->addCard(five);
	XCTAssert(hand->getCards().size() == 3);
}

- (void)testEmpty {
	hand = new Hand(std::array<const Card*, 2>{{king, queen}});
	hand->empty();
	XCTAssert(hand->getCards().size() == 0);
}

@end
