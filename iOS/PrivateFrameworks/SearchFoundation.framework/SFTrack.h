//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFTrack-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL, SFActionItem;

@interface SFTrack : NSObject <SFTrack, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int highlighted:1;
    } _has;
    _Bool _highlighted;
    NSString *_title;
    NSString *_number;
    NSString *_duration;
    NSURL *_preview;
    SFActionItem *_playAction;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) SFActionItem *playAction; // @synthesize playAction=_playAction;
@property(copy, nonatomic) NSURL *preview; // @synthesize preview=_preview;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(copy, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *number; // @synthesize number=_number;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasHighlighted;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

