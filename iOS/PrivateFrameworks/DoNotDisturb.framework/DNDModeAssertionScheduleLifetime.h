//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DoNotDisturb/DNDModeAssertionLifetime.h>

@class NSString;

@interface DNDModeAssertionScheduleLifetime : DNDModeAssertionLifetime
{
    NSString *_scheduleIdentifier;
    unsigned long long _behavior;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
@property(readonly, copy, nonatomic) NSString *scheduleIdentifier; // @synthesize scheduleIdentifier=_scheduleIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)lifetimeType;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithScheduleIdentifier:(id)arg1 behavior:(unsigned long long)arg2;

@end

