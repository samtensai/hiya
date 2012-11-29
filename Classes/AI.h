//
//  AI.h
//  catapult
//
//  Created by Sam Christian Lee on 11/16/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PlayerArea, Weapon;

@interface AI : NSObject {
	PlayerArea* playerArea;
	BOOL anyCannon;
	BOOL anyCatapult;
	BOOL cannonPicked;
	UIImageView * animationArea;
}

+(id)aiWithPlayer:(PlayerArea*)p;
-(id)initWithPlayer:(PlayerArea*)p;
-(void)readyToFire:(Weapon*)w;
-(void)randomizeShot:(float*)f by:(int)variation;

+(float)getCatapultForce;


@end
