//
//  MJCountDownButton.h
//  MJCountDownButton
//
//  Created by Mengjie.Wang on 2016/06/22.
//  Copyright © 2016年 王梦杰. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MJCountDownButton;

typedef void(^Completion)(MJCountDownButton *countDownButton);

@interface MJCountDownButton : UIButton

/**
 *  @author 王梦杰, 16-06-22 14:06:00
 *
 *  开始倒计时
 *
 *  @param startTime  倒计时时间
 *  @param unitTitle  倒计时时间单位（如：s）
 *  @param completion 倒计时结束执行的Block
 */
- (void)countDownFromTime:(NSInteger)startTime unitTitle:(NSString *)unitTitle completion:(Completion)completion;

@end
