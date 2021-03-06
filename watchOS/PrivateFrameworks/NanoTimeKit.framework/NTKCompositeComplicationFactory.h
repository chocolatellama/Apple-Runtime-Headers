//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKit/NTKFaceViewComplicationFactory-Protocol.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSString;

@interface NTKCompositeComplicationFactory : NSObject <NTKFaceViewComplicationFactory>
{
    NSMutableDictionary *_factoriesBySlot;
    NSMutableOrderedSet *_factories;
}

@property(retain, nonatomic) NSMutableOrderedSet *factories; // @synthesize factories=_factories;
@property(retain, nonatomic) NSMutableDictionary *factoriesBySlot; // @synthesize factoriesBySlot=_factoriesBySlot;
- (void).cxx_destruct;
- (_Bool)slotSupportsCurvedText:(id)arg1;
- (id)newLegacyViewForComplication:(id)arg1 family:(int)arg2 slot:(id)arg3;
- (void)loadLayoutRules;
- (int)legacyLayoutOverrideforComplicationType:(unsigned int)arg1 slot:(id)arg2;
- (id)keylineViewForComplicationSlot:(id)arg1;
- (unsigned int)keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (id)customEditOptionContainerViewForSlot:(id)arg1;
- (id)pickerMaskForSlot:(id)arg1;
- (void)curvedComplicationCircleRadius:(float *)arg1 centerAngle:(float *)arg2 maxAngularWidth:(float *)arg3 circleCenter:(struct CGPoint *)arg4 interior:(_Bool *)arg5 forSlot:(id)arg6;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (int)complicationPickerStyleForSlot:(id)arg1;
- (void)deregisterFactoryAtSlots:(id)arg1;
- (void)deregisterFactoryAtSlot:(id)arg1;
- (void)registerFactory:(id)arg1 forSlots:(id)arg2;
- (void)registerFactory:(id)arg1 forSlot:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

