//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoLeash/NSCopying-Protocol.h>

@interface NFMProtoPlaySoundAndFlashLEDRequest : PBRequest <NSCopying>
{
    double _timeStamp;
    CDStruct_a6914f10 _has;
}

@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTimeStamp;

@end

