//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetricsKit/MTObject.h>

#import <MetricsKit/AMSMetricsBagContract-Protocol.h>
#import <MetricsKit/MTEventRecorderDelegate-Protocol.h>

@class AMSBag, AMSBagValue, AMSMetrics, NSDictionary, NSString;
@protocol AMSMescalBagContract, AMSMetricsBagContract;

@interface MTEventRecorderAMSMetricsDelegate : MTObject <AMSMetricsBagContract, MTEventRecorderDelegate>
{
    _Bool _monitorsLifecycleEvents;
    _Bool _personalizedWithItunesAccount;
    NSString *_containerId;
    NSDictionary *_lastMetricsDictionary;
    AMSBag *_amsBag;
    AMSMetrics *_bagBasedAMSMetrics;
    AMSMetrics *_contractBasedAMSMetrics;
    AMSMetrics *_backgroundAMSMetrics;
}

+ (id)bundleIdentifier;
@property(retain, nonatomic) AMSMetrics *backgroundAMSMetrics; // @synthesize backgroundAMSMetrics=_backgroundAMSMetrics;
@property(retain, nonatomic) AMSMetrics *contractBasedAMSMetrics; // @synthesize contractBasedAMSMetrics=_contractBasedAMSMetrics;
@property(retain, nonatomic) AMSMetrics *bagBasedAMSMetrics; // @synthesize bagBasedAMSMetrics=_bagBasedAMSMetrics;
@property(retain, nonatomic) AMSBag *amsBag; // @synthesize amsBag=_amsBag;
@property(retain, nonatomic) NSDictionary *lastMetricsDictionary; // @synthesize lastMetricsDictionary=_lastMetricsDictionary;
@property(retain, nonatomic) NSString *containerId; // @synthesize containerId=_containerId;
@property(nonatomic) _Bool personalizedWithItunesAccount; // @synthesize personalizedWithItunesAccount=_personalizedWithItunesAccount;
@property(nonatomic) _Bool monitorsLifecycleEvents; // @synthesize monitorsLifecycleEvents=_monitorsLifecycleEvents;
- (void).cxx_destruct;
- (_Bool)shouldFlushBackgroundMetrics;
@property(readonly, nonatomic) id <AMSMescalBagContract> mescalContract;
@property(readonly, nonatomic) AMSBagValue *trustedDomains;
@property(readonly, nonatomic) AMSBagValue *metricsDictionary;
- (id)flushUnreportedEvents;
- (id)sendMethod;
- (id)recordEvent:(id)arg1 toTopic:(id)arg2;
- (id)activeItunesAccount;
- (id)lookupItunesAccount:(id)arg1;
- (id)prepareMetrics;
- (id)initWithContainerId:(id)arg1 profileName:(id)arg2 profileVersion:(id)arg3;
- (id)initWithContainerId:(id)arg1 amsBag:(id)arg2;
- (id)initWithContainerId:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) AMSBagValue *TFOSamplingPercentage;
@property(readonly, nonatomic) AMSBagValue *TFOSamplingSessionDuration;
@property(readonly, nonatomic) AMSBagValue *TLSSamplingPercentage;
@property(readonly, nonatomic) AMSBagValue *TLSSamplingSessionDuration;
@property(readonly, nonatomic) AMSBagValue *apsAllowedProductTypes;
@property(readonly, nonatomic) AMSBagValue *apsEnabledPatterns;
@property(readonly, nonatomic) AMSBagValue *apsSamplingPercent;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) AMSBagValue *guidRegexes;
@property(readonly, nonatomic) AMSBagValue *guidSchemes;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <AMSMetricsBagContract> metricsContract;
@property(readonly, nonatomic) AMSBagValue *metricsURL;
@property(readonly, nonatomic) AMSBagValue *metricsUrl;
@property(readonly, nonatomic) AMSBagValue *storefrontSuffix;
@property(readonly) Class superclass;

@end

