//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PSIReusableObject.h>

@class NSMutableString, NSString;

@interface PSIGroup : PSIReusableObject
{
    NSMutableString *_contentString;
    NSMutableString *_normalizedString;
    NSMutableString *_lookupIdentifier;
    unsigned long long _compressedRanges[2];
    struct _NSRange _tokenRanges[8];
    unsigned int _tokenRangesCount;
    short _category;
    struct __CFArray *_assetIds;
    struct __CFArray *_collectionIds;
    unsigned long long _groupId;
    unsigned long long _owningGroupId;
}

+ (void)_getTokenRanges:(struct _NSRange [8])arg1 fromCompressedRanges:(unsigned long long [2])arg2;
+ (void)getCompressedRanges:(unsigned long long [2])arg1 fromTokenRanges:(CDStruct_dff5684f *)arg2 count:(long)arg3;
@property(retain, nonatomic) struct __CFArray *collectionIds; // @synthesize collectionIds=_collectionIds;
@property(retain, nonatomic) struct __CFArray *assetIds; // @synthesize assetIds=_assetIds;
@property(readonly, nonatomic) NSString *lookupIdentifier; // @synthesize lookupIdentifier=_lookupIdentifier;
@property(readonly, nonatomic) NSString *normalizedString; // @synthesize normalizedString=_normalizedString;
@property(readonly, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property(nonatomic) short category; // @synthesize category=_category;
@property(nonatomic) unsigned long long owningGroupId; // @synthesize owningGroupId=_owningGroupId;
@property(nonatomic) unsigned long long groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;
- (void)unionIdsWithGroup:(id)arg1;
- (void)unionCollectionIdsWithGroup:(id)arg1;
- (unsigned long long)groupIdForObjectLookup;
- (void)prepareFromFilenameStatement:(struct sqlite3_stmt *)arg1;
- (void)prepareFromStatement:(struct sqlite3_stmt *)arg1;
- (void)prepareForReuse;
- (struct _NSRange)tokenRangeAtIndex:(unsigned int)arg1;
- (unsigned int)tokenRangesCount;
- (int)compareToGroup:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_tokenRangesDescription;
- (id)description;
- (void)dealloc;
- (id)initWithContentString:(id)arg1 lookIdentifier:(id)arg2 category:(short)arg3 owningGroupId:(long long)arg4;
- (id)init;

@end

