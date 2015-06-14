//
//  LUIURLs.h
//
//  Created by Ondrej Rafaj on 27/05/2015.
//  Copyright (c) 2015 Ridiculous Innovations. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface LUIURLs : NSObject

+ (instancetype)sharedInstance;

@property (nonatomic, strong) NSString *customWebUrlString;
@property (nonatomic, strong) NSString *customApiUrlString;
@property (nonatomic, strong) NSString *customImagesUrlString;


@end
