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

@property (nonatomic, strong) NSString *currentLanguageCode;

@property (nonatomic) LUIBuild version;                                     // Translation version, default is LUIBuildLive, use NSInteger for specific version

+ (instancetype)sharedInstance;
+ (NSArray *)allKeys;
+ (NSArray *)availableLanguages;

- (NSString *)get:(NSString *)key withDefaultString:(NSString *)defaultString table:(NSString *)tableName NS_FORMAT_ARGUMENT(1);
- (NSString *)get:(NSString *)key table:(NSString *)tableName NS_FORMAT_ARGUMENT(1);

+ (NSLocale *)currentLocale;


@end