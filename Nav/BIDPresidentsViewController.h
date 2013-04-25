//
//  BIDPresidentsViewController.h
//  Nav
//
//  Created by 李 潇磊 on 13-4-25.
//  Copyright (c) 2013年 李 潇磊. All rights reserved.
//

#import "BIDSecondLevelViewController.h"
#import "BIDPresidentDetailViewController.h"

@interface BIDPresidentsViewController : BIDSecondLevelViewController <BIDPresidentDetailViewControllerDelegate>

@property (strong, nonatomic) NSMutableArray *presidents;

@end
