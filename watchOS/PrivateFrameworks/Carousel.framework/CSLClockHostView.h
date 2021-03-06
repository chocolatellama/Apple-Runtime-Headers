//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Carousel/CSLClockHosting-Protocol.h>
#import <Carousel/FBSceneHostViewDelegate-Protocol.h>

@class CSLActivatingClockView, NSString;
@protocol CSLClockHostViewDelegate, FBSceneHostView;

@interface CSLClockHostView : UIView <FBSceneHostViewDelegate, CSLClockHosting>
{
    CSLActivatingClockView *_activationView;
    _Bool _liveContentAvailable;
    _Bool _allowsActivationView;
    UIView<FBSceneHostView> *_sceneHostView;
    NSString *_requester;
    id <CSLClockHostViewDelegate> _delegate;
}

@property(nonatomic) _Bool allowsActivationView; // @synthesize allowsActivationView=_allowsActivationView;
@property(nonatomic) __weak id <CSLClockHostViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *requester; // @synthesize requester=_requester;
@property(retain, nonatomic) UIView<FBSceneHostView> *sceneHostView; // @synthesize sceneHostView=_sceneHostView;
- (void).cxx_destruct;
- (void)layerHostingStateDidChange:(id)arg1;
- (void)didMoveToWindow;
- (void)invalidate;
- (void)updateActivationViewIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

