//
//  CourseAndProjectTableViewController.h
//  MyDDL
//
//  Created by 柯瀚仰 on 11/25/15.
//  Copyright © 2015 柯瀚仰. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CourseAndProjectTableViewController : UITableViewController

@property (nonatomic, readonly) UITableViewController *nextViewController;

//- (UIImage *)cellImageAtIndexPath:(NSIndexPath *)indexPath;
- (void)addNewItem;

@end
