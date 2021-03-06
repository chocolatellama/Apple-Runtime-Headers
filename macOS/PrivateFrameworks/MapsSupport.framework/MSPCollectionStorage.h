//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/NSCopying-Protocol.h>

@class NSData, NSString, PBUnknownFields;

@interface MSPCollectionStorage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_collectionDescription;
    NSData *_image;
    NSString *_imageURL;
    NSData *_itemData;
    NSString *_title;
}

@property(retain, nonatomic) NSData *itemData; // @synthesize itemData=_itemData;
@property(retain, nonatomic) NSString *collectionDescription; // @synthesize collectionDescription=_collectionDescription;
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSData *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasItemData;
@property(readonly, nonatomic) BOOL hasCollectionDescription;
@property(readonly, nonatomic) BOOL hasImageURL;
@property(readonly, nonatomic) BOOL hasImage;
@property(readonly, nonatomic) BOOL hasTitle;

@end

