//
//  DeadlineCell.h
//  MyDDL
//
//  Created by 胡譯心 on 16/4/20.
//  Copyright © 2016年 柯瀚仰. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DeadlineCell : UITableViewCell

- (void)setDDLStatus:(int)status;
- (void)setDDLTitle:(NSString *)title date:(NSString *)date;

@end
