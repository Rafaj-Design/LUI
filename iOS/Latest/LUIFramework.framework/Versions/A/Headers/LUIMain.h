//
//  LUIMain.h
//
//  Created by Ondrej Rafaj on 17/04/2015.
//  Copyright (c) 2015 Ridiculous Innovations. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface LUIMain : NSObject

// It is mandatory to set apiKey to enable this service even in a staging mode
// Find your API key in the LiveUI admin panel
@property (nonatomic, strong) NSString *apiKey;

// Default NO, make sure you don't release your app with debug mode enabled.
// Failing to do so could heavily increase your API usage and disable the service!
// Debug mode will also add some extra processing so be aware of potential performance issues
@property (nonatomic) BOOL debugMode;

+ (instancetype)sharedInstance;


@end
