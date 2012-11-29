//
//  BuildItem.h
//  catapult
//
//  Created by Sam Christian Lee on 11/18/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "HUDItem.h"

@interface BuildItem : HUDItem {
	Class creationClass; 
	CCSprite* coin;
	int goldPrice;
}

@property(nonatomic, assign) Class creationClass;
@property(nonatomic, retain) CCLabelTTF* price;

-(id) initWithPrice:(int)p;
-(void) postInit;
@end
