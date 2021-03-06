//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSDate, NSError, NSUUID;

@interface HMDLogEvent : HMFObject
{
    BOOL _submitted;
    NSUUID *_eventType;
    NSError *_eventError;
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (id)stringForSource:(unsigned long long)arg1;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSError *eventError; // @synthesize eventError=_eventError;
@property(readonly, nonatomic) NSUUID *eventType; // @synthesize eventType=_eventType;
@property(nonatomic, getter=isSubmitted) BOOL submitted; // @synthesize submitted=_submitted;
- (void).cxx_destruct;
@property(readonly) double durationInMilliseconds;
- (void)submitAtDate:(id)arg1 error:(id)arg2;
- (id)initWithEventType:(id)arg1;
- (id)init;

@end

