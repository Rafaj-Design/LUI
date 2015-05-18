//
//  LUILanguageSelectorViewController.h
//
//  Created by Ondrej Rafaj on 20/04/2015.
//  Copyright (c) 2015 Ridiculous Innovations. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface LUILanguageSelectorViewController : UITableViewController

@property (nonatomic) BOOL showDefaultOption;                           // Defaults to NO
@property (nonatomic) UITableViewCellStyle cellPresentationStyle;       // Defaults to UITableViewCellStyleSubtitle


@end
