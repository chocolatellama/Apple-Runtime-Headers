//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate, NSRunLoop, NSString, NSTimer, XCTNSPredicateExpectation;
@protocol OS_dispatch_queue, XCTNSPredicateExpectationObject;

@interface _XCTNSPredicateExpectationImplementation : NSObject
{
    XCTNSPredicateExpectation *_expectation;
    id <XCTNSPredicateExpectationObject> _object;
    NSPredicate *_predicate;
    CDUnknownBlockType _handler;
    NSRunLoop *_timerRunLoop;
    NSTimer *_timer;
    double _pollingInterval;
    NSString *_debugDescription;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _hasCleanedUp;
    BOOL _isEvaluating;
}

@property double pollingInterval; // @synthesize pollingInterval=_pollingInterval;
@property(copy) NSString *debugDescription; // @synthesize debugDescription=_debugDescription;
@property(readonly, copy) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly) id <XCTNSPredicateExpectationObject> object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)cleanup;
- (BOOL)_shouldFulfillForExpectation:(id)arg1 object:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_considerFulfilling;
@property(copy) CDUnknownBlockType handler;
- (void)_scheduleTimer;
- (void)startPolling;
- (id)initWithPredicate:(id)arg1 object:(id)arg2 expectation:(id)arg3;
- (void)dealloc;

@end

