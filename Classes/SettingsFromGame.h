//
//  SettingsFromGame.h
//  catapult
//
//  Created by Sam Christian Lee on 11/18/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BaseMenu.h"

@class CHToggle;

@interface SettingsFromGame : BaseMenu {
	CCSprite* navBack;
	CCMenuItemFont* leaveGame;
	CHToggle* followShot;
	CHToggle* soundState;
}

-(void) closeWindow:(id)sender;
-(void) leaveGame:(id)sender;
-(void) setupFollowShot;
-(void) setupSound;

@end
