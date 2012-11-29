//
//  HUDSelectedMenu.mm
//  catapult
//
//  Created by Sam Christian Lee on 11/18/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import "HUDSelectedMenu.h"
#import "StatusItem.h"
#import "HUDItem.h"

@implementation HUDSelectedMenu

-(void) clearItems {
	
	self.items = [NSMutableArray array];
	extremeRight = ICON_SPACING;
	self.selected = nil;
}

-(void) hideAll {
	for (HUDItem *item in self.items) {
		[item hideWithAnimation:YES];
	}
}

-(StatusItem*) getSelectedItem {
	for(HUDItem* item in self.items)
		if([item isKindOfClass:[StatusItem class]])
			return (StatusItem*)item;
	
	return nil;
}

-(Piece*) getSelectedPiece {
	for(HUDItem* item in self.items)
		if([item isKindOfClass:[StatusItem class]])
			return ((StatusItem*)item).selectedPiece;
	
	return nil;
}


@end
