//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARResultData-Protocol.h>

@class NSArray, NSString;

@interface ARFaceTrackingResults : NSObject <ARResultData>
{
    NSArray *_trackedFaces;
}

@property(copy, nonatomic) NSArray *trackedFaces; // @synthesize trackedFaces=_trackedFaces;
- (void).cxx_destruct;
-     // Error parsing type: @160@0:8{?=[4]}16{?=[4]}80@144@152, name: anchorsForCameraWithTransform:referenceOriginTransform:existingAnchors:anchorsToRemove:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

