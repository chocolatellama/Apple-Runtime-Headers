//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPSectionedIdentifierListEntry.h>

#import <MediaPlayer/MPSectionedIdentifierListEnumerationItem-Protocol.h>

@class NSMutableArray, NSString;

@interface MPSectionedIdentifierListItemEntry : MPSectionedIdentifierListEntry <MPSectionedIdentifierListEnumerationItem>
{
    _Bool _hasClones;
    _Bool _dataSourceCloned;
    _Bool _dataSourceMoved;
    _Bool _userRemoved;
    _Bool _userMoved;
    _Bool _userCloned;
    NSString *_itemIdentifier;
    MPSectionedIdentifierListItemEntry *_rootEntry;
    NSMutableArray *_clonedEntries;
}

+ (_Bool)supportsSecureCoding;
+ (id)itemEntryWithSectionIdentifier:(id)arg1 itemIdentifier:(id)arg2;
+ (id)itemEntryWithSectionIdentifier:(id)arg1 itemIdentifier:(id)arg2 generationPrefix:(id)arg3;
@property(readonly, nonatomic, getter=isUserCloned) _Bool userCloned; // @synthesize userCloned=_userCloned;
@property(readonly, nonatomic, getter=isUserMoved) _Bool userMoved; // @synthesize userMoved=_userMoved;
@property(readonly, nonatomic, getter=isUserRemoved) _Bool userRemoved; // @synthesize userRemoved=_userRemoved;
@property(readonly, nonatomic, getter=isDataSourceMoved) _Bool dataSourceMoved; // @synthesize dataSourceMoved=_dataSourceMoved;
@property(readonly, nonatomic, getter=isDataSourceCloned) _Bool dataSourceCloned; // @synthesize dataSourceCloned=_dataSourceCloned;
@property(retain, nonatomic) NSMutableArray *clonedEntries; // @synthesize clonedEntries=_clonedEntries;
@property(readonly, nonatomic) _Bool hasClones; // @synthesize hasClones=_hasClones;
@property(nonatomic) __weak MPSectionedIdentifierListItemEntry *rootEntry; // @synthesize rootEntry=_rootEntry;
@property(readonly, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (void).cxx_destruct;
- (long long)_generationNumber;
- (void)prepareForDealloc;
- (id)newClonedEntry;
@property(readonly, nonatomic) MPSectionedIdentifierListItemEntry *latestDataSourceClone;
@property(readonly, nonatomic) MPSectionedIdentifierListItemEntry *latestUserClone;
@property(readonly, nonatomic) CDStruct_d4f770cf state;
@property(readonly, nonatomic, getter=isRemoved) _Bool removed;
- (void)setUserCloned;
- (void)setUserMoved;
- (void)setUserRemoved;
- (void)setDataSourceMoved;
- (void)setDataSourceCloned;
- (_Bool)isDataSourceRemoved;
- (void)setDataSourceRemoved;
@property(readonly, nonatomic) long long entryType;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) long long branchDepth;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *sectionIdentifier;
@property(readonly) Class superclass;

@end

