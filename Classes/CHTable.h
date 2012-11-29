//
//  CHTable.h
//  catapult
//
//  Created by Sam Christian Lee on 11/18/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "Box2D.h" 
#import "BaseMenu.h"

#define MAX_ROWS 4

@class GameData;

@interface CHTable : BaseMenu {
	NSMutableArray* items;
	NSMutableArray* rowdata;
	int offset;
	CCMenuItemSprite* next;
	CCMenuItemSprite* prev;
	GameData* selectedGameData;
	id responder;
}

+(id) tableWithParent:(id)p;
-(id) initWithParent:(id)p;
-(void) toggled:(id)sender;
-(void) selectItemAtIndex:(int)index;
-(void) clearSelection;
-(void) setData:(NSArray*)data;
-(CGRect) rowRect;
-(void) updateView;
-(void) getNextPage:(id)sender;
-(void) getPreviousPage:(id)sender;
-(BOOL) hasNextPage;
-(BOOL) hasPreviousPage;
-(GameData*) selectedGame;

@end