//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTTodayResultsSource-Protocol.h>

@class FCAsyncSerialQueue, NSString;
@protocol FCContentContext, NTReadablePrivateDataStorage, NTTodayResultsFetchDescriptor;

@interface NTTodayResultsSource : NSObject <NTTodayResultsSource>
{
    _Bool _flushingHasBeenEnabled;
    id <NTTodayResultsFetchDescriptor> _fetchDescriptor;
    id <NTReadablePrivateDataStorage> _privateDataStorage;
    id <FCContentContext> _contentContext;
    CDUnknownBlockType _sessionProvider;
    FCAsyncSerialQueue *_serialQueue;
}

@property(nonatomic, getter=hasFlushingBeenEnabled) _Bool flushingHasBeenEnabled; // @synthesize flushingHasBeenEnabled=_flushingHasBeenEnabled;
@property(readonly, nonatomic) FCAsyncSerialQueue *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly, copy, nonatomic) CDUnknownBlockType sessionProvider; // @synthesize sessionProvider=_sessionProvider;
@property(readonly, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(readonly, nonatomic) id <NTReadablePrivateDataStorage> privateDataStorage; // @synthesize privateDataStorage=_privateDataStorage;
@property(readonly, copy, nonatomic) id <NTTodayResultsFetchDescriptor> fetchDescriptor; // @synthesize fetchDescriptor=_fetchDescriptor;
- (void).cxx_destruct;
- (void)_fetchLatestResultsWithOperationInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchLatestResultsWithOperationInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithFetchDescriptor:(id)arg1 privateDataStorage:(id)arg2 contentContext:(id)arg3 sessionProvider:(CDUnknownBlockType)arg4 fetchQueue:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

