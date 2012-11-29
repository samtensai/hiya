//
//  MainMenu.h
//  catapult
//
//  Created by Sam Christian Lee on 11/18/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import "BaseMenu.h"
#import "SimpleAudioEngine.h"

@interface MainMenu : CCScene {
}

@property(nonatomic,retain) CCSprite* bg;

+(MainMenu *) instance;
+(void) resetInstance;

@end

@interface MainMenuLayer : BaseMenu { 
	CCSprite* bg;
}

-(void)singlePlayer: (id)sender;
-(void)settings: (id)sender;
-(void)howToPlay: (id)sender;	
-(void)campaign: (id)sender;

@end