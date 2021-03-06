//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/PUICApplicationSupportServiceDelegate-Protocol.h>
#import <Carousel/UISApplicationSupportServiceDelegate-Protocol.h>

@class CSLDeviceLockManager, FBSDisplayConfiguration, IOSSHLApplicationsManager, NSString, PUICApplicationSupportService, PUICClassicModeConfiguration, UISApplicationSupportService, UISDisplayContext;
@protocol OS_dispatch_queue;

@interface CSLApplicationSupportService : NSObject <PUICApplicationSupportServiceDelegate, UISApplicationSupportServiceDelegate>
{
    PUICApplicationSupportService *_service;
    UISApplicationSupportService *_uisService;
    UISDisplayContext *_standardDisplayContext;
    PUICClassicModeConfiguration *_standardConfiguration;
    PUICClassicModeConfiguration *_classicConfiguration;
    UISDisplayContext *_classicDisplayContext;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _started;
    IOSSHLApplicationsManager *_applicationsManager;
    CSLDeviceLockManager *_deviceLockManager;
    FBSDisplayConfiguration *_displayConfiguration;
}

+ (void)startDefaultService;
+ (id)defaultService;
@property(getter=isStarted) _Bool started; // @synthesize started=_started;
@property(readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration; // @synthesize displayConfiguration=_displayConfiguration;
@property(readonly, nonatomic) CSLDeviceLockManager *deviceLockManager; // @synthesize deviceLockManager=_deviceLockManager;
@property(readonly, nonatomic) IOSSHLApplicationsManager *applicationsManager; // @synthesize applicationsManager=_applicationsManager;
- (void).cxx_destruct;
- (void)requestPasscodeUnlockUIForClient:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)applicationInitializationContextForClient:(id)arg1;
- (id)initialDisplayContextForAppInfo:(id)arg1;
- (id)classicModeConfigurationForAppInfo:(id)arg1;
- (id)classicModeConfigurationForClient:(id)arg1;
- (void)_faultIfNotStarted;
- (unsigned int)artworkSubtype;
- (void)startWithApplicationsManager:(id)arg1 displayConfiguration:(id)arg2 deviceLockManager:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

