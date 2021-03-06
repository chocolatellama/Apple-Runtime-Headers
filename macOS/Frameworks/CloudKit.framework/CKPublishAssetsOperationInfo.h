//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary;

@interface CKPublishAssetsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    NSArray *_recordIDs;
    NSDictionary *_fileNamesByAssetFieldNames;
    unsigned long long _requestedTTL;
    unsigned long long _URLOptions;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long URLOptions; // @synthesize URLOptions=_URLOptions;
@property(nonatomic) unsigned long long requestedTTL; // @synthesize requestedTTL=_requestedTTL;
@property(retain, nonatomic) NSDictionary *fileNamesByAssetFieldNames; // @synthesize fileNamesByAssetFieldNames=_fileNamesByAssetFieldNames;
@property(retain, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

