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

// Default NO, if set to yes, a dialog asking for permission to access location services
// will be triggered when the app starts for the first time
// Location accuracy is set to kCLLocationAccuracyThreeKilometers
@property (nonatomic) BOOL allowLocationServices;

+ (instancetype)sharedInstance;


@end
