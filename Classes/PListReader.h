//
//  PListReader.h
//  Rev6
//
//  Created by Sam Christian Lee on 11/16/12.
//  Copyright 2012 Itv. All rights reserved.
//

#import <Foundation/Foundation.h>
#define PLIST_FILE_NAME @"Settings.plist"

@interface PListReader : NSObject {
	
}

+ (NSDictionary *)getAppPlist;
+ (void)saveAppPlist:(NSDictionary *)plistDict;

@end

