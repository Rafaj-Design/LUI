//
//  LUIDataObject.h
//
//  Created by Ondrej Rafaj on 03/08/2015.
//  Copyright (c) 2015 Ridiculous Innovations. All rights reserved.
//

#import <Foundation/Foundation.h>


@protocol LUIDataObjectLanguageObject <NSObject>

+ (NSDictionary *)map;

@end


typedef NS_ENUM(NSInteger, LUIDataObjectPublishedStatus) {
    LUIDataObjectPublishedStatusPublished = 2,
    LUIDataObjectPublishedStatusStaging = 1,
    LUIDataObjectPublishedStatusDraft = 0
};


@interface LUIDataObject : NSObject

@property (nonatomic) LUIDataObjectPublishedStatus publishedStatus;

@property (nonatomic) NSInteger objectId;

@property (nonatomic, strong) NSDate *published;
@property (nonatomic, strong) NSDate *created;
@property (nonatomic, strong) NSDate *modified;

@property (nonatomic, strong) NSDictionary *content;

- (NSNumber *)numberForKey:(NSString *)key forLanguage:(NSString *)langCode;
- (NSInteger)integerForKey:(NSString *)key forLanguage:(NSString *)langCode;
- (BOOL)boolForKey:(NSString *)key forLanguage:(NSString *)langCode;
- (NSString *)valueForKey:(NSString *)key forLanguage:(NSString *)langCode;
- (NSDate *)dateForKey:(NSString *)key forLanguage:(NSString *)langCode;


@end
