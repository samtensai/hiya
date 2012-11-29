//
//  CannonBall.h
//  catapult
//
//  Created by Sam Christian Lee on 11/17/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Projectile.h"
#import "cocos2d.h"
#import "Box2D.h"

@interface CannonBall : Projectile {
	
}

-(id) initWithWorld:(b2World*)w coords:(CGPoint)p level:(int)l shooter:(PlayerArea*)s;
@end