//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSLBulletinAlertViewController, CSLBulletinCoalesceViewController, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;
@protocol CSLBulletinUIBuilderDelegate;

@interface CSLBulletinUIBuilder : NSObject
{
    NSDictionary *_bundleBySectionID;
    NSDictionary *_bundleByUniversalSectionID;
    NSDictionary *_bundleBySectionIDPrefix;
    NSArray *_dynamicBundles;
    NSMutableArray *_activeAsyncBuildItems;
    NSMutableArray *_prebuildingItems;
    NSMutableArray *_buildingItems;
    NSMutableArray *_completedNonCriticalItems;
    NSMutableArray *_completedCriticalItems;
    NSMutableDictionary *_pendingAlertItemsToBuild;
    CSLBulletinAlertViewController *_nonCriticalAlert;
    CSLBulletinAlertViewController *_criticalAlert;
    CSLBulletinCoalesceViewController *_nonCriticalMediumLook;
    CSLBulletinCoalesceViewController *_criticalMediumLook;
    NSArray *_alwaysAllowBuildFactoryClasses;
    unsigned int _pendingAlertItemsBeingBuiltCount;
    id <CSLBulletinUIBuilderDelegate> _delegate;
}

+ (id)sharedInstanceUnitTest;
+ (id)sharedInstance;
@property(nonatomic) __weak id <CSLBulletinUIBuilderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)mediumLookItemsFromNotificationCenterItem:(id)arg1;
- (void)_addItemsToMediumLook:(id)arg1 fromThreadGroups:(id)arg2 ncIcon:(id)arg3;
- (void)_addItemsToMediumLook:(id)arg1 fromBulletins:(id)arg2 ncIcon:(id)arg3;
- (id)bundleForBulletin:(id)arg1;
- (_Bool)sendBulletinItemToApp:(id)arg1;
- (_Bool)factorySupportThreadedLongLookForBulletin:(id)arg1;
- (_Bool)_factorySupportThreadedLongLookForAlertItem:(id)arg1 shouldKeepFactoryIfCreated:(_Bool)arg2;
- (_Bool)canAddThreadedBulletin:(id)arg1 toAlertItem:(id)arg2;
- (Class)_factoryClassForBulletin:(id)arg1;
- (Class)_factoryClassForBulletin:(id)arg1 attachment:(id)arg2 factory:(id *)arg3;
- (_Bool)singleNotificationPerAlertForBulletin:(id)arg1;
- (id)appBundleIdentifierForBulletin:(id)arg1;
- (id)appBundleIdentifierOverrideForBulletin:(id)arg1;
- (void)_queryFactoryForBulletin:(id)arg1 query:(CDUnknownBlockType)arg2;
- (void)primeFactoriesWithAlertItems:(id)arg1;
- (void)primeFactoriesForSectionIDs:(id)arg1;
- (_Bool)bulletinShouldCoelesceAllSectionSubtypes:(id)arg1;
- (void)invalidateFactoryForAlertItem:(id)arg1;
- (id)_createDefaultClientFactoryForBulletin:(id)arg1;
- (id)_cuisExtendedMetadataForAlertItem:(id)arg1;
- (id)createClientFactoryForBulletin:(id)arg1;
- (id)getClientFactoryCoalescableWithBulletin:(id)arg1;
- (id)getClientFactoryForBulletinIfExists:(id)arg1;
- (id)_buildItemForAlertItem:(id)arg1;
- (void)_loadClientFactoryBundles;
- (void)_setupQuickLookIconForBuildItem:(id)arg1;
- (void)_getCoalescingQuickLookIconForViewController:(id)arg1 bulletin:(id)arg2 comletion:(CDUnknownBlockType)arg3;
- (void)setupHeaderInQuickLongLook:(id)arg1 bulletin:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_getIconForBulletin:(id)arg1 customInfo:(id)arg2 shape:(unsigned int)arg3 size:(unsigned int)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_createDefaultPrimaryPageForBulletin:(id)arg1 factory:(id)arg2;
- (_Bool)isAlertItemCompleted:(id)arg1;
- (void)addBulletin:(id)arg1 toAlertItem:(id)arg2 soundWillPlay:(_Bool)arg3;
- (_Bool)wantsBulletin:(id)arg1 forAlertItem:(id *)arg2;
- (_Bool)containsBulletin:(id)arg1;
- (_Bool)replaceBulletinWithID:(id)arg1 withCopyBlock:(CDUnknownBlockType)arg2;
- (void)invalidateAlertItem:(id)arg1;
- (void)invalidateBulletinsOfIDs:(id)arg1;
- (void)invalidateBulletin:(id)arg1;
- (void)addCoalescablePresentationsToAlert:(id)arg1;
- (void)buildMediumLookAlertForBulletinItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)buildLongLookAlertForBulletinItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_buildPresentationForBulletinItem:(id)arg1 asyncFactory:(id)arg2 shouldBuildAndForget:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)buildPresentationForBulletinItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_queuedBuildPresentationsForBulletinItem:(id)arg1 addCompletionIfNeeded:(CDUnknownBlockType)arg2;
- (_Bool)_queueBuildPresentationForBulletinItem:(id)arg1;
- (void)_primeNotificationCenterItem:(id)arg1;
- (id)getAlertIncludeBulletinsOfAlert:(id)arg1 displaysCriticalIcon:(_Bool)arg2;
- (void)purgeCompletedAlert;
- (_Bool)isCompletedAlertCritical;
- (_Bool)hasCompletedAlert;
- (void)_removeAllCompletedBuildItems:(id)arg1 delivered:(_Bool)arg2;
- (id)getAlert;
- (void)_rebuildWithDefaultFactory:(id)arg1;
- (void)_rebuildItem:(id)arg1 withReplacement:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_rebuildItem:(id)arg1 withReplacement:(id)arg2;
- (void)_enumerateCompletedItemsContainers:(CDUnknownBlockType)arg1;
- (void)_forceBuildUIForItem:(id)arg1;
- (void)_createAlertWithBulletinItems:(id)arg1 critical:(_Bool)arg2;
- (void)_didRemoveCompletedItems:(id)arg1 forCritical:(_Bool)arg2 invalidated:(_Bool)arg3;
- (void)_finishBuildingItem:(id)arg1 didComplete:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_finishBuildingItem:(id)arg1 didComplete:(_Bool)arg2;
- (void)_validateAndPlaySoundForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_validateAndPlaySoundForItem:(id)arg1;
- (void)_startBatchTimerForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_createBulletinPresentationForBuildItem:(id)arg1;
- (void)_beginBuildingItem:(id)arg1;
- (void)_setupAndBuildAlertItem:(id)arg1 withIcon:(id)arg2;
- (id)_completedBuildItemsForBulletin:(id)arg1;
- (id)_currentCompletedBuildItems;
- (void)buildAlertForBulletinItem:(id)arg1;
- (id)_factoryForQueueBuildPresentationForAlertItem:(id)arg1;
- (id)init;
- (id)initWithLoadingBundles:(_Bool)arg1;

@end

