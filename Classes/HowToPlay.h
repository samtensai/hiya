//
//  HowToPlay.h
//  catapult
//
//  Created by Sam Christian Lee on 11/18/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BaseMenu.h"

@interface HowToPlay : BaseMenu {
	
}

+(HowToPlay *)instance;

-(void)previousScreen:(id)sender;
-(void)screen2Call:(id)sender;

@end

