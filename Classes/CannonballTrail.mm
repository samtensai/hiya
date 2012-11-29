//
//  CannonballTrail.mm
//  catapult
//
//  Created by Sam Christian Lee on 11/17/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import "CannonBallTrail.h"

@implementation CannonBallTrail
-(id) init {
	return [self initWithTotalParticles:50 color:(ccColor3B){255, 255, 255}];
}

-(id) initWithTotalParticles:(int)p color:(ccColor3B)color {
	if( !(self=[super initWithTotalParticles:p]) )
		return nil;
	
	// duration
    duration = kCCParticleDurationInfinity;
    self.startSize = 40.0f;
	self.startSizeVar = 10.0f;
	
	
	// additive
	self.blendAdditive = YES;
	
	return self;
}

@end
