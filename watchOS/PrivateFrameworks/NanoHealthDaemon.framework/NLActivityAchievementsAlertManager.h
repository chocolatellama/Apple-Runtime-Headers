//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoHealthDaemon/ACHAchievementStoreObserving-Protocol.h>
#import <NanoHealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <NanoHealthDaemon/NLBridgeSettingsObserver-Protocol.h>
#import <NanoHealthDaemon/NLCoachingSubmanager-Protocol.h>

@class ACHAchievementStore, FITypicalDayActivityModel, HDDatabase, HDKeyValueDomain, NLBridgeSettings, NSCalendar, NSDate, NSMutableDictionary, NSSet, NSString;
@protocol NLCoachingSubmanagerDelegate;

@interface NLActivityAchievementsAlertManager : NSObject <ACHAchievementStoreObserving, NLBridgeSettingsObserver, HDDatabaseProtectedDataObserver, NLCoachingSubmanager>
{
    id <NLCoachingSubmanagerDelegate> _coachingSubmanagerDelegate;
    FITypicalDayActivityModel *_typicalDayModel;
    ACHAchievementStore *_achievementStore;
    HDDatabase *_database;
    NLBridgeSettings *_bridgeSettings;
    HDKeyValueDomain *_earnedKeyValueDomain;
    HDKeyValueDomain *_unearnedKeyValueDomain;
    NSCalendar *_gregorianCalendar;
    NSMutableDictionary *_achievementsToAlert;
    NSSet *_pendingAlertRequests;
    NSSet *_achievementsToAlertWhenProtectedDataAvailable;
    NSSet *_alertedAchievementsToRegisterWhenProtectedDataAvailable;
}

+ (id)submanagerIdentifier;
+ (id)coachingAlertRequestForAchievement:(id)arg1;
@property(retain, nonatomic) NSSet *alertedAchievementsToRegisterWhenProtectedDataAvailable; // @synthesize alertedAchievementsToRegisterWhenProtectedDataAvailable=_alertedAchievementsToRegisterWhenProtectedDataAvailable;
@property(retain, nonatomic) NSSet *achievementsToAlertWhenProtectedDataAvailable; // @synthesize achievementsToAlertWhenProtectedDataAvailable=_achievementsToAlertWhenProtectedDataAvailable;
@property(retain, nonatomic) NSSet *pendingAlertRequests; // @synthesize pendingAlertRequests=_pendingAlertRequests;
@property(retain, nonatomic) NSMutableDictionary *achievementsToAlert; // @synthesize achievementsToAlert=_achievementsToAlert;
@property(retain, nonatomic) NSCalendar *gregorianCalendar; // @synthesize gregorianCalendar=_gregorianCalendar;
@property(retain, nonatomic) HDKeyValueDomain *unearnedKeyValueDomain; // @synthesize unearnedKeyValueDomain=_unearnedKeyValueDomain;
@property(retain, nonatomic) HDKeyValueDomain *earnedKeyValueDomain; // @synthesize earnedKeyValueDomain=_earnedKeyValueDomain;
@property(retain, nonatomic) NLBridgeSettings *bridgeSettings; // @synthesize bridgeSettings=_bridgeSettings;
@property(nonatomic) __weak HDDatabase *database; // @synthesize database=_database;
@property(nonatomic) __weak ACHAchievementStore *achievementStore; // @synthesize achievementStore=_achievementStore;
@property(nonatomic) __weak FITypicalDayActivityModel *typicalDayModel; // @synthesize typicalDayModel=_typicalDayModel;
@property(nonatomic) __weak id <NLCoachingSubmanagerDelegate> coachingSubmanagerDelegate; // @synthesize coachingSubmanagerDelegate=_coachingSubmanagerDelegate;
- (void).cxx_destruct;
- (double)_delayAfterWristOnForNextDayScheduledAchievements;
- (void)privacySettingsDidChange:(id)arg1;
- (void)settingsDidChange:(id)arg1;
- (void)wristOnStateChangedTo:(_Bool)arg1;
- (_Bool)requiresMoveGoal;
- (int)minimumRecentActiveDays;
- (void)daemonAndCoachingManagerReady;
- (id)coachingAlertRequestsWhenForcedWithArguments:(id)arg1;
- (void)coachingAlertRequestsWereProcessed:(id)arg1 acceptedRequests:(id)arg2;
- (id)coachingAlertRequestsForPollingReason:(unsigned int)arg1;
- (void)coachingAlertRequestDidCompleteWithResponse:(id)arg1;
- (_Bool)alertsEnabled;
- (_Bool)shouldAlertForAchievement:(id)arg1;
- (_Bool)achievementAlertPredicateAllowsAlerting:(id)arg1;
- (_Bool)unearnedAchievementWasEverAlerted:(id)arg1;
- (_Bool)earnedAchievementWasEverAlerted:(id)arg1;
- (_Bool)achievementAlertDateReached:(id)arg1;
- (_Bool)achievement:(id)arg1 alertableForWatchCountryCode:(id)arg2;
- (_Bool)achievementTypeRequiresUnearnedAlert:(id)arg1;
- (_Bool)earnedAchievementWasAlertedToday:(id)arg1;
- (_Bool)achievementWasEarnedToday:(id)arg1;
- (_Bool)achievementWasEarnedOnAWatch:(id)arg1;
- (void)registerAchievementAlerted:(id)arg1;
- (void)alertAchievements:(id)arg1;
- (void)achievementStore:(id)arg1 didUpdateAchievements:(id)arg2;
- (void)achievementStore:(id)arg1 didRemoveAchievements:(id)arg2;
- (void)achievementStore:(id)arg1 didAddAchievements:(id)arg2;
- (void)achievementStoreDidFinishInitialFetch:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
@property(retain, nonatomic) NSDate *lastScheduledWristOnAlertDate;
- (id)initWithProfile:(id)arg1 bridgeSettings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

