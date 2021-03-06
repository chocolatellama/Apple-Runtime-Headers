//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoUpdateAccountWithIdentifierResponse : PBCodable <NSCopying>
{
    NSData *_accountData;
    NSData *_errorData;
    _Bool _pending;
    CDStruct_eab6c78c _has;
}

@property(retain, nonatomic) NSData *errorData; // @synthesize errorData=_errorData;
@property(retain, nonatomic) NSData *accountData; // @synthesize accountData=_accountData;
@property(nonatomic) _Bool pending; // @synthesize pending=_pending;
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
@property(readonly, nonatomic) _Bool hasErrorData;
@property(readonly, nonatomic) _Bool hasAccountData;
@property(nonatomic) _Bool hasPending;

@end

