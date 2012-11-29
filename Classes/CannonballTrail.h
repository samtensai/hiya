//
//  CannonballTrail.h
//  catapult
//
//  Created by Sam Christian Lee on 11/17/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface CannonBallTrail : CCParticleSmoke {
	
}

-(id) initWithTotalParticles:(int)p color:(ccColor3B)color;

@end
