//
//  BaseMenu.h
//  catapult
//
//  Created by Sam Christian Lee on 11/18/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "Box2D.h" 

@interface BaseMenu : CCLayer {
}

-(CCMenuItemSprite*)makeButtonWithString:(NSString*)s atPosition:(CGPoint)p withSelector:(SEL)selector;
-(CCMenuItemSprite*)makeButtonFromRect:(CGRect)rect atPosition:(CGPoint)p withSelector:(SEL)selector;
-(void)toggled:(id)sender;

@end