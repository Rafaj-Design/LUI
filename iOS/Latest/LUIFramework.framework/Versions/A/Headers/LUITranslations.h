//
//  LUITranslations.h
//
//  Created by Ondrej Rafaj on 20/04/2015.
//  Copyright (c) 2015 Ridiculous Innovations. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LUIEnums.h"
#import "LUIBasicData.h"


extern NSString *const LUITranslationDidUpdateContentNotification;


#define LUILocalizedString(key, comment)                    [[LUITranslations sharedInstance] get:key table:nil]
#define LUITranslateWithDefault(key, defaultString)         [[LUITranslations sharedInstance] get:key withDefaultString:defaultString table:nil]
#define LUITranslate(key)                                   LUILocalizedString(key, nil)


@interface LUITranslations : LUIBasicData

// You can manually set language code (en-US, de, cz)
// Make sure the language code is present in -availableLanguages
@property (nonatomic, strong) NSString *currentLanguageCode;

// Translation version, default is LUIBuildLive
// Use NSInteger for specific version
@property (nonatomic) LUIBuild version;

+ (instancetype)sharedInstance;

// Return all translation keys avaulable
+ (NSArray *)allKeys;

// Returns all available language codes in an array
+ (NSArray *)availableLanguages;

// Getting translation codes
// You can also use macros: LUILocalizedString(key, comment), LUITranslate(key) or LUITranslateWithDefault(key, defaultString)
- (NSString *)get:(NSString *)key withDefaultString:(NSString *)defaultString table:(NSString *)tableName NS_FORMAT_ARGUMENT(1);
- (NSString *)get:(NSString *)key table:(NSString *)tableName NS_FORMAT_ARGUMENT(1);

// Returns locale for currently selected language
// Use this in NSDateFormatters, etc, to allow internationalization of your app
+ (NSLocale *)currentLocale;


@end
