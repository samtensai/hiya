//
//  GameSettings.h
//  catapult
//
//  Created by Sam Christian Lee on 11/10/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "Box2D.h" 

typedef enum tileset {
	britany,
	saxony,
	tuscany
} tileset;

typedef enum gametype {
	easy,
	medium,
	hard
} gametype;

@class PlayerArea;
@interface GameSettings : NSObject {
	uint playerID;
	uint numPlayers;
	gametype type;
	tileset backgroundType;
	uint territoryID;
}

@property(nonatomic) BOOL isCampaign;
@property(nonatomic) BOOL followShot; 
@property(nonatomic) BOOL hasSound; 
@property(nonatomic) uint playerID;
@property(nonatomic) tileset backgroundType;
@property(nonatomic) gametype type;
@property(nonatomic) uint numPlayers;
@property(nonatomic) uint territoryID;

+(GameSettings *) instance;
-(void)resetGameProperties;
-(ccColor3B) getColorForPlayer:(PlayerArea*)pid;
-(ccColor3B) getColorForPlayerByID:(int)pid;
-(ccColor3B) getColorForCurrentPlayer;
-(NSString*) getBackgroundFileName:(NSString*)fname;
-(int) startingGold;

@end
