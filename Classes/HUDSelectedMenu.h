//
//  HUDSelectedMenu.h
//  catapult
//
//  Created by Sam Christian Lee on 11/18/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HUDMenu.h"
#import "Piece.h"

@interface HUDSelectedMenu : HUDMenu {
}

-(void) clearItems;
-(StatusItem*) getSelectedItem;
-(Piece*) getSelectedPiece;

@end
