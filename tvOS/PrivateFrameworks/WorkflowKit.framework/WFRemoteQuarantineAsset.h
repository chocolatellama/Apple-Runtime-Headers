//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFCloudKitItem-Protocol.h>

@class CKRecordID, NSString, WFFileRepresentation;

@interface WFRemoteQuarantineAsset : NSObject <WFCloudKitItem>
{
    CKRecordID *identifier;
    long long _compatibilityVersion;
    long long _contentVersion;
    WFFileRepresentation *_assetDataFile;
    NSString *_configuration;
}

+ (id)properties;
+ (id)recordType;
@property(copy, nonatomic) NSString *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) WFFileRepresentation *assetDataFile; // @synthesize assetDataFile=_assetDataFile;
@property(nonatomic) long long contentVersion; // @synthesize contentVersion=_contentVersion;
@property(nonatomic) long long compatibilityVersion; // @synthesize compatibilityVersion=_compatibilityVersion;
@property(readonly, nonatomic) CKRecordID *identifier; // @synthesize identifier;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

