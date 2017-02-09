//
//  JCButton.h
//  Parking
//
//  Created by mac on 2016/12/13.
//  Copyright © 2016年 ___Hongkui___. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JCButton : UIButton

// 将按钮点击事件转换为block
typedef void (^ButtonBlock)(UIButton *btn);
@property(nonatomic,copy) ButtonBlock block;
- (void)addTapBlock:(ButtonBlock)block;
@end
