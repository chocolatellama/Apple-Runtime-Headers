//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SymptomEvaluator/SymptomExpertSystemState.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SymptomExpertSystemDiagnosingState : SymptomExpertSystemState
{
    NSDictionary *_triggeringSymptom;
}

+ (id)createStateWithLabel:(id)arg1 rank:(unsigned long long)arg2 entryPreds:(id)arg3;
@property(retain, nonatomic) NSDictionary *triggeringSymptom; // @synthesize triggeringSymptom=_triggeringSymptom;
- (void).cxx_destruct;

@end

