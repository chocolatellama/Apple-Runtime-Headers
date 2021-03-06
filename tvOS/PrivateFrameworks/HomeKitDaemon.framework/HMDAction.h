//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreModelBackedObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDActionSet, NSDictionary, NSString, NSUUID;

@interface HMDAction : HMFObject <NSSecureCoding, HMDBackingStoreModelBackedObjectProtocol, HMDBackingStoreObjectProtocol, HMFLogging>
{
    NSUUID *_uuid;
    HMDActionSet *_actionSet;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2;
@property(nonatomic) __weak HMDActionSet *actionSet; // @synthesize actionSet=_actionSet;
@property(readonly, copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)logIdentifier;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)modelBackedObjects;
- (id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
@property(readonly, copy, nonatomic) NSUUID *modelParentIdentifier;
@property(readonly, copy, nonatomic) NSUUID *modelIdentifier;
@property(readonly) Class modelClass;
@property(readonly) unsigned long long entitlementsForNotification;
@property(readonly) _Bool requiresDeviceUnlock;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (void)executeWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSString *stateDump;
@property(readonly) unsigned long long type;
- (void)updateActionSetIfNil:(id)arg1;
- (id)initWithUUID:(id)arg1 actionSet:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

