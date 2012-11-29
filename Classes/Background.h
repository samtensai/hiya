//
//  Background.h
//  catapult
//
//  Created by Sam Christian Lee on 11/16/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "Piece.h"
#import "Tileable.h"

@interface Background : Tileable 

- (id)initWithLeftImage:(NSString *)lImg 
			 rightImage:(NSString *)rImg
		 imageDimension:(CGPoint)dim
				  layer:(CCLayer*)parent 
				  index:(int)index 
		 parallaxFactor:(float)pf;
@end
