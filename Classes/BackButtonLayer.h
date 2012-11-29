//
//  BackButtonLayer.h
//  catapult
//
//  Created by Sam Christian Lee on 11/18/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//


#import "BaseMenu.h"


@interface BackButtonLayer : BaseMenu {
	CCSprite * bg;
}
-(void)back: (id) sender;
@end