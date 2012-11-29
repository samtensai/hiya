//
//  GoldItem.h
//  catapult
//
//  Created by Sam Christian Lee on 11/18/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "Box2D.h"
#import "HUDItem.h"
#import "PlayerArea.h"

@class AtlasSprite;

@interface GoldItem : HUDItem {
	CCLabelTTF* amount;
    BOOL isObserving;
}

@property(nonatomic, retain) PlayerArea* observedArea;

-(void) updateGold;

@property(nonatomic, retain) CCLabelTTF* amount;

@end