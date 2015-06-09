//
//  LUIFramework.h
//
//  Created by Ondrej Rafaj on 17/04/2015.
//  Copyright (c) 2015 Ridiculous Innovations. All rights reserved.
//

#import <TargetConditionals.h>

#if TARGET_IPHONE_SIMULATOR || TARGET_OS_IPHONE

#import <UIKit/UIKit.h>

#elif TARGET_OS_MAC

#import <Cocoa/Cocoa.h>

#endif


//! Project version number for LUIFramework.
FOUNDATION_EXPORT double LUIFrameworkVersionNumber;

//! Project version string for LUIFramework.
FOUNDATION_EXPORT const unsigned char LUIFrameworkVersionString[];


#if TARGET_IPHONE_SIMULATOR || TARGET_OS_IPHONE

// iOS only helper categories
#import <LUIFramework/UILabel+LUITranslations.h>
#import <LUIFramework/UIViewController+LUITranslations.h>
#import <LUIFramework/UIBarItem+LUITranslations.h>
#import <LUIFramework/UIButton+LUITranslations.h>
#import <LUIFramework/UISearchBar+LUITranslations.h>
#import <LUIFramework/UITextField+LUITranslations.h>
#import <LUIFramework/UITextView+LUITranslations.h>
#import <LUIFramework/UITableView+LUITranslations.h>

#import <LUIFramework/UIImageView+LUIImages.h>
#import <LUIFramework/UIButton+LUIImages.h>

// iOS specific interfaces
#import <LUIFramework/LUILanguageSelectorViewController.h>

#elif TARGET_OS_MAC

// Mac only helper categories

#endif

#import <LUIFramework/LUIEnums.h>
#import <LUIFramework/LUILanguage.h>
#import <LUIFramework/LUIURLs.h>

#import <LUIFramework/LUIMain.h>
#import <LUIFramework/LUITranslations.h>
#import <LUIFramework/LUIImages.h>

