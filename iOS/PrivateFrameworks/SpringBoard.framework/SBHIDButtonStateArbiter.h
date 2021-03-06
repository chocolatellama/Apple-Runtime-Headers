//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BSTimer;
@protocol SBHIDButtonStateDelegate;

@interface SBHIDButtonStateArbiter : NSObject
{
    BSTimer *_longPressTimer;
    unsigned long long _downEventSenderID;
    unsigned long long _downTime;
    double _longPressTimeoutAtDownEvent;
    double _longPressTimeout;
    long long _pressSequence;
    id <SBHIDButtonStateDelegate> _delegate;
}

@property(nonatomic) __weak id <SBHIDButtonStateDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long pressSequence; // @synthesize pressSequence=_pressSequence;
@property(nonatomic) double longPressTimeout; // @synthesize longPressTimeout=_longPressTimeout;
- (void).cxx_destruct;
- (void)processEvent:(struct __IOHIDEvent *)arg1;
- (void)_longPressTimeoutDidOccur;
- (void)_startLongPressTimerWithTimeout:(double)arg1;
- (void)_invalidateLongPressTimer;
@property(readonly, nonatomic, getter=isLongPressDisabled) _Bool longPressDisabled;
- (void)reset;

@end

