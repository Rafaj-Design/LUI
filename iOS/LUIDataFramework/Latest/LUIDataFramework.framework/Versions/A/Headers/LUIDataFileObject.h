//
//  LUIDataFileObject.h
//  LUIFramework
//
//  Created by Ondrej Rafaj on 12/08/2015.
//  Copyright (c) 2015 Ridiculous Innovations. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface LUIDataFileObject : NSObject

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSUInteger size;
@property (nonatomic, readonly) NSString *mime;

@property (nonatomic, readonly) NSURL *url;


@end
