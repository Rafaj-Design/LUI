//
//  LUIMain.h
//
//  Created by Ondrej Rafaj on 17/04/2015.
//  Copyright (c) 2015 Ridiculous Innovations. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface LUIMain : NSObject

@property (nonatomic, strong) NSString *apiKey;         // Mandatory field
@property (nonatomic, strong) NSString *baseUrl;        // Defaults to SDK default url at the time of the SDK release, if set a different base URL for the API, this is set globally for all modules and will disable analytics
@property (nonatomic) BOOL debugMode;                   // Default NO

+ (instancetype)sharedInstance;


@end
