//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ContentKit/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFPBAddShortcutEvent : PBCodable <NSCopying>
{
    unsigned int _actionCount;
    NSString *_addToSiriBundleIdentifier;
    NSString *_galleryIdentifier;
    NSString *_key;
    int _source;
    CDStruct_fce072d8 _has;
}

@property(retain, nonatomic) NSString *galleryIdentifier; // @synthesize galleryIdentifier=_galleryIdentifier;
@property(retain, nonatomic) NSString *addToSiriBundleIdentifier; // @synthesize addToSiriBundleIdentifier=_addToSiriBundleIdentifier;
@property(nonatomic) unsigned int actionCount; // @synthesize actionCount=_actionCount;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasGalleryIdentifier;
@property(readonly, nonatomic) _Bool hasAddToSiriBundleIdentifier;
@property(nonatomic) _Bool hasActionCount;
- (int)StringAsSource:(id)arg1;
- (id)sourceAsString:(int)arg1;
@property(nonatomic) _Bool hasSource;
@property(nonatomic) int source; // @synthesize source=_source;
@property(readonly, nonatomic) _Bool hasKey;

@end

