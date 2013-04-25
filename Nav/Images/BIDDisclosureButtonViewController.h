//
//  BIDDisclosureButtonViewController.h
//  Nav
//
//  Created by 李 潇磊 on 13-4-22.
//  Copyright (c) 2013年 李 潇磊. All rights reserved.
//

#import "BIDSecondLevelViewController.h"

@class BIDDisclosureDetailViewController;

@interface BIDDisclosureButtonViewController : BIDSecondLevelViewController

@property (copy, nonatomic) NSArray *movies;
@property (strong, nonatomic) BIDDisclosureDetailViewController *detailController;

@end
