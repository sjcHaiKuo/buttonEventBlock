


//
//  JCButton.m
//  Parking
//
//  Created by mac on 2016/12/13.
//  Copyright © 2016年 ___Hongkui___. All rights reserved.
//

#import "JCButton.h"

@implementation JCButton

// 将按钮点击事件转换为block
- (void)addTapBlock:(ButtonBlock)block {
    _block = block;
//    NSObject *obj = [NSObject new];
    [self addTarget:nil action:@selector(buttonAction:) forControlEvents:UIControlEventTouchUpInside];
}

- (void)buttonAction:(UIButton *)button
{
    _block(button);
}

@end
