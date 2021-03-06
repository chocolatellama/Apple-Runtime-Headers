//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NWNetworkAgent-Protocol.h>

@class NSString, NSUUID;

@interface NENetworkAgent : NSObject <NWNetworkAgent>
{
    BOOL active;
    BOOL kernelActivated;
    BOOL userActivated;
    BOOL voluntary;
    int _internalSessionType;
    int _lastStatus;
    NSUUID *agentUUID;
    NSString *agentDescription;
    NSUUID *_internalUUID;
    NSString *_name;
    CDUnknownBlockType _internalStartHandler;
    NSString *_configurationName;
}

+ (id)agentFromData:(id)arg1;
+ (id)agentType;
+ (id)agentDomain;
@property int lastStatus; // @synthesize lastStatus=_lastStatus;
@property(copy) NSString *configurationName; // @synthesize configurationName=_configurationName;
@property(copy) CDUnknownBlockType internalStartHandler; // @synthesize internalStartHandler=_internalStartHandler;
@property(retain) NSString *name; // @synthesize name=_name;
@property int internalSessionType; // @synthesize internalSessionType=_internalSessionType;
@property(copy) NSUUID *internalUUID; // @synthesize internalUUID=_internalUUID;
@property(nonatomic, getter=isVoluntary) BOOL voluntary; // @synthesize voluntary;
@property(nonatomic, getter=isUserActivated) BOOL userActivated; // @synthesize userActivated;
@property(nonatomic, getter=isKernelActivated) BOOL kernelActivated; // @synthesize kernelActivated;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active;
@property(copy, nonatomic) NSString *agentDescription; // @synthesize agentDescription;
@property(copy, nonatomic) NSUUID *agentUUID; // @synthesize agentUUID;
- (void).cxx_destruct;
- (BOOL)startAgentWithOptions:(id)arg1;
- (void)setStartHandler:(CDUnknownBlockType)arg1;
@property(readonly) int sessionType;
@property(readonly, copy) NSUUID *configurationUUID;
- (id)copyAgentData;
- (BOOL)matchesFileHandle:(id)arg1;
- (id)initWithConfigUUID:(id)arg1 sessionType:(int)arg2 name:(id)arg3;

// Remaining properties
@property(nonatomic, getter=isNetworkProvider) BOOL networkProvider;
@property(nonatomic, getter=isNexusProvider) BOOL nexusProvider;
@property(nonatomic) BOOL requiresAssert;
@property(nonatomic, getter=isSpecificUseOnly) BOOL specificUseOnly;
@property(nonatomic) BOOL supportsBrowseRequests;
@property(nonatomic) BOOL supportsResolveRequests;
@property(nonatomic) BOOL updateClientsImmediately;

@end

