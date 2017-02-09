//
//  UIButton+Block.h
//  iOS-Categories (https://github.com/shaojiankui/iOS-Categories)
//
//  Created by Jakey on 14/12/30.
//  Copyright (c) 2014年 www.skyfox.org. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void (^TouchedBlock)(UIButton *btn);

@interface UIButton (Block)
-(void)addActionHandler:(TouchedBlock)touchHandler;
// 取消按钮和对象的关联
- (void)cancelButtonEventBlock;
@end
