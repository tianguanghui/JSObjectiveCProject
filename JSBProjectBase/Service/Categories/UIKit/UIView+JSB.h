//
//  UIView+JSB.h
//  JSBProjectBase
//
//  Created by wenghengcong on 16/1/16.
//  Copyright © 2016年 JungleSong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (JSB)


#pragma mark - position attribute

/***  frame.origin.x    */
@property (nonatomic) CGFloat left;

/***  frame.origin.y    */
@property (nonatomic) CGFloat top;

/***  frame.origin.x + frame.size.width    */
@property (nonatomic) CGFloat right;

/***  frame.origin.y + frame.size.height    */
@property (nonatomic) CGFloat bottom;

/***  frame.size.width  */
@property (nonatomic) CGFloat width;

/***  frame.size.height */
@property (nonatomic) CGFloat height;

/***  center.x  */
@property (nonatomic) CGFloat centerX;

/***  center.y  */
@property (nonatomic) CGFloat centerY;

/***  frame.origin  */
@property (nonatomic) CGPoint origin;

/***  frame.size    */
@property (nonatomic) CGSize  size;

- (CGFloat)topCenterWith:(UIView *)v;

- (UIImage *)screenshot;
                                         
@end
