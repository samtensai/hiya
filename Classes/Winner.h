//
//  Winner.h
//  catapult
//
//  Created by Sam Christian Lee on 11/18/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BaseMenu.h"

@interface Winner : BaseMenu {
}

-(void)homeScreen:(id)sender;
-(void)setGameTime:(float)gt;
-(void)setGameMode;

@end
