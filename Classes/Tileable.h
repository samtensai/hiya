//
//  Tileable.h
//  catapult
//
//  Created by Sam Christian Lee on 11/10/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Piece.h"

@interface Tileable : Piece {
	float parallaxFactor;
}

@property (nonatomic) float parallaxFactor;
@property (nonatomic, retain) CCSprite* imageA;
@property (nonatomic, retain) CCSprite* imageB;

- (int) cameraOutOfBounds:(CGPoint)pos;
- (void) positionForCameraLoc:(CGPoint)loc;
- (void) repositionSprite:(CGPoint)pos result:(int)res;

@end
