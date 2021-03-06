//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProviderDaemon/FPDLifetimeExtender-Protocol.h>
#import <FileProviderDaemon/FPXEnumeratorObserver-Protocol.h>

@class FPDDomain, FPDExtensionManager, FPItem, FPItemID, NSData, NSString, NSURL;
@protocol FPXEnumerator, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDFilePresenter : NSObject <FPXEnumeratorObserver, FPDLifetimeExtender>
{
    FPDExtensionManager *_manager;
    id <FPXEnumerator> _enumerator;
    NSObject<OS_dispatch_queue> *_queue;
    FPDDomain *_domain;
    NSData *_changeToken;
    FPItemID *_observedItemID;
    FPItem *_currentItem;
    _Bool _isFetchingChanges;
    _Bool _shouldRefetchChanges;
    _Bool _presenterWantsUbiqitousAttributes;
    _Bool _isEnumeratorActive;
    _Bool _isFrontmost;
    int _requestEffectivePID;
    int _presenterPid;
    id _filePresenterID;
    FPItemID *_itemID;
    NSURL *_presentedItemURL;
}

+ (id)presenter:(id)arg1 withItemID:(id)arg2 pid:(int)arg3 urlHint:(id)arg4 domain:(id)arg5;
@property(retain, nonatomic) FPDDomain *domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) NSURL *presentedItemURL; // @synthesize presentedItemURL=_presentedItemURL;
@property(nonatomic) _Bool isFrontmost; // @synthesize isFrontmost=_isFrontmost;
@property(nonatomic) int presenterPid; // @synthesize presenterPid=_presenterPid;
@property(retain, nonatomic) FPItemID *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) FPItemID *observedItemID; // @synthesize observedItemID=_observedItemID;
@property(nonatomic) _Bool isEnumeratorActive; // @synthesize isEnumeratorActive=_isEnumeratorActive;
@property(copy, nonatomic) id filePresenterID; // @synthesize filePresenterID=_filePresenterID;
@property(readonly) int requestEffectivePID; // @synthesize requestEffectivePID=_requestEffectivePID;
- (void).cxx_destruct;
@property(readonly) NSString *prettyDescription;
- (void)dumpStateTo:(id)arg1;
- (void)_fetchUpdates;
- (void)_fetchChangeToken;
- (void)didUpdateItem:(id)arg1;
- (void)enumerationResultsDidChange;
- (void)becomeFrontmost:(_Bool)arg1 inWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_newCoordinator;
- (void)receiveUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2;
- (void)_destroyEnumerator;
- (void)_enumeratorRequestDidFailWithXPCError:(id)arg1 section:(unsigned long long)arg2;
- (void)stop;
- (void)start;
- (id)enumerator;
@property(readonly, copy) NSString *description;
- (id)_presentedItemDescription:(_Bool)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithIdentifier:(id)arg1 itemID:(id)arg2 pid:(int)arg3 urlHint:(id)arg4 domain:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

