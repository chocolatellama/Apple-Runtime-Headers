//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface RTStateDepictionOnePredEl : NSObject
{
    int _numOfClustEntries;
    double _aggregateTime_s;
    double _latestVisitTime_s;
    double _earliestVisitTime_s;
    NSMutableArray *_visitHist;
    double _density;
}

@property(nonatomic) double density; // @synthesize density=_density;
@property(retain, nonatomic) NSMutableArray *visitHist; // @synthesize visitHist=_visitHist;
@property(nonatomic) double earliestVisitTime_s; // @synthesize earliestVisitTime_s=_earliestVisitTime_s;
@property(nonatomic) double latestVisitTime_s; // @synthesize latestVisitTime_s=_latestVisitTime_s;
@property(nonatomic) double aggregateTime_s; // @synthesize aggregateTime_s=_aggregateTime_s;
@property(nonatomic) int numOfClustEntries; // @synthesize numOfClustEntries=_numOfClustEntries;
- (void).cxx_destruct;
- (id)init;

@end

