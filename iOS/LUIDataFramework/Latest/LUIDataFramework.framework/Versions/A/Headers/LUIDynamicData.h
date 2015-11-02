//
//  LUIDynamicData.h
//
//  Created by Ondrej Rafaj on 03/08/2015.
//  Copyright (c) 2015 Ridiculous Innovations. All rights reserved.
//

#import <Foundation/Foundation.h>


//typedef NS_ENUM(NSInteger, LUIDynamicDataCachingType) {
//    LUIDynamicDataCachingTypeNone,
//    LUIDynamicDataCachingTypeSession,
//    LUIDynamicDataCachingTypePersistent
//};


typedef void (^LUIDynamicDataSuccessBlock)(NSArray *data, NSDictionary *map, NSError *error);
typedef void (^LUIDynamicDataCountSuccessBlock)(NSInteger count, NSError *error);


@protocol LUIDataLanguageObjectProtocol;

@interface LUIDynamicData : NSObject


@property (nonatomic, readonly) NSString *apiKey;

@property (nonatomic, strong, readwrite, setter=registerDataObjectClass:) Class dataObjectClass;
@property (nonatomic, strong) NSDictionary *dataObjectMapping;


- (instancetype)initWithApiKey:(NSString *)apiKey;

- (void)getFrom:(NSDate *)from to:(NSDate *)to withSuccessBlock:(LUIDynamicDataSuccessBlock)success;
- (void)getAll:(LUIDynamicDataSuccessBlock)sucess;
- (void)getCount:(LUIDynamicDataCountSuccessBlock)sucess;


@end
