//
//  BIDRowControlsViewController.h
//  Nav
//
//  Created by 李 潇磊 on 13-4-23.
//  Copyright (c) 2013年 李 潇磊. All rights reserved.
//

#import "BIDSecondLevelViewController.h"

@interface BIDRowControlsViewController : BIDSecondLevelViewController

@property (copy, nonatomic) NSArray *characters;
- (IBAction)tappedButton:(UIButton *)sender;

@end
