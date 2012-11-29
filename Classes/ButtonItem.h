//
//  ButtonItem.h
//  catapult
//
//  Created by Sam Christian Lee on 11/18/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HUDItem.h"

@interface ButtonItem : HUDItem {
	SEL func;
	CCLabelTTF * buttonText;
}

@property(nonatomic) SEL func;
@property(nonatomic, retain) CCLabelTTF* buttonText;

-(void) postInitWithText:(NSString *)text;
@end
