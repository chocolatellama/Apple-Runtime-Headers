//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataCollector-Protocol.h>
#import <HealthDaemon/HDMetricsCollector-Protocol.h>

@class CMFitnessMachine, HDDataCollectorConfiguration, HDProfile, HKDevice, HKObserverSet, HKSource, NSDate, NSMapTable, NSMutableArray, NSMutableDictionary, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface HDFitnessMachineDataCollector : NSObject <HDDataCollector, HDMetricsCollector>
{
    unsigned long long _fitnessMachineType;
    NSMapTable *_aggregators;
    NSObject<OS_dispatch_queue> *_queue;
    HDDataCollectorConfiguration *_configuration;
    NSMutableDictionary *_previousDatums;
    NSMutableDictionary *_previousWorkoutMetrics;
    NSDate *_approximatedStartDate;
    NSMutableArray *_bufferedCharacteristics;
    NSSet *_localDevicePreferredObjectTypes;
    NSMutableDictionary *_bufferedMetrics;
    NSString *_machineBrand;
    HKDevice *_device;
    HKSource *_source;
    CMFitnessMachine *_cmFitnessMachine;
    HDProfile *_profile;
    HKObserverSet *_metricsCollectorObservers;
    NSDate *_machinePreferredUntilDate;
}

@property(retain, nonatomic) NSDate *machinePreferredUntilDate; // @synthesize machinePreferredUntilDate=_machinePreferredUntilDate;
- (void).cxx_destruct;
- (void)_queue_handleConfigurationChanged:(id)arg1;
- (void)unitTest_processDatumsByMetric:(id)arg1;
- (long long)_getLongFromDatum:(id)arg1 unitString:(id)arg2 defaultValue:(long long)arg3;
- (double)_getDoubleFromDatum:(id)arg1 unitString:(id)arg2 defaultValue:(double)arg3;
- (id)_cmFitnessMachineDataFromDatums:(id)arg1 timestamp:(id)arg2;
- (id)workoutMetricsFromDatums:(id)arg1;
- (void)_deliverBufferedMetrics;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (double)preferredAggregationIntervalForAggregator:(id)arg1;
- (id)identifierForDataAggregator:(id)arg1;
- (id)sourceForDataAggregator:(id)arg1;
- (void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2;
- (void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2;
- (id)_filterForFitnessMachineSamplesWithStartDate:(id)arg1 endDate:(id)arg2;
- (void)_queue_fitnessMachineSumForType:(id)arg1 dateInterval:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_queue_calculateDatumForAggregatorType:(id)arg1 currentDatum:(id)arg2 previousDatum:(id)arg3;
- (void)_queue_processDatumsByMetric:(id)arg1 timestamp:(id)arg2;
- (void)_queue_processDataCharacteristic:(id)arg1;
- (_Bool)_queue_shouldApplyDatum:(id)arg1 toAggregator:(id)arg2;
- (void)_queue_processBufferedCharacteristics;
- (void)_queue_handleDataCharacteristic:(id)arg1;
- (void)handleDataCharacteristic:(id)arg1;
- (void)configureCollectorsAndAggregators;
- (void)tearDown;
- (void)setMachineStartDate:(id)arg1;
- (void)setMachineBrand:(id)arg1;
- (id)initWithFitnessMachineType:(unsigned long long)arg1 profile:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

