//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/BSDescriptionProviding-Protocol.h>

@class NSNumber, NSString;

@interface CSLLauncherAnimationSettings : NSObject <BSDescriptionProviding>
{
    int _centersBeforeZooming;
    NSNumber *_startZoomLevel;
    NSNumber *_endZoomLevel;
}

@property(retain, nonatomic) NSNumber *endZoomLevel; // @synthesize endZoomLevel=_endZoomLevel;
@property(retain, nonatomic) NSNumber *startZoomLevel; // @synthesize startZoomLevel=_startZoomLevel;
@property(nonatomic) int centersBeforeZooming; // @synthesize centersBeforeZooming=_centersBeforeZooming;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

