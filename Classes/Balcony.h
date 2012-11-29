//
//  Balcony.h
//  Hiya
//
//  Created by Sam Christian Lee on 11/24/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Piece.h"

@interface Balcony : Piece {
	
}

-(b2Vec2) snapToPosition:(b2Vec2)pos;

@end
