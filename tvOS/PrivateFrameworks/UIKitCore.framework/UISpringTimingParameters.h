//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/UITimingCurveProvider-Protocol.h>

@class UICubicTimingParameters;

@interface UISpringTimingParameters : NSObject <NSSecureCoding, UITimingCurveProvider>
{
    _Bool _implicitDuration;
    double _dampingRatio;
    double _mass;
    double _stiffness;
    double _damping;
    struct CGVector _initialVelocity;
}

+ (void)_convertMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 toDampingRatio:(double *)arg4 response:(double *)arg5;
+ (void)_convertDampingRatio:(double)arg1 response:(double)arg2 toMass:(double *)arg3 stiffness:(double *)arg4 damping:(double *)arg5;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) double damping; // @synthesize damping=_damping;
@property(nonatomic) double stiffness; // @synthesize stiffness=_stiffness;
@property(nonatomic) double mass; // @synthesize mass=_mass;
@property(nonatomic) _Bool implicitDuration; // @synthesize implicitDuration=_implicitDuration;
@property(readonly, nonatomic) double dampingRatio; // @synthesize dampingRatio=_dampingRatio;
@property(readonly, nonatomic) struct CGVector initialVelocity; // @synthesize initialVelocity=_initialVelocity;
@property(readonly, nonatomic) double settlingDuration;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) UISpringTimingParameters *springTimingParameters;
@property(readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDampingRatio:(double)arg1 response:(double)arg2;
- (id)initWithDampingRatio:(double)arg1 response:(double)arg2 initialVelocity:(struct CGVector)arg3;
- (id)initWithDampingRatio:(double)arg1;
- (id)initWithDampingRatio:(double)arg1 initialVelocity:(struct CGVector)arg2;
- (id)init;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(struct CGVector)arg4;
- (id)description;
- (id)effectiveTimingFunction;
- (id)_mediaTimingFunction;
@property(readonly, nonatomic) long long timingCurveType;

@end

