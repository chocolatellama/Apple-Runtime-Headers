//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowChooseCredentialsStepContext : PBCodable <NSCopying>
{
    NSMutableArray *_credentials;
    NSMutableArray *_remoteCredentials;
    _Bool _allowsManualEntry;
    struct {
        unsigned int allowsManualEntry:1;
    } _has;
}

+ (Class)credentialsType;
+ (Class)remoteCredentialsType;
@property(nonatomic) _Bool allowsManualEntry; // @synthesize allowsManualEntry=_allowsManualEntry;
@property(retain, nonatomic) NSMutableArray *credentials; // @synthesize credentials=_credentials;
@property(retain, nonatomic) NSMutableArray *remoteCredentials; // @synthesize remoteCredentials=_remoteCredentials;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasAllowsManualEntry;
- (id)credentialsAtIndex:(unsigned int)arg1;
- (unsigned int)credentialsCount;
- (void)addCredentials:(id)arg1;
- (void)clearCredentials;
- (id)remoteCredentialsAtIndex:(unsigned int)arg1;
- (unsigned int)remoteCredentialsCount;
- (void)addRemoteCredentials:(id)arg1;
- (void)clearRemoteCredentials;

@end

