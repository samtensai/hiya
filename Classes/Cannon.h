//
//  Cannon.h
//  catapult
//
//  Created by Sam Christian Lee on 11/18/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Weapon.h"
#import "SimpleAudioEngine.h"

@interface Cannon : Weapon 

-(id) initWithWorld:(b2World*)w coords:(CGPoint)p;
-(void) moveObject:(CGPoint)touch;
-(BOOL) shootFromAICannon:(CGPoint)touch;

@end
