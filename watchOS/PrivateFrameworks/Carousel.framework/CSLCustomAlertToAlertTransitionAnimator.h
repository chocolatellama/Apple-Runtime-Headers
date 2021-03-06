//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/CSLViewControllerTransitionCancelling-Protocol.h>
#import <Carousel/CUISAlertToAlertAnimatedTransitioning-Protocol.h>

@class CSLViewControllerTransitionContext, NSString;
@protocol CUISAlertToAlertAnimatedTransitioning, UIViewControllerContextTransitioning;

@interface CSLCustomAlertToAlertTransitionAnimator : NSObject <CUISAlertToAlertAnimatedTransitioning, CSLViewControllerTransitionCancelling>
{
    id <CUISAlertToAlertAnimatedTransitioning> _animator;
    id <UIViewControllerContextTransitioning> _transitionContext;
    CSLViewControllerTransitionContext *_wrapperContext;
}

@property(retain, nonatomic) CSLViewControllerTransitionContext *wrapperContext; // @synthesize wrapperContext=_wrapperContext;
@property(retain, nonatomic) id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(readonly, nonatomic) id <CUISAlertToAlertAnimatedTransitioning> animator; // @synthesize animator=_animator;
- (void).cxx_destruct;
- (void)completeCurrentTransitionImmediately;
- (void)animateTransition:(id)arg1;
- (void)completeWrappedTransition:(_Bool)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithAnimator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

