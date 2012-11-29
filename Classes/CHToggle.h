//
//  CHToggle.h
//  catapult
//
//  Created by Sam Christian Lee on 11/18/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@class CHToggleItem;

@interface CHToggle : CCLayer {
	NSMutableArray* items;
	CGPoint position;
	int selectedIndex;
}

@property(nonatomic, assign) CGPoint position;
@property(nonatomic, assign) int selectedIndex;
@property(nonatomic, retain) NSString* image;

-(id)initWithImageName:(NSString*)s;
-(void)addItem:(CHToggleItem*)item;
-(void)selectItem:(id)sender;
-(void)selectItemAtIndex:(int)index;
-(int)getSelected;
-(void)toggled:(id)sender;
-(void)clearSelection;
@end
