//
//  SinglePlayer.h
//  catapult
//
//  Created by Sam Christian Lee on 11/18/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseMenu.h"

@class CHToggle;

@interface SinglePlayer : BaseMenu {
	CCSprite* comboSprite;
	NSMutableArray* toggles;
	
	CHToggle* environment;
	CHToggle* opponents;
	CHToggle* difficulties;
}

+(SinglePlayer *) instance;

-(void)startGame: (id)sender;
-(void)previousScreen:(id)sender;

@end