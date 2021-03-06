//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVButton, AVObservationController, AVPlayerController, AVStyleSheet, AVVolumeButtonControl, NSString, NSValue;

__attribute__((visibility("hidden")))
@interface AVTurboModePlaybackControlsPlaceholderView : UIView
{
    AVStyleSheet *_styleSheet;
    AVPlayerController *_playerController;
    long long _preferredUnobscuredArea;
    long long _includedControlType;
    NSString *_volumeButtonMicaPackageStateName;
    NSValue *_overrideLayoutMarginsWhenEmbeddedInline;
    AVVolumeButtonControl *_volumeButton;
    UIView *_prominentPlayButtonContainer;
    AVButton *_prominentPlayButton;
    UIView *_volumeButtonContainer;
    UIView *_contentView;
    AVObservationController *_observationController;
    struct CGAffineTransform _overrideTransformForProminentPlayButton;
}

@property(readonly, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *volumeButtonContainer; // @synthesize volumeButtonContainer=_volumeButtonContainer;
@property(nonatomic) __weak AVButton *prominentPlayButton; // @synthesize prominentPlayButton=_prominentPlayButton;
@property(retain, nonatomic) UIView *prominentPlayButtonContainer; // @synthesize prominentPlayButtonContainer=_prominentPlayButtonContainer;
@property(nonatomic) __weak AVVolumeButtonControl *volumeButton; // @synthesize volumeButton=_volumeButton;
@property(retain, nonatomic) NSValue *overrideLayoutMarginsWhenEmbeddedInline; // @synthesize overrideLayoutMarginsWhenEmbeddedInline=_overrideLayoutMarginsWhenEmbeddedInline;
@property(nonatomic) struct CGAffineTransform overrideTransformForProminentPlayButton; // @synthesize overrideTransformForProminentPlayButton=_overrideTransformForProminentPlayButton;
@property(copy, nonatomic) NSString *volumeButtonMicaPackageStateName; // @synthesize volumeButtonMicaPackageStateName=_volumeButtonMicaPackageStateName;
@property(nonatomic) long long includedControlType; // @synthesize includedControlType=_includedControlType;
@property(nonatomic) long long preferredUnobscuredArea; // @synthesize preferredUnobscuredArea=_preferredUnobscuredArea;
@property(retain, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
@property(retain, nonatomic) AVStyleSheet *styleSheet; // @synthesize styleSheet=_styleSheet;
- (void).cxx_destruct;
- (id)_makeProminentPlayButtonAndContainer;
- (void)_makeProminentPlayButtonAndContainerIfNeeded;
- (id)_makeVolumeButtonAndContainer;
- (void)_makeVolumeButtonAndContainerIfNeeded;
- (struct CGRect)_frameForIncludedViewType:(long long)arg1;
- (void)_updateFramesAndHitRectInsets;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)arg1;
- (BOOL)hasVisibleControls;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 styleSheet:(id)arg2;

@end

