//
//  Arch.h
//  catapult
//
//  Created by Sam Christian Lee on 11/18/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "Piece.h"

@interface Arch : Piece {
	Piece * rightSnappedTo;
}

@property(nonatomic, retain) Piece * rightSnappedTo;

-(b2Vec2) snapToPosition:(b2Vec2)pos;

@end
