//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AudioSession/AVAudioDSPControlling-Protocol.h>

@class NSArray, NSString;

@protocol AVAudioSpatialMicrophoneSelecting <AVAudioDSPControlling>
@property(readonly, nonatomic) NSArray *availableVirtualFormats;
@property(readonly, nonatomic) NSString *focusOrientation;
- (BOOL)setFocusOrientation:(NSString *)arg1 error:(id *)arg2;
@end

