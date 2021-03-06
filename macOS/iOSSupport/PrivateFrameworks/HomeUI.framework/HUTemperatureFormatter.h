//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMeasurementFormatter.h>

#import <HomeUI/HFTemperatureFormatter-Protocol.h>
#import <HomeUI/HFTemperatureUnitObserver-Protocol.h>

@class NSNumber, NSString;

@interface HUTemperatureFormatter : NSMeasurementFormatter <HFTemperatureUnitObserver, HFTemperatureFormatter>
{
    BOOL _inputIsCelsius;
    BOOL _outputIsCelsius;
    NSString *_fallbackTemperatureString;
    NSNumber *_stepValue;
}

@property(retain, nonatomic) NSNumber *stepValue; // @synthesize stepValue=_stepValue;
@property(nonatomic) BOOL outputIsCelsius; // @synthesize outputIsCelsius=_outputIsCelsius;
@property(nonatomic) BOOL inputIsCelsius; // @synthesize inputIsCelsius=_inputIsCelsius;
@property(copy, nonatomic) NSString *fallbackTemperatureString; // @synthesize fallbackTemperatureString=_fallbackTemperatureString;
- (void).cxx_destruct;
- (void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnit:(BOOL)arg2;
- (id)stringForObjectValue:(id)arg1;
@property(nonatomic) unsigned long long minimumFractionDigits;
@property(nonatomic) unsigned long long maximumFractionDigits;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

