//
//  CHTableButton.h
//  catapult
//
//  Created by Sam Christian Lee on 11/18/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "cocos2d.h"

@class CHTable, GameData;

@interface CHTableButton : CCLayer {
	CHTable* table;
	CCMenuItemSprite* item;
	CCLabelTTF* gameName;
	CCLabelTTF* players;
	CCMenu* menu;
	GameData* gameDatum;
	CCSprite *button;
	CCSprite *selectedButton;
	CCSprite *manager;
}

@property(nonatomic, retain)GameData* gameDatum;
@property(nonatomic, retain)CHTable* table;
@property(nonatomic, retain)CCMenuItemSprite* item;


+(id) tableButtonWithTextureRect:(CGRect)rect gameData:(GameData*)data table:(CHTable*)t;
-(id) initWithTextureRect:(CGRect)rect gameData:(GameData*)data table:(CHTable*)t;
-(void) setSelected:(BOOL)b;
-(void) selectedGame:(id)sender;
-(void) setPosition:(CGPoint)p;

@end
