//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <coreroutine/NSObject-Protocol.h>

@class RTPredictedDatesCriteria, RTPredictedLocationsOfInterestCriteria;

@protocol RTPredictedLocationOfInterestProvider <NSObject>
- (void)fetchPredictedExitDatesWithCriteria:(RTPredictedDatesCriteria *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchPredictedLocationsOfInterestWithCriteria:(RTPredictedLocationsOfInterestCriteria *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchNextPredictedLocationsOfInterestWithCriteria:(RTPredictedLocationsOfInterestCriteria *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
@end

