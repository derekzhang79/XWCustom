//
//  UIButton+AsyncImage.h
//  iPathologist
//
//  Created by Ren XinWei on 13-6-14.
//  Copyright (c) 2013年 Motic China Group Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (AsyncImage)

//size by point
- (void)setImageFromURL:(NSString *)urlString adjustToSize:(CGSize)size completion:(void (^)(void))completion logo:(UIImage *)logoImage;

@end
