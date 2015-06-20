//
//  NSViewController+LUITranslations.h
//
//  Created by Ondrej Rafaj on 12/06/2015.
//  Copyright (c) 2015 Ridiculous Innovations. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface NSViewController (LUITranslations)

/**
 *  Register view controller's title to be reloaded once the localization is updated
 *
 *  @param key localization key setup in the admin panel
 */
- (void)registerTitleWithTranslationKey:(NSString *)key;


@end
