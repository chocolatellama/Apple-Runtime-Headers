//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/_UIExclusiveTouchGestureRecognizerDelegate-Protocol.h>

@class BKSTouchStream, FBSDisplayIdentity, NSMutableSet, NSSet, NSString, UIGestureRecognizer, _UISystemGestureWindow;

__attribute__((visibility("hidden")))
@interface __UISystemGestureManager : NSObject <UIGestureRecognizerDelegate, _UIExclusiveTouchGestureRecognizerDelegate>
{
    FBSDisplayIdentity *_rootDisplayIdentity;
    _UISystemGestureWindow *_systemGestureWindow;
    NSMutableSet *_recognizingGestures;
    NSMutableSet *_externalEdgeSwipeGestures;
    NSMutableSet *_internalGestures;
    NSMutableSet *_externalGestures;
    _Bool _achievedMaximumMovement;
    _Bool _didSeeExclusiveTouchBegan;
    _Bool _didProcessPendingSwipeBegan;
    UIGestureRecognizer *_exclusiveTouchGesture;
    UIGestureRecognizer *_pendingSwipeGesture;
    UIGestureRecognizer *_catchEdgeSwipeFailureGesture;
    BKSTouchStream *_touchStream;
}

@property(retain, nonatomic) BKSTouchStream *touchStream; // @synthesize touchStream=_touchStream;
@property(nonatomic) _Bool didProcessPendingSwipeBegan; // @synthesize didProcessPendingSwipeBegan=_didProcessPendingSwipeBegan;
@property(nonatomic) _Bool didSeeExclusiveTouchBegan; // @synthesize didSeeExclusiveTouchBegan=_didSeeExclusiveTouchBegan;
@property(nonatomic) _Bool achievedMaximumMovement; // @synthesize achievedMaximumMovement=_achievedMaximumMovement;
@property(retain, nonatomic) UIGestureRecognizer *catchEdgeSwipeFailureGesture; // @synthesize catchEdgeSwipeFailureGesture=_catchEdgeSwipeFailureGesture;
@property(retain, nonatomic) UIGestureRecognizer *pendingSwipeGesture; // @synthesize pendingSwipeGesture=_pendingSwipeGesture;
@property(retain, nonatomic) UIGestureRecognizer *exclusiveTouchGesture; // @synthesize exclusiveTouchGesture=_exclusiveTouchGesture;
- (void).cxx_destruct;
- (void)_handleTooMuchMovementWithLastTouchTimestamp:(double)arg1;
- (void)_externalGestureRecognizerChanged:(id)arg1;
- (void)_catchSwipeFailureGestureChanged:(id)arg1;
- (void)_pendingSwipeGestureChanged:(id)arg1;
- (void)_pendingSwipeGestureDidTerminate:(id)arg1;
- (void)_pendingSwipeGestureDidBegin:(id)arg1;
- (void)_failedPendingSwipe;
- (void)_exclusiveTouchGestureChanged:(id)arg1;
- (void)_exclusiveTouchGestureDidTerminate:(id)arg1;
- (unsigned char)_dispatchModeForExternalGestureCompletion;
- (void)exclusiveTouchGestureRecognizer:(id)arg1 achievedMaximumAbsoluteAccumulatedMovement:(_Bool)arg2 timestamp:(double)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)windowForSystemGestures;
- (void)clearTransform;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)removeGestureRecognizer:(id)arg1;
- (void)addGestureRecognizer:(id)arg1;
- (void)addGestureRecognizer:(id)arg1 recognitionEvent:(int)arg2;
@property(readonly, copy, nonatomic) NSSet *gestureRecognizers;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)_removeInternalGestures;
- (void)_addInternalGesturesToView:(id)arg1;
- (id)initWithRootDisplayIdentity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

