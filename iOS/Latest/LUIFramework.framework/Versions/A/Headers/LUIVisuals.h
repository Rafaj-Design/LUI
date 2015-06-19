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

/**
 *  Notification that will be fired when visuals (colors, images, etc ...) are updated
 *
 *  @note You can use this for example to reload the interface
 */
extern NSString *const LUIImagesDidUpdateContentNotification;

/**
 *  Return image
 *
 *  @param key key for an image that has been been setup in your admin panel
 *
 *  @return UIImage image
 */
#define LUIImage(key)                                   [LUIVisuals imageWithKey:key]


@interface LUIVisuals : LUIBasicData

/**
 *  Default value is YES
 *
 *  @note If disabled, color will have to be converted from it's original value every time you want to use it
 */
@property (nonatomic) BOOL enableColorCaching;

/**
 *  Instance of LUIVisuals
 *
 *  @note Use instead any -init methods, if you use -init, your app will crash
 *
 *  @return LUIVisuals instance of this object
 */
+ (instancetype)sharedInstance;

/**
 *  Return all image keys available
 *
 *  @return NSArray of image keys
 */
+ (NSArray *)allKeys;

#if TARGET_IPHONE_SIMULATOR || TARGET_OS_IPHONE

/**
 *  Return an image (iOS only)
 *
 *  @param key key for an image that has been been setup in your admin panel
 *
 *  @return UIImage image
 */
+ (UIImage *)imageWithKey:(NSString *)key;

/**
 *  Return a color (iOS only)
 *
 *  @param key key for a color that has been been setup in your admin panel
 *
 *  @return UIColor color
 */
+ (UIColor *)colorWithKey:(NSString *)key;

#elif TARGET_OS_MAC

/**
 *  Return an image (Mac/Cocoa only)
 *
 *  @param key key for an image that has been been setup in your admin panel
 *
 *  @return NSImage image
 */
+ (NSImage *)imageWithKey:(NSString *)key;

/**
 *  Return a color (Mac/Cocoa only)
 *
 *  @param key key for a color that has been been setup in your admin panel
 *
 *  @return NSColor color
 */
+ (NSColor *)colorWithKey:(NSString *)key;

#endif

/**
 *  Return an image data
 *
 *  @param key key for an image that has been been setup in your admin panel
 *
 *  @return NSData image data
 */
+ (NSData *)imageDataWithKey:(NSString *)key;

/**
 *  Return a color string in hex format
 *
 *  @note Example: FF0000 for red, returns code without the leading #
 *
 *  @param key key for a color that has been been setup in your admin panel
 *
 *  @return NSString color code
 */
+ (NSString *)colorHexCodeWithKey:(NSString *)key;


@end
