//
//  LUIObject.h
//  LUIFramework
//
//  Created by Ondrej Rafaj on 03/08/2015.
//  Copyright (c) 2015 Ridiculous Innovations. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface LUIObject : NSObject

@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) NSDictionary *originalData;


@end
