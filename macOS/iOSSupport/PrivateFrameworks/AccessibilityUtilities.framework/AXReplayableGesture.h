//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/NSSecureCoding-Protocol.h>

@class NSArray;

@interface AXReplayableGesture : NSObject <NSSecureCoding>
{
    NSArray *_allEvents;
    BOOL _arePointsDeviceRelative;
}

+ (id)tapGestureForInterfaceOrientedPoint:(struct CGPoint)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)updateForLandscape:(BOOL)arg1;
- (BOOL)arePointsDeviceRelative;
- (double)forceForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2;
- (struct CGPoint)pointForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2;
- (double)timeAtEventIndex:(unsigned long long)arg1;
- (id)fingerIdentifiersAtEventIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfEvents;

@end

