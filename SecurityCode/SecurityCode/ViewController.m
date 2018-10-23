//
//  ViewController.m
//  SecurityCode
//
//  Created by 杨广军 on 2018/10/22.
//  Copyright © 2018年 杨广军. All rights reserved.
//

#import "ViewController.h"
#import "SecurityCodeView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    SecurityCodeView *codeView = [[SecurityCodeView alloc]initWithCount:6 type:securityCodeTypeBox];
    codeView.frame = CGRectMake(0, 100, self.view.bounds.size.width, 100);
    codeView.margin = 20;
    codeView.defaultColor = [UIColor darkGrayColor];
    codeView.selectedColor = [UIColor redColor];
    codeView.backgroundColor = [UIColor yellowColor];
    codeView.markColor = [UIColor redColor];
    [self.view addSubview:codeView];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
