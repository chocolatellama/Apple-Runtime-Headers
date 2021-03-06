//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

@class UIViewPropertyAnimator;
@protocol UITimingCurveProvider;

__attribute__((visibility("hidden")))
@interface HBUIPropertyAnimatorTransaction : BSTransaction
{
    id <UITimingCurveProvider> _timingParameters;
    double _duration;
    double _delay;
    CDUnknownBlockType _animations;
    UIViewPropertyAnimator *_animator;
}

@property(retain, nonatomic) UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
@property(readonly, nonatomic) CDUnknownBlockType animations; // @synthesize animations=_animations;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) id <UITimingCurveProvider> timingParameters; // @synthesize timingParameters=_timingParameters;
- (void).cxx_destruct;
- (void)_willFailWithReason:(id)arg1;
- (void)_willInterruptWithReason:(id)arg1;
- (_Bool)_canBeInterrupted;
- (void)_begin;
- (id)initWithTimingParameters:(id)arg1 duration:(double)arg2 delay:(double)arg3 animations:(CDUnknownBlockType)arg4;

@end

