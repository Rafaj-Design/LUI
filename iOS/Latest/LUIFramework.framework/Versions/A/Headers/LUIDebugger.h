//
//  LUIDebugger.h
//
//  Created by Ondrej Rafaj on 15/06/2015.
//  Copyright (c) 2015 Ridiculous Innovations. All rights reserved.
//

#import "LUIBasicData.h"


#define LUILog(args...)                LUILogFull(__FILE__, __LINE__, __PRETTY_FUNCTION__, args)


FOUNDATION_EXPORT void LUILogFull(const char *file, int line, const char *function, NSString *format, ...);


@interface LUIDebugger : LUIBasicData

// Enabled once instanciated
// Any settings from admin panel will override this forever
// This is useful if you want to enable logging right away, before any configuration can be loaded from LiveUI
@property (nonatomic) BOOL loggingEnabled;

+ (instancetype)sharedInstance;


@end
