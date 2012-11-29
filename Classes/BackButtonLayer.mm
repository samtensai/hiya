//
//  BackButtonLayer.mm
//  catapult
//
//  Created by Sam Christian Lee on 11/18/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//
#import "BackButtonLayer.h"
#import "MainMenu.h"


@implementation BackButtonLayer
-(id)init
{
	if ((self = [super init])) {
		[self makeButtonWithString:NSLocalizedString(@"Back", @"Just a comment ...") 
						atPosition:ccp(150,115) 
					  withSelector:@selector(back:)];
	}
	return self;
}

-(void)back: (id) sender {
	MainMenu * main = [MainMenu instance];
	[main removeAllChildrenWithCleanup:YES];
	[main addChild:[MainMenuLayer node]];
}
@end

