//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ARKit/ARImageBasedTechnique.h>

@class NSUUID;

@interface ARFaceTrackingTechnique : ARImageBasedTechnique
{
    NSUUID *_singleUserAnchorIdentifier;
    _Bool _isFaceTracked;
    long long _maximumNumberOfTrackedFaces;
}

+ (_Bool)isSupported;
@property _Bool isFaceTracked; // @synthesize isFaceTracked=_isFaceTracked;
@property(readonly, nonatomic) long long maximumNumberOfTrackedFaces; // @synthesize maximumNumberOfTrackedFaces=_maximumNumberOfTrackedFaces;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)processData:(id)arg1;
- (id)resultDataClasses;
- (unsigned long long)requiredSensorDataTypes;
- (id)initWithMaximumNumberOfTrackedFaces:(long long)arg1;
- (id)init;

@end

