//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Carousel/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface AWDCarouselWakeToFaceEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    float _assertionDurationMS;
    NSMutableArray *_complications;
    float _continuousDurationMS;
    float _displayOffMS;
    float _durationMS;
    NSString *_face;
    unsigned int _flipbookFrameRenderCount;
    unsigned int _numCompressions;
    unsigned int _numPageins;
    float _previousDisplayOnMS;
    float _sleepDurationMS;
    int _wakeReason;
    _Bool _assertionSuccess;
    _Bool _didSleep;
    _Bool _displayWakeTimeAfterEnd;
    _Bool _displayWakeTimeChanged;
    _Bool _isAlternate;
    _Bool _unableToRevertSleep;
    _Bool _wasAPAwake;
    _Bool _wasAfterCanSleep;
    _Bool _wasAfterWillSleep;
    _Bool _wasAwake;
    _Bool _wasCancelled;
    struct {
        unsigned int timestamp:1;
        unsigned int assertionDurationMS:1;
        unsigned int continuousDurationMS:1;
        unsigned int displayOffMS:1;
        unsigned int durationMS:1;
        unsigned int flipbookFrameRenderCount:1;
        unsigned int numCompressions:1;
        unsigned int numPageins:1;
        unsigned int previousDisplayOnMS:1;
        unsigned int sleepDurationMS:1;
        unsigned int wakeReason:1;
        unsigned int assertionSuccess:1;
        unsigned int didSleep:1;
        unsigned int displayWakeTimeAfterEnd:1;
        unsigned int displayWakeTimeChanged:1;
        unsigned int isAlternate:1;
        unsigned int unableToRevertSleep:1;
        unsigned int wasAPAwake:1;
        unsigned int wasAfterCanSleep:1;
        unsigned int wasAfterWillSleep:1;
        unsigned int wasAwake:1;
        unsigned int wasCancelled:1;
    } _has;
}

+ (Class)complicationsType;
@property(nonatomic) unsigned int flipbookFrameRenderCount; // @synthesize flipbookFrameRenderCount=_flipbookFrameRenderCount;
@property(nonatomic) float previousDisplayOnMS; // @synthesize previousDisplayOnMS=_previousDisplayOnMS;
@property(nonatomic) float displayOffMS; // @synthesize displayOffMS=_displayOffMS;
@property(nonatomic) float sleepDurationMS; // @synthesize sleepDurationMS=_sleepDurationMS;
@property(nonatomic) _Bool didSleep; // @synthesize didSleep=_didSleep;
@property(nonatomic) _Bool unableToRevertSleep; // @synthesize unableToRevertSleep=_unableToRevertSleep;
@property(nonatomic) _Bool wasAfterWillSleep; // @synthesize wasAfterWillSleep=_wasAfterWillSleep;
@property(nonatomic) _Bool wasAfterCanSleep; // @synthesize wasAfterCanSleep=_wasAfterCanSleep;
@property(nonatomic) float assertionDurationMS; // @synthesize assertionDurationMS=_assertionDurationMS;
@property(nonatomic) _Bool assertionSuccess; // @synthesize assertionSuccess=_assertionSuccess;
@property(nonatomic) _Bool displayWakeTimeChanged; // @synthesize displayWakeTimeChanged=_displayWakeTimeChanged;
@property(nonatomic) _Bool displayWakeTimeAfterEnd; // @synthesize displayWakeTimeAfterEnd=_displayWakeTimeAfterEnd;
@property(nonatomic) _Bool wasCancelled; // @synthesize wasCancelled=_wasCancelled;
@property(nonatomic) float continuousDurationMS; // @synthesize continuousDurationMS=_continuousDurationMS;
@property(nonatomic) _Bool wasAwake; // @synthesize wasAwake=_wasAwake;
@property(nonatomic) _Bool isAlternate; // @synthesize isAlternate=_isAlternate;
@property(nonatomic) unsigned int numCompressions; // @synthesize numCompressions=_numCompressions;
@property(nonatomic) unsigned int numPageins; // @synthesize numPageins=_numPageins;
@property(nonatomic) _Bool wasAPAwake; // @synthesize wasAPAwake=_wasAPAwake;
@property(retain, nonatomic) NSMutableArray *complications; // @synthesize complications=_complications;
@property(retain, nonatomic) NSString *face; // @synthesize face=_face;
@property(nonatomic) float durationMS; // @synthesize durationMS=_durationMS;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
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
@property(nonatomic) _Bool hasFlipbookFrameRenderCount;
@property(nonatomic) _Bool hasPreviousDisplayOnMS;
@property(nonatomic) _Bool hasDisplayOffMS;
@property(nonatomic) _Bool hasSleepDurationMS;
@property(nonatomic) _Bool hasDidSleep;
@property(nonatomic) _Bool hasUnableToRevertSleep;
@property(nonatomic) _Bool hasWasAfterWillSleep;
@property(nonatomic) _Bool hasWasAfterCanSleep;
@property(nonatomic) _Bool hasAssertionDurationMS;
@property(nonatomic) _Bool hasAssertionSuccess;
@property(nonatomic) _Bool hasDisplayWakeTimeChanged;
@property(nonatomic) _Bool hasDisplayWakeTimeAfterEnd;
@property(nonatomic) _Bool hasWasCancelled;
@property(nonatomic) _Bool hasContinuousDurationMS;
@property(nonatomic) _Bool hasWasAwake;
@property(nonatomic) _Bool hasIsAlternate;
@property(nonatomic) _Bool hasNumCompressions;
@property(nonatomic) _Bool hasNumPageins;
@property(nonatomic) _Bool hasWasAPAwake;
- (int)StringAsWakeReason:(id)arg1;
- (id)wakeReasonAsString:(int)arg1;
@property(nonatomic) _Bool hasWakeReason;
@property(nonatomic) int wakeReason; // @synthesize wakeReason=_wakeReason;
- (id)complicationsAtIndex:(unsigned int)arg1;
- (unsigned int)complicationsCount;
- (void)addComplications:(id)arg1;
- (void)clearComplications;
@property(readonly, nonatomic) _Bool hasFace;
@property(nonatomic) _Bool hasDurationMS;
@property(nonatomic) _Bool hasTimestamp;

@end

