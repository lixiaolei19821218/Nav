//
//  BIDDisclosureDetailViewController.m
//  Nav
//
//  Created by 李潇磊 on 13-4-22.
//  Copyright (c) 2013年 李 潇磊. All rights reserved.
//

#import "BIDDisclosureDetailViewController.h"

@implementation BIDDisclosureDetailViewController

- (UILabel *)label;
{
    return (id)self.view;
}

- (void)loadView;
{
    UILabel *label = [[UILabel alloc] init];
    label.numberOfLines = 0;
    label.textAlignment = NSTextAlignmentCenter;
    self.view = label;    
}

- (void)viewWillAppear:(BOOL)animated;
{
    [super viewWillAppear:animated];
    self.label.text = self.message;
}

@end
