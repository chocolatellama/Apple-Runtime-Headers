//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KTLogClient, KTPublicKeyStore, NSMutableDictionary, TransparencyManagedDataStore;

@interface KTContextStore : NSObject
{
    NSMutableDictionary *_contexts;
    TransparencyManagedDataStore *_dataStore;
    KTPublicKeyStore *_keyStore;
    KTLogClient *_configClient;
}

@property(retain) KTLogClient *configClient; // @synthesize configClient=_configClient;
@property(retain) KTPublicKeyStore *keyStore; // @synthesize keyStore=_keyStore;
@property(retain) TransparencyManagedDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(retain) NSMutableDictionary *contexts; // @synthesize contexts=_contexts;
- (void).cxx_destruct;
- (id)serializeTranscripts;
- (_Bool)runDutyCycleForActivity:(id)arg1 logClient:(id)arg2 resumptionWorkloop:(id)arg3;
- (void)runDutyCycleConfigurationStepForActivity:(id)arg1 logClient:(id)arg2 resumptionWorkloop:(id)arg3;
- (void)runDutyCycleProcessingStepForActivity:(id)arg1 context:(id)arg2 logClient:(id)arg3;
- (_Bool)logSharedMetrics;
- (void)clearApplicationState:(id)arg1 logClient:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)updateRequest:(id)arg1 serverDatas:(id)arg2 syncedDatas:(id)arg3 queryRequest:(id)arg4 queryResponse:(id)arg5 error:(id *)arg6;
- (void)validateEnrollment:(id)arg1 application:(id)arg2 logClient:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)validateSelf:(id)arg1 application:(id)arg2 logClient:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)validatePeer:(id)arg1 application:(id)arg2 logClient:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)contextForApplication:(id)arg1 logClient:(id)arg2 fetchState:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)createContextForApplication:(id)arg1 dataStore:(id)arg2 logClient:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)configureWithClient:(id)arg1 force:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)configureWithClient:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)configure:(CDUnknownBlockType)arg1;
- (void)forcedConfigure:(_Bool)arg1 logClient:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithDataStore:(id)arg1 keyStore:(id)arg2 configClient:(id)arg3;

@end

