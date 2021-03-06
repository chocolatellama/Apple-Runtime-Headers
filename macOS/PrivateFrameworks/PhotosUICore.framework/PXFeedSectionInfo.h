//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PLAssetContainer-Protocol.h>

@class NSArray, NSCountedSet, NSDate, NSIndexSet, NSOrderedSet, NSString, PLCloudFeedEntry, PLCloudSharedAlbumInvitationRecord, PLManagedAsset, PLPhotoLibrary;
@protocol PLCloudSharedAlbumProtocol;

@interface PXFeedSectionInfo : NSObject <PLAssetContainer>
{
    BOOL _loaded;
    BOOL _shouldBeVisibleWhenEmpty;
    NSString *_transientIdentifier;
    PLManagedAsset *_keyAsset;
    PLManagedAsset *_secondaryKeyAsset;
    PLManagedAsset *_tertiaryKeyAsset;
    PLCloudFeedEntry *_cloudFeedEntry;
    long long _sectionType;
    NSDate *_date;
    id <PLCloudSharedAlbumProtocol> _sharedAlbum;
    NSString *_albumTitle;
    PLCloudSharedAlbumInvitationRecord *_invitationRecord;
    long long _numberOfItems;
    NSIndexSet *_excludedAssetIndexes;
}

+ (void)endCachingSharedAlbumsByGUIDs;
+ (void)beginCachingSharedAlbumsByGUIDs;
+ (id)sectionInfoWithCloudFeedEntry:(id)arg1;
@property(copy, nonatomic) NSIndexSet *excludedAssetIndexes; // @synthesize excludedAssetIndexes=_excludedAssetIndexes;
@property(nonatomic) BOOL shouldBeVisibleWhenEmpty; // @synthesize shouldBeVisibleWhenEmpty=_shouldBeVisibleWhenEmpty;
@property(nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property(retain, nonatomic) PLCloudSharedAlbumInvitationRecord *invitationRecord; // @synthesize invitationRecord=_invitationRecord;
@property(copy, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
@property(retain, nonatomic) id <PLCloudSharedAlbumProtocol> sharedAlbum; // @synthesize sharedAlbum=_sharedAlbum;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic, getter=isLoaded) BOOL loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic) long long sectionType; // @synthesize sectionType=_sectionType;
@property(readonly, nonatomic) PLCloudFeedEntry *cloudFeedEntry; // @synthesize cloudFeedEntry=_cloudFeedEntry;
@property(retain, nonatomic) PLManagedAsset *tertiaryKeyAsset; // @synthesize tertiaryKeyAsset=_tertiaryKeyAsset;
@property(retain, nonatomic) PLManagedAsset *secondaryKeyAsset; // @synthesize secondaryKeyAsset=_secondaryKeyAsset;
@property(retain, nonatomic) PLManagedAsset *keyAsset; // @synthesize keyAsset=_keyAsset;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *transientIdentifier; // @synthesize transientIdentifier=_transientIdentifier;
- (id)sharedAlbumWithGUID:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property(readonly, nonatomic) BOOL canShowAvalancheStacks;
@property(readonly, nonatomic) BOOL canShowComments;
- (BOOL)canPerformEditOperation:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL isMine;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) unsigned long long videosCount;
@property(readonly, nonatomic) unsigned long long photosCount;
@property(readonly, nonatomic) unsigned long long assetsCount;
@property(readonly, nonatomic) unsigned long long approximateCount;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
@property(readonly, retain, nonatomic) NSOrderedSet *assets;
@property(readonly, retain, nonatomic) NSString *title;
@property(readonly, retain, nonatomic) NSString *uuid;
- (long long)indexOfItemWithComment:(id)arg1;
- (long long)indexOfItemWithAsset:(id)arg1;
- (BOOL)containsAsset:(id)arg1;
- (BOOL)areAllAssetsLiked;
@property(readonly, nonatomic) NSCountedSet *countsByAssetDisplayType;
- (void)getCommentCount:(out unsigned long long *)arg1 likeCount:(out unsigned long long *)arg2;
- (void)getPhotoCount:(out unsigned long long *)arg1 videoCount:(out unsigned long long *)arg2;
- (id)likesForItemAtIndex:(long long)arg1;
- (id)commentsForItemAtIndex:(long long)arg1;
- (id)commentTextForItemAtIndex:(long long)arg1;
- (id)commentForItemAtIndex:(long long)arg1;
- (long long)indexOfFirstItemFromLastBatch;
- (id)batchIDForItemAtIndex:(long long)arg1;
- (id)captionForItemAtIndex:(long long)arg1;
- (id)assetsForItemAtIndex:(long long)arg1 maximumCount:(long long)arg2;
- (BOOL)hasPlayableAssetForItemAtIndex:(long long)arg1;
- (BOOL)hasMultipleAssetsForItemAtIndex:(long long)arg1;
- (id)assetForItemAtIndex:(long long)arg1;
- (long long)typeForItemAtIndex:(long long)arg1;
- (void)updateFromCloudFeedEntry;
- (void)reload;
@property(readonly, nonatomic) PLPhotoLibrary *photoLibrary;
- (id)initWithCloudFeedEntry:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, retain, nonatomic) NSDate *endDate;
@property(readonly) unsigned long long hash;
@property(readonly, retain, nonatomic) NSDate *startDate;
@property(readonly) Class superclass;

@end

