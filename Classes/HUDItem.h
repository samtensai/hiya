//
//  HUDItem.h
//  catapult
//
//  Created by Sam Christian Lee on 11/18/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "Box2D.h"

@class AtlasSprite;

@interface HUDItem : NSObject {
	int leftBound; 
	int rightBound;
	CCSprite *img;
	CCSprite *swingImg;
	NSString *managerName;
	
}

@property(nonatomic, retain) NSString *imageName;
@property(nonatomic, retain) CCSprite *img;
@property(nonatomic, retain) CCSprite *swingImg;
@property(nonatomic) int leftBound;
@property(nonatomic) int rightBound;


-(BOOL) handleDragExit:(CGPoint)p;
-(BOOL) handleInitialTouch:(CGPoint)p;
-(void) move:(CGPoint)p;
-(void) postInit;
-(void) hideWithAnimation:(BOOL)animation;
-(void) show;

@end
