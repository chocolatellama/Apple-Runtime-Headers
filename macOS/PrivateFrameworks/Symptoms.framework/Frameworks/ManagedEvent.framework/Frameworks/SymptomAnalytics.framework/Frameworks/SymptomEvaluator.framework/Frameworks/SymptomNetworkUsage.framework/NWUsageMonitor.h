//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet, NWEntityMapperCoalitionWatcher, NWEntityMapperDynamicLaunchServices, NWEntityMapperNEHelper, NWEntityMapperProcessWatcher, NWEntityMapperStaticAssignment;

@interface NWUsageMonitor : NSObject
{
    NWEntityMapperCoalitionWatcher *_coalitionUUIDMapper;
    NWEntityMapperStaticAssignment *_staticAssignmentSymptomsUUIDMapper;
    NWEntityMapperStaticAssignment *_staticAssignmentCommCenterUUIDMapper;
    NWEntityMapperNEHelper *_neHelperUUIDMapper;
    NWEntityMapperDynamicLaunchServices *_dynamicLaunchServicesUUIDMapper;
    NWEntityMapperProcessWatcher *_processWatcherUUIDMapper;
    BOOL _useSymptomsMapping;
    BOOL _useNEHelper;
    BOOL _useDynamicLaunchServices;
    BOOL _useCoalitionIDs;
    BOOL _useProcessNames;
    NSSet *_useNEHelperSet;
    NSSet *_knownDaemonSet;
    NSMutableDictionary *_reportedLookupFailures;
    BOOL _debugMode;
}

+ (void)initialize;
@property(readonly) BOOL debugMode; // @synthesize debugMode=_debugMode;
- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1;
- (id)stateDictionary;
- (void)configure:(id)arg1;
- (void)invalidate;
- (id)bestIdentifierForUUID:(id)arg1 EUUID:(id)arg2 pid:(int)arg3 epid:(int)arg4 procname:(char *)arg5 derivation:(int *)arg6;
- (id)allIdentifiersForUUID:(id)arg1 EUUID:(id)arg2 pid:(int)arg3 epid:(int)arg4 procname:(char *)arg5;
- (void)noteFailedLookupFor:(id)arg1 processName:(char *)arg2 pid:(int)arg3;
- (id)identifierForUUID:(id)arg1 derivation:(int *)arg2;
- (void)noteUUID:(id)arg1 forPid:(int)arg2 procname:(char (*)[64])arg3;
- (id)processNameForUUIDString:(id)arg1;
- (id)processNameForUUID:(id)arg1;

@end

