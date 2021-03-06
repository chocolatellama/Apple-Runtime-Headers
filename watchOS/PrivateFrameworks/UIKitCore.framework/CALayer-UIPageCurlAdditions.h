//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@protocol _UIVectorTextLayoutRun;

@interface CALayer (UIPageCurlAdditions)
- (_Bool)uiHasFilterWithName:(id)arg1;
- (void)setPerspectiveDistance:(float)arg1;
- (void)_ui_removeAnimationForKeyPath:(id)arg1;
- (void)_ui_animateKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 usingSpringWithStiffnessFactor:(float)arg4 initialVelocity:(float)arg5 completion:(CDUnknownBlockType)arg6;
- (int)compareTextEffectsOrdering:(id)arg1;
@property(retain, nonatomic, setter=_ui_setLayoutRun:) id <_UIVectorTextLayoutRun> _ui_layoutRun;
@property(readonly, nonatomic) CALayer *_labelLayerToClipDuringBoundsSizeAnimation;
- (void)_setLabelMasksToBoundsForAnimation:(_Bool)arg1;
@end

