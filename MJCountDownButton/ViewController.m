//
//  ViewController.m
//  MJCountDownButton
//
//  Created by Mengjie.Wang on 2016/06/22.
//  Copyright © 2016年 王梦杰. All rights reserved.
//

#import "ViewController.h"
#import "UIButton+CountDown.h"
#import "MJCountDownButton.h"

@interface ViewController ()

@property (weak, nonatomic) IBOutlet UIButton *vBtn;
@property (weak, nonatomic) IBOutlet MJCountDownButton *cBtn;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
}

- (IBAction)vBtnClicked:(UIButton *)sender {
    [_vBtn countDownFromTime:5 title:@"重新获取验证码" unitTitle:@"s" mainColor:[UIColor colorWithRed:32/255.0 green:189/255.0 blue:252/255.0 alpha:1.0] countColor:[UIColor colorWithRed:0.7 green:0.7 blue:0.7 alpha:1.0]];
}

- (IBAction)cBtnClicked:(MJCountDownButton *)sender {
    [_cBtn countDownFromTime:5 unitTitle:@"s" completion:^(MJCountDownButton *countDownButton) {
        [countDownButton setTitle:@"重新获取验证码" forState:UIControlStateNormal];
    }];
}

@end
