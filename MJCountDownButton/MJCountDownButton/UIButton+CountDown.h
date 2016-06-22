//
//  UIButton+CountDown.h
//  MJCountDownButton
//
//  Created by Mengjie.Wang on 2016/06/22.
//  Copyright © 2016年 王梦杰. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (CountDown)

/**
 *  @author 王梦杰, 16-06-22 13:06:17
 *
 *  倒计时按钮
 *
 *  @param startTime 倒计时时间
 *  @param title     倒计时结束按钮上显示的文字
 *  @param unitTitle 倒计时的时间单位（默认为s）
 *  @param mColor    按钮的背景色
 *  @param color     倒计时中按钮的背景色
 */
- (void)countDownFromTime:(NSInteger)startTime title:(NSString *)title unitTitle:(NSString *)unitTitle mainColor:(UIColor *)mColor countColor:(UIColor *)color;

@end
