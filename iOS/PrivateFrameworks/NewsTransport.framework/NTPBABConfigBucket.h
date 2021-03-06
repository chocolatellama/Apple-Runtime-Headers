//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NTPBConfig;

@interface NTPBABConfigBucket : PBCodable <NSCopying>
{
    long long _bucketCeiling;
    long long _bucketFloor;
    NTPBConfig *_config;
    struct {
        unsigned int bucketCeiling:1;
        unsigned int bucketFloor:1;
    } _has;
}

@property(retain, nonatomic) NTPBConfig *config; // @synthesize config=_config;
@property(nonatomic) long long bucketCeiling; // @synthesize bucketCeiling=_bucketCeiling;
@property(nonatomic) long long bucketFloor; // @synthesize bucketFloor=_bucketFloor;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasConfig;
@property(nonatomic) _Bool hasBucketCeiling;
@property(nonatomic) _Bool hasBucketFloor;

@end

