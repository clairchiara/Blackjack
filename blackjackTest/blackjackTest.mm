//
//  blackjackTest.mm
//  blackjackTest
//
//  Created by Clair Marchesani on 08/10/2016.
//  Copyright © 2016 Clair Marchesani. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "hand.hpp"

@interface blackjackTest : XCTestCase

@end

@implementation blackjackTest

- (void)setUp {
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testHandBust {
	const Card king{HEARTS, KING};
	const Card queen{SPADES, QUEEN};
	const Card five{HEARTS, FIVE};
	const Card ace{DIAMONDS, ACE};
	Hand* hand = new Hand(std::array<const Card*, 2>{{&king, &queen}});
	hand->addCard(&five);
	XCTAssert(hand->bust());
	delete hand;
	hand = new Hand(std::array<const Card*, 2>{{&king, &queen}});
	hand->addCard(&ace);
	XCTAssert(not hand->bust());
	delete hand;
}

@end
