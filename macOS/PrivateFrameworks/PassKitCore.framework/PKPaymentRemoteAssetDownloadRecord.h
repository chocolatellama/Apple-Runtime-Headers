//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentBackgroundDownloadRecord.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSURL;

@interface PKPaymentRemoteAssetDownloadRecord : PKPaymentBackgroundDownloadRecord <NSSecureCoding>
{
    NSURL *_passURL;
    NSDictionary *_remoteAssetsByTaskIdentifier;
    NSDictionary *_remoteAssetsByRecordName;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *remoteAssetsByRecordName; // @synthesize remoteAssetsByRecordName=_remoteAssetsByRecordName;
@property(retain, nonatomic) NSDictionary *remoteAssetsByTaskIdentifier; // @synthesize remoteAssetsByTaskIdentifier=_remoteAssetsByTaskIdentifier;
@property(retain, nonatomic) NSURL *passURL; // @synthesize passURL=_passURL;
- (void).cxx_destruct;
- (void)removeRemoteCloudStoreAssetForRecordName:(id)arg1;
- (void)removeRemoteURLAssetForTaskIdentifier:(id)arg1;
- (void)setRemoteCloudStoreAsset:(id)arg1 forRecordName:(id)arg2;
- (void)setRemoteURLAsset:(id)arg1 forTaskIdentifier:(id)arg2;
- (BOOL)hasOutstandingRemoteAssetTasks;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

