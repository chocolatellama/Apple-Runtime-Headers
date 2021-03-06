//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/VCSyncDataHandling-Protocol.h>

@class NSArray, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface VCSyncDataHandler : NSObject <VCSyncDataHandling>
{
    NSHashTable *_servicesTable;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (Class)changeClass;
+ (int)messageType;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSHashTable *servicesTable; // @synthesize servicesTable=_servicesTable;
- (void).cxx_destruct;
- (void)deregisterSyncService:(id)arg1;
- (void)registerSyncService:(id)arg1;
- (_Bool)deleteSyncedData:(id *)arg1;
- (_Bool)applyChanges:(id)arg1 fromSyncService:(id)arg2 error:(id *)arg3;
- (_Bool)resetSyncStateForService:(id)arg1 error:(id *)arg2;
- (_Bool)markChangesAsSynced:(id)arg1 withSyncService:(id)arg2 metadata:(id)arg3 error:(id *)arg4;
- (id)unsyncedChangesForSyncService:(id)arg1 metadata:(id *)arg2 error:(id *)arg3;
- (void)requestFullResync;
- (void)requestSync;
@property(readonly, copy, nonatomic) NSArray *services;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

