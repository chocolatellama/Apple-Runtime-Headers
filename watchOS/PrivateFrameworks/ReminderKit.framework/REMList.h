//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/REMDAChangeTrackableFetchableModel-Protocol.h>
#import <ReminderKit/REMDAChangedModelObjectResult-Protocol.h>
#import <ReminderKit/REMExternalSyncMetadataProviding-Protocol.h>
#import <ReminderKit/REMObjectIDProviding-Protocol.h>
#import <ReminderKit/_REMDAChangeTrackableModel-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSOrderedSet, NSSet, NSString, REMAccount, REMColor, REMListAppearanceContext, REMListCalDAVNotificationContext, REMListShareeContext, REMListStorage, REMListSublistContext, REMObjectID, REMResolutionTokenMap, REMStore;

@interface REMList : NSObject <REMDAChangeTrackableFetchableModel, REMDAChangedModelObjectResult, _REMDAChangeTrackableModel, REMObjectIDProviding, REMExternalSyncMetadataProviding>
{
    REMStore *_store;
    REMListStorage *_storage;
    REMAccount *_account;
    REMList *_parentList;
}

+ (id)cdEntityName;
+ (id)objectIDWithUUID:(id)arg1;
+ (id)newObjectID;
+ (_Bool)isSharedWithShareeCount:(unsigned int)arg1 sharingStatus:(int)arg2;
+ (id)localAccountDefaultListID;
+ (id)siriFoundInAppsListID;
+ (id)fetchRequestWithPredicateDescriptor:(id)arg1 sortDescriptors:(id)arg2;
+ (CDUnknownBlockType)rem_DA_deletedKeyFromLazyDeletedModelObjectBlock;
+ (CDUnknownBlockType)rem_DA_deletedKeyFromTombstoneBlock;
+ (CDUnknownBlockType)rem_DA_fetchByObjectIDsBlock;
+ (CDUnknownBlockType)rem_DA_fetchByObjectIDBlock;
+ (_Bool)rem_DA_supportsLazyDelete;
+ (_Bool)rem_DA_supportsFetching;
@property(retain, nonatomic) REMList *parentList; // @synthesize parentList=_parentList;
@property(readonly, nonatomic) REMAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) REMListStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) REMStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)hack_overrideReminderIDsOrderingWithOrderedObjectIDs:(id)arg1;
@property(readonly, nonatomic) NSString *externalIdentifierForMarkedForDeletionObject;
@property(readonly, nonatomic) REMObjectID *remObjectID;
- (id)fetchRemindersWithExternalIdentifiers:(id)arg1 error:(id *)arg2;
- (id)fetchReminderWithExternalIdentifier:(id)arg1 error:(id *)arg2;
- (id)sharingStatusText;
- (id)formattedSharedOwnerName;
- (id)fetchRemindersAndSubtasksWithError:(id *)arg1;
- (id)fetchRemindersWithError:(id *)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly, nonatomic) _Bool isSharedToMe;
@property(readonly, nonatomic) _Bool isOwnedByMe;
@property(readonly, nonatomic) _Bool isShared;
@property(readonly, nonatomic) _Bool canBeIncludedInGroup;
@property(readonly, nonatomic) _Bool canBeShared;
- (id)ekColor;
@property(readonly, nonatomic) NSOrderedSet *reminderIDsOrdering;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) REMListShareeContext *shareeContext;
@property(readonly, nonatomic) REMListCalDAVNotificationContext *calDAVNotificationContext;
@property(readonly, nonatomic) REMListSublistContext *sublistContext;
@property(readonly, nonatomic) REMListAppearanceContext *appearanceContext;
- (id)initWithStore:(id)arg1 account:(id)arg2 storage:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) REMObjectID *accountID; // @dynamic accountID;
@property(readonly, nonatomic) NSString *badgeEmblem; // @dynamic badgeEmblem;
@property(readonly, nonatomic) NSArray *calDAVNotifications; // @dynamic calDAVNotifications;
@property(readonly, nonatomic) REMColor *color; // @dynamic color;
@property(readonly, nonatomic) NSDictionary *daBulkRequests; // @dynamic daBulkRequests;
@property(readonly, nonatomic) int daDisplayOrder; // @dynamic daDisplayOrder;
@property(readonly, nonatomic) NSString *daExternalIdentificationTag; // @dynamic daExternalIdentificationTag;
@property(readonly, nonatomic) _Bool daIsEventOnlyContainer; // @dynamic daIsEventOnlyContainer;
@property(readonly, nonatomic) _Bool daIsImmutable; // @dynamic daIsImmutable;
@property(readonly, nonatomic) _Bool daIsNotificationsCollection; // @dynamic daIsNotificationsCollection;
@property(readonly, nonatomic) _Bool daIsReadOnly; // @dynamic daIsReadOnly;
@property(readonly, nonatomic) NSString *daPushKey; // @dynamic daPushKey;
@property(readonly, nonatomic) NSString *daSyncToken; // @dynamic daSyncToken;
@property(readonly, nonatomic) NSString *displayName; // @dynamic displayName;
@property(readonly, nonatomic) NSString *externalIdentifier; // @dynamic externalIdentifier;
@property(readonly, nonatomic) NSString *externalModificationTag; // @dynamic externalModificationTag;
@property(readonly, nonatomic) _Bool isGroup; // @dynamic isGroup;
@property(nonatomic) _Bool isPlaceholder; // @dynamic isPlaceholder;
@property(readonly, copy, nonatomic) NSDate *lastUserAccessDate; // @dynamic lastUserAccessDate;
@property(readonly, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) REMObjectID *objectID; // @dynamic objectID;
@property(readonly, nonatomic) REMObjectID *parentAccountID; // @dynamic parentAccountID;
@property(readonly, nonatomic) REMObjectID *parentListID; // @dynamic parentListID;
@property(readonly, nonatomic) NSData *reminderIDsMergeableOrderingData; // @dynamic reminderIDsMergeableOrderingData;
@property(readonly, nonatomic) NSSet *reminderIDsToUndelete; // @dynamic reminderIDsToUndelete;
@property(readonly, nonatomic) _Bool remindersICSDisplayOrderChanged; // @dynamic remindersICSDisplayOrderChanged;
@property(readonly, nonatomic) REMResolutionTokenMap *resolutionTokenMap; // @dynamic resolutionTokenMap;
@property(readonly, nonatomic) NSString *sharedOwnerAddress; // @dynamic sharedOwnerAddress;
@property(readonly, nonatomic) REMObjectID *sharedOwnerID; // @dynamic sharedOwnerID;
@property(readonly, nonatomic) NSString *sharedOwnerName; // @dynamic sharedOwnerName;
@property(readonly, nonatomic) NSArray *sharees; // @dynamic sharees;
@property(readonly, nonatomic) int sharingStatus; // @dynamic sharingStatus;
@property(readonly, nonatomic) _Bool showingLargeAttachments; // @dynamic showingLargeAttachments;
@property(readonly) Class superclass;

@end

