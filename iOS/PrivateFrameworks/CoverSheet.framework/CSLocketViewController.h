//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

#import <CoverSheet/CSDismissableModalViewControllerDelegate-Protocol.h>
#import <CoverSheet/UIGestureRecognizerDelegate-Protocol.h>
#import <CoverSheet/WKWallpaperLocketViewControllerDelegate-Protocol.h>

@class NSSet, NSString, SBFFluidBehaviorSettings, UIView, UIViewFloatAnimatableProperty;
@protocol CSLocketViewControllerDelegate;

@interface CSLocketViewController : CSCoverSheetViewControllerBase <UIGestureRecognizerDelegate, WKWallpaperLocketViewControllerDelegate, CSDismissableModalViewControllerDelegate>
{
    NSSet *_componentTypes;
    UIView *_scaleView;
    struct CGPoint _previousTranslation;
    UIViewFloatAnimatableProperty *_scaleProperty;
    SBFFluidBehaviorSettings *_scaleSettings;
    _Bool _dismissing;
    id <CSLocketViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <CSLocketViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_dismiss:(_Bool)arg1;
- (_Bool)_shouldCancelInteractiveDismissGesture;
- (void)_updateLocketScale:(double)arg1 interactive:(_Bool)arg2;
- (void)_setCornerRounded:(_Bool)arg1;
- (void)dismissForHomeButton;
- (void)handleBottomEdgeGestureEnded:(id)arg1;
- (void)handleBottomEdgeGestureChanged:(id)arg1;
- (void)handleBottomEdgeGestureBegan:(id)arg1;
- (void)addGrabberView:(id)arg1;
- (void)wallpaperLocketViewControllerDidTapOnDoneButton:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (_Bool)handleEvent:(id)arg1;
- (void)_updateForPropertyChanged;
- (void)_createProperties;
- (void)loadView;
- (id)initWithComponentTypes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

