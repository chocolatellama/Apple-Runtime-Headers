//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ContentKit/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFPBDailyStatusEvent : PBCodable <NSCopying>
{
    NSString *_key;
    BOOL _homeAutomationsEnabled;
    BOOL _installed;
    BOOL _personalAutomationsEnabled;
    BOOL _sharingEnabled;
    struct {
        unsigned int homeAutomationsEnabled:1;
        unsigned int installed:1;
        unsigned int personalAutomationsEnabled:1;
        unsigned int sharingEnabled:1;
    } _has;
}

@property(nonatomic) BOOL homeAutomationsEnabled; // @synthesize homeAutomationsEnabled=_homeAutomationsEnabled;
@property(nonatomic) BOOL personalAutomationsEnabled; // @synthesize personalAutomationsEnabled=_personalAutomationsEnabled;
@property(nonatomic) BOOL sharingEnabled; // @synthesize sharingEnabled=_sharingEnabled;
@property(nonatomic) BOOL installed; // @synthesize installed=_installed;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasHomeAutomationsEnabled;
@property(nonatomic) BOOL hasPersonalAutomationsEnabled;
@property(nonatomic) BOOL hasSharingEnabled;
@property(nonatomic) BOOL hasInstalled;
@property(readonly, nonatomic) BOOL hasKey;

@end

