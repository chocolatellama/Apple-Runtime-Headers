//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIPercentDrivenInteractiveTransition.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class CADisplayLink, NSString, UIGestureRecognizer, UIPanGestureRecognizer, UIView, UIViewController, _UINavigationParallaxTransition;
@protocol _UINavigationInteractiveTransitionBaseDelegate;

@interface _UINavigationInteractiveTransitionBase : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate>
{
    UIView *_gestureRecognizerView;
    UIPanGestureRecognizer *_gestureRecognizer;
    int __interactionState;
    _Bool __transitionWasStopped;
    _Bool __stoppedTransitionWasCancelled;
    UIViewController *__parent;
    _Bool __useAugmentedShouldPopDecisionProcedure;
    _Bool __completesTransitionOnEnd;
    CADisplayLink *_displayLink;
    float _timestamps[3];
    float _velocities[3];
    float _accelerations[3];
    _Bool _shouldReverseTranslation;
    _Bool __shouldReverseLayoutDirection;
    _Bool _springAnimationIsPending;
    _Bool _inSpringAnimation;
    _UINavigationParallaxTransition *_animationController;
    id <_UINavigationInteractiveTransitionBaseDelegate> _delegate;
    unsigned int _sampleCount;
    float _totalDistance;
    float _previousDisplacement;
    float _previousVelocity;
    float _previousAcceleration;
    float _averageVelocity;
    float _averageAcceleration;
    double _skipTimeStamp;
    double _previousTimeStamp;
}

@property(nonatomic) float averageAcceleration; // @synthesize averageAcceleration=_averageAcceleration;
@property(nonatomic) float averageVelocity; // @synthesize averageVelocity=_averageVelocity;
@property(nonatomic) float previousAcceleration; // @synthesize previousAcceleration=_previousAcceleration;
@property(nonatomic) float previousVelocity; // @synthesize previousVelocity=_previousVelocity;
@property(nonatomic) float previousDisplacement; // @synthesize previousDisplacement=_previousDisplacement;
@property(nonatomic) double previousTimeStamp; // @synthesize previousTimeStamp=_previousTimeStamp;
@property(nonatomic) double skipTimeStamp; // @synthesize skipTimeStamp=_skipTimeStamp;
@property(nonatomic) float totalDistance; // @synthesize totalDistance=_totalDistance;
@property(nonatomic) unsigned int sampleCount; // @synthesize sampleCount=_sampleCount;
@property(nonatomic) _Bool inSpringAnimation; // @synthesize inSpringAnimation=_inSpringAnimation;
@property(nonatomic) _Bool springAnimationIsPending; // @synthesize springAnimationIsPending=_springAnimationIsPending;
@property(nonatomic, setter=_setShouldReverseLayoutDirection:) _Bool _shouldReverseLayoutDirection; // @synthesize _shouldReverseLayoutDirection=__shouldReverseLayoutDirection;
@property(nonatomic) __weak id <_UINavigationInteractiveTransitionBaseDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=_setCompletesTransitionOnEnd:) _Bool _completesTransitionOnEnd; // @synthesize _completesTransitionOnEnd=__completesTransitionOnEnd;
@property(nonatomic, setter=_setUseAugmentedShouldPopDecisionProcedure:) _Bool _useAugmentedShouldPopDecisionProcedure; // @synthesize _useAugmentedShouldPopDecisionProcedure=__useAugmentedShouldPopDecisionProcedure;
@property(nonatomic, setter=_setParent:) __weak UIViewController *_parent; // @synthesize _parent=__parent;
@property(nonatomic, setter=_setStoppedTransitionWasCancelled:) _Bool _stoppedTransitionWasCancelled; // @synthesize _stoppedTransitionWasCancelled=__stoppedTransitionWasCancelled;
@property(nonatomic, setter=_setTransitionWasStopped:) _Bool _transitionWasStopped; // @synthesize _transitionWasStopped=__transitionWasStopped;
@property(nonatomic, setter=_setInteractionState:) int _interactionState; // @synthesize _interactionState=__interactionState;
@property(retain, nonatomic) _UINavigationParallaxTransition *animationController; // @synthesize animationController=_animationController;
@property(nonatomic) _Bool shouldReverseTranslation; // @synthesize shouldReverseTranslation=_shouldReverseTranslation;
@property(nonatomic) __weak UIPanGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (void).cxx_destruct;
- (void)startInteractiveTransition:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleNavigationTransition:(id)arg1;
- (float)_translationCoefficient;
- (void)setNotInteractiveTransition;
- (void)startInteractiveTransition;
- (_Bool)popGesture:(id)arg1 withRemainingDuration:(float)arg2 shouldPopWithVelocity:(float *)arg3;
- (void)_updateStatistics:(id)arg1 firstSample:(_Bool)arg2 finalSample:(_Bool)arg3;
- (_Bool)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)_completeStoppedInteractiveTransition;
- (void)_stopInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
@property(readonly, nonatomic, getter=_navigationGesture) UIGestureRecognizer *navigationGesture;
- (void)_resetInteractionController;
- (void)dealloc;
- (id)initWithGestureRecognizerView:(id)arg1 animator:(id)arg2 delegate:(id)arg3;
- (id)gestureRecognizerView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

