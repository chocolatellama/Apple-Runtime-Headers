//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBCocoaTouchToolFoundation/IBBinaryArchiving-Protocol.h>
#import <IBCocoaTouchToolFoundation/NSCopying-Protocol.h>

@class IBUISimulatedBarMetrics, IBUISimulatedMetricChain, IBUITraitCollection, NSArray, NSNumber, NSString, NSValue;

@interface IBUISimulatedMetricsContainerRepresentation : NSObject <NSCopying, IBBinaryArchiving>
{
    IBUISimulatedMetricChain *_metricChain;
    NSValue *_simulatedScreenSize;
    IBUISimulatedBarMetrics *_simulatedTopBarMetrics;
    IBUISimulatedBarMetrics *_simulatedBottomBarMetrics;
    NSNumber *_statusBarStyle;
    NSArray *_metricsModifiers;
    IBUITraitCollection *_simulatedTraitCollection;
}

@property(retain, nonatomic) IBUITraitCollection *simulatedTraitCollection; // @synthesize simulatedTraitCollection=_simulatedTraitCollection;
@property(retain, nonatomic) NSArray *metricsModifiers; // @synthesize metricsModifiers=_metricsModifiers;
@property(retain, nonatomic) NSNumber *statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(retain, nonatomic) IBUISimulatedBarMetrics *simulatedBottomBarMetrics; // @synthesize simulatedBottomBarMetrics=_simulatedBottomBarMetrics;
@property(retain, nonatomic) IBUISimulatedBarMetrics *simulatedTopBarMetrics; // @synthesize simulatedTopBarMetrics=_simulatedTopBarMetrics;
@property(retain, nonatomic) NSValue *simulatedScreenSize; // @synthesize simulatedScreenSize=_simulatedScreenSize;
@property(retain, nonatomic) IBUISimulatedMetricChain *metricChain; // @synthesize metricChain=_metricChain;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)applySimulatedMetricsToViewController:(id)arg1 withContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

