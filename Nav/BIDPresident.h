//
//  BIDPresident.h
//  Nav
//
//  Created by 李 潇磊 on 13-4-25.
//  Copyright (c) 2013年 李 潇磊. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BIDPresident : NSObject <NSCoding, NSCoding>

@property (assign, nonatomic) NSInteger number;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *fromYear;
@property (copy, nonatomic) NSString *toYear;
@property (copy, nonatomic) NSString *party;

@end
