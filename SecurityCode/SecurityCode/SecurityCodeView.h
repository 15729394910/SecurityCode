//
//  SecurityCodeView.h
//  SecurityCode
//
//  Created by 杨广军 on 2018/10/22.
//  Copyright © 2018年 杨广军. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, securityCodeType){
    securityCodeTypeDownLine = 0,  //下划线
    securityCodeTypeBox,   //方框
};

@interface SecurityCodeView : UIView

//显示样式
@property (nonatomic, assign) securityCodeType type;
//验证码数量
@property (nonatomic, assign) NSUInteger count;
//验证码之间的间距
@property (nonatomic, assign) NSUInteger margin;
//每个验证码的尺寸
@property (nonatomic, assign) CGSize size;
//下划线未填写颜色
@property (nonatomic, strong) UIColor *defaultColor;
//已写过验证码下划线颜色
@property (nonatomic, strong) UIColor *selectedColor;
//光标颜色
@property (nonatomic, strong) UIColor *markColor;

- (instancetype)initWithCount:(NSUInteger)count type:(securityCodeType)type;

@end
