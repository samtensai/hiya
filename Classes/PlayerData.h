//
//  PlayerData.h
//  Rev6
//
//  Created by Sam Christian Lee on 11/18/12.
//  Copyright 2012 Itv. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PlayerData : NSObject {
	uint playerID;
	NSString* name;
}

@property(nonatomic, retain) NSString* name;
@property(nonatomic) uint playerID;

+(PlayerData *) instance;

@end