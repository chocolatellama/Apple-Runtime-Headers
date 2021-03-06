//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

@class UIViewController;

__attribute__((visibility("hidden")))
@interface HBUITopShelfHostAnimationTransaction : BSTransaction
{
    _Bool _backgroundUpdate;
    UIViewController *_containerViewController;
    UIViewController *_fromViewController;
    UIViewController *_toViewController;
    long long _animationDirection;
}

@property(readonly, nonatomic, getter=isBackgroundUpdate) _Bool backgroundUpdate; // @synthesize backgroundUpdate=_backgroundUpdate;
@property(readonly, nonatomic) long long animationDirection; // @synthesize animationDirection=_animationDirection;
@property(readonly, nonatomic) UIViewController *toViewController; // @synthesize toViewController=_toViewController;
@property(readonly, nonatomic) UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(readonly, nonatomic) __weak UIViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
- (void).cxx_destruct;
- (void)_addTransformAnimations;
- (void)_addFadeAnimations;
- (void)_prepareForTransition;
- (void)_addAnimations;
- (void)_didComplete;
- (void)_begin;
- (id)debugDescription;
- (id)initWithContainerViewController:(id)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 animationDirection:(long long)arg4 isBackgroundUpdate:(_Bool)arg5;

@end

