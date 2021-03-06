//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LinkPresentation/LPComponentView.h>

#import <LinkPresentation/CAAnimationDelegate-Protocol.h>
#import <LinkPresentation/NSGestureRecognizerDelegate-Protocol.h>

@class LPTapToLoadViewStyle, LPTextView, NSPressGestureRecognizer, NSString, NSView;
@protocol LPTapToLoadViewDelegate;

__attribute__((visibility("hidden")))
@interface LPTapToLoadView : LPComponentView <CAAnimationDelegate, NSGestureRecognizerDelegate>
{
    LPTextView *_captionView;
    NSView *_progressView;
    LPTapToLoadViewStyle *_style;
    NSView *_highlightView;
    NSPressGestureRecognizer *_highlightGestureRecognizer;
    BOOL _wasTapped;
    CDUnknownBlockType _animateOutCompletionHandler;
    id <LPTapToLoadViewDelegate> _delegate;
}

@property(nonatomic) __weak id <LPTapToLoadViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animateOutWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_animateToProgressView;
- (void)_tapRecognized:(id)arg1;
- (void)_highlightLongPressRecognized:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)_createIndeterminateProgressIndicator;
- (void)_buildViews;
- (void)layoutComponentView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

