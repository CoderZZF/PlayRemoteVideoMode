//
//  VideoPlayView.h
//  02-远程视频播放(AVPlayer)
//
//  Created by apple on 15/8/16.
//  Copyright (c) 2015年 xiaomage. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

// 指定一个协议.
@protocol VideoPlayViewDelegate <NSObject>

@optional
- (void)videoplayViewSwitchOrientation:(BOOL)isFull;

@end


@interface VideoPlayView : UIView

// 快速创建视图的方法.
+ (instancetype)videoPlayView;
// 代理属性.
@property (weak, nonatomic) id<VideoPlayViewDelegate> delegate;
// playerItem属性
@property (nonatomic, strong) AVPlayerItem *playerItem;

@end
