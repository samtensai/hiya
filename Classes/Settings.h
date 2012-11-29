//
//  Settings.h
//  catapult
//
//  Created by Sam Christian Lee on 11/18/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BaseMenu.h"

@class CHToggle;

@interface Settings : BaseMenu <UITextFieldDelegate> {
	CCSprite *comboSprite;
	NSMutableArray* toggles;
	CHToggle *soundState;
    CHToggle* followShot;
}

+(id) settingsFile;
+(BOOL) settingsFileExists;
+(NSMutableDictionary*) settingsPlistDict;
+(void) saveSettings:(NSDictionary*)settings;

-(BOOL)saveSettings:(id)sender;
-(void)previousScreen:(id)sender;
-(void) setupFollowShot;
-(void) resetCampaign;

@end