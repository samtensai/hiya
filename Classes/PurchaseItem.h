//
//  PurchaseItem.h
//  catapult
//
//  Created by Sam Christian Lee on 11/18/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "ButtonItem.h"

@class Piece;

typedef enum itemType {
	repair = 0,
	upgrade = 1
} ButtonType;

@interface PurchaseItem : ButtonItem {
	Piece* selectedPiece; 
	CCSprite* coin;
	ButtonType type;
    BOOL isObservingSelected;
}

@property(nonatomic, retain) Piece * selectedPiece;
@property(nonatomic, retain) CCLabelTTF* price;

-(id) initWithPiece:(Piece*)p;
-(void) updatePrice;

@end
