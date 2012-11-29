//
//  StatusItem.h
//  catapult
//
//  Created by Sam Christian Lee on 11/18/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HUDItem.h"

@class Piece;

@interface StatusItem : HUDItem {
	Piece* selectedPiece; 
	CCSprite* healthBarContainer;
	CCSprite* healthBar;
	float fullHealthSize, fullHealthCenter, zeroHPPosition;
}

@property(nonatomic, retain) Piece * selectedPiece;

-(void) updateHPBar;
-(void) postInitWithPiece:(Piece*)p;
-(void) setBarPositions;
@end

