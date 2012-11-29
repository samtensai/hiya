//
//  City.h
//  catapult
//
//  Created by Sam Christian Lee on 11/16/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Piece.h"

@interface City : Piece {
	CCSprite* colorSprite;
	CCSprite* colorSpriteBack;
}

@property(nonatomic, retain) CCSprite* colorSpriteBack;
@property(nonatomic, retain) CCSprite* colorSprite;

- (id) initWithCoords:(CGPoint)p owner:(PlayerArea*)o colorVal:(ccColor3B)color;
- (void) updateSprites;

@end
