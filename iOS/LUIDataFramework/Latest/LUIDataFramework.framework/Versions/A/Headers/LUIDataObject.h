//
//  LUIDataObject.h
//
//  Created by Ondrej Rafaj on 03/08/2015.
//  Copyright (c) 2015 Ridiculous Innovations. All rights reserved.
//

#import <Foundation/Foundation.h>


@protocol LUIDataLanguageObjectProtocol <NSObject>

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
@property (nonatomic, strong) NSDictionary *info;


@end
