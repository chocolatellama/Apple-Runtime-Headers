//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface _EDThreadScopeInfo : NSObject
{
    _Bool _needsUpdate;
    long long _databaseID;
    NSDate *_lastViewedDate;
}

@property(retain, nonatomic) NSDate *lastViewedDate; // @synthesize lastViewedDate=_lastViewedDate;
@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(readonly, nonatomic) long long databaseID; // @synthesize databaseID=_databaseID;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDatabaseID:(long long)arg1 needsUpdate:(_Bool)arg2 lastViewedDate:(id)arg3;

@end

