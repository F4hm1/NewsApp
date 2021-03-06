//
//  AWKGalleryAnimator.h
//  Gallery
//
//  Created by Powermobile on 30-04-15.
//  Copyright (c) 2015 Powermobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AWKGalleryAnimator : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning>

@property (nonatomic, weak) UIView *sourceView;

@property (nonatomic, assign, getter=isDismissal) BOOL dismissal;
@property (nonatomic, assign, getter=isInteractive) BOOL interactive;

@property (nonatomic, copy) void (^onAnimationEndHandler)(BOOL completed);

@end
