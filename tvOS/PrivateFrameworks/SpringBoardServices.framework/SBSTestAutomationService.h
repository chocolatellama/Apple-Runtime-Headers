//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardServices/SBSAbstractSystemService.h>

@interface SBSTestAutomationService : SBSAbstractSystemService
{
}

- (void)countScenesForBundleIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setApplicationBundleIdentifier:(id)arg1 blockedForScreenTime:(_Bool)arg2;
- (id)acquireHUDHiddenAssertionForIdentifier:(id)arg1;
- (void)resetToHomeScreenAnimated:(_Bool)arg1;
- (void)setOrientationLockEnabled:(_Bool)arg1;
- (void)setIdleTimerEnabled:(_Bool)arg1;
- (void)setAlertsEnabled:(_Bool)arg1;
- (void)suspendAllDisplays;
- (void)setTestRunnerRecoveryApplicationBundleIdentifier:(id)arg1;

@end

