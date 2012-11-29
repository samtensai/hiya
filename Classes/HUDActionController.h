//
//  HUDActionController.h
//  catapult
//
//  Created by Sam Christian Lee on 11/18/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class HUD;

@interface HUDActionController : NSObject {
	HUD *hud;
}

@property(nonatomic, retain)HUD *hud;

+(HUDActionController *) instance;

-(void) showBuildMenu;
-(void) showMainMenu;
-(void) previousConstructionItems;
-(void) nextConstructionItems;
-(void) upgradePiece;
-(void) repairPiece;
-(void) showSettings;
-(void) hideSettings;
-(void) clear;

@end