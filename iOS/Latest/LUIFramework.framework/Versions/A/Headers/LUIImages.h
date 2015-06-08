//
//  LUIImages.h
//
//  Created by Ondrej Rafaj on 24/04/2015.
//  Copyright (c) 2015 Ridiculous Innovations. All rights reserved.
//

#import <TargetConditionals.h>

#if TARGET_IPHONE_SIMULATOR || TARGET_OS_IPHONE

#import <UIKit/UIKit.h>

#elif TARGET_OS_MAC

#import <Cocoa/Cocoa.h>

#endif

#import "LUIBasicData.h"


extern NSString *const LUIImagesDidUpdateContentNotification;


#define LUIImage(key)                                   [LUIImages imageWithKey:key]


@interface LUIImages : LUIBasicData

+ (instancetype)sharedInstance;
+ (NSArray *)allKeys;

#if TARGET_IPHONE_SIMULATOR || TARGET_OS_IPHONE

+ (UIImage *)imageWithKey:(NSString *)key;

#elif TARGET_OS_MAC

+ (NSImage *)imageWithKey:(NSString *)key;

#endif

+ (NSData *)imageDataWithKey:(NSString *)key;


@end
