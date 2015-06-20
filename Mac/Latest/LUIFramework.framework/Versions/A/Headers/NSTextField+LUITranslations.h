//
//  NSTextField+LUITranslations.h
//
//  Created by Ondrej Rafaj on 12/06/2015.
//  Copyright (c) 2015 Ridiculous Innovations. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface NSTextField (LUITranslations)

/**
 *  Register text field's string value to be reloaded once the localization is updated
 *
 *  @param key localization key setup in the admin panel
 */
- (void)registerStringValueWithTranslationKey:(NSString *)key;


@end
