//
//  IFTTTMaskAnimation.h
//  Onborading Experience
//
//  Created by Amir Shavit on 7/26/15.
//  Copyright (c) 2015 Autodesk. All rights reserved.
//

#import "IFTTTAnimation.h"

typedef NS_ENUM(NSUInteger, IFTTTMaskSwipeDirection)
{
    IFTTTMaskSwipeFromTop,
    IFTTTMaskSwipeFromLeft,
    IFTTTMaskSwipeFromBottom,
    IFTTTMaskSwipeFromRight
};

@interface IFTTTMaskAnimation : IFTTTAnimation <IFTTTAnimatable>

- (instancetype)initWithView:(UIView *)view direction:(IFTTTMaskSwipeDirection)direction NS_DESIGNATED_INITIALIZER;
+ (instancetype)animationWithView:(UIView *)view direction:(IFTTTMaskSwipeDirection)direction;

- (void)addKeyframeForTime:(CGFloat)time visibility:(CGFloat)percent;
- (void)addKeyframeForTime:(CGFloat)time visibility:(CGFloat)percent withEasingFunction:(IFTTTEasingFunction)easingFunction;

@end
