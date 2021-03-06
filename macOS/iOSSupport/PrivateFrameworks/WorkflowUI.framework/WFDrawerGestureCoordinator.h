//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/UIGestureRecognizerDelegate-Protocol.h>
#import <WorkflowUI/WFDrawerDismissalHelperDelegate-Protocol.h>

@class NSString, UIPanGestureRecognizer, UIScrollView, UITapGestureRecognizer, WFDrawerVelocityFilter;
@protocol WFDrawerGestureCoordinatorDelegate;

@interface WFDrawerGestureCoordinator : NSObject <UIGestureRecognizerDelegate, WFDrawerDismissalHelperDelegate>
{
    BOOL _correctingContentOffset;
    id <WFDrawerGestureCoordinatorDelegate> _delegate;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    WFDrawerVelocityFilter *_heightVelocityFilter;
    WFDrawerVelocityFilter *_heightAccelerationFilter;
    unsigned long long _tapGestureIgnoringCount;
    double _minimumDrawerHeight;
    double _maximumDrawerHeight;
    double _topRubberBandRange;
    double _bottomRubberBandRange;
    UIScrollView *_scrollView;
    struct CGPoint _previousPanTranslation;
    struct CGPoint _initialContentOffset;
    struct CGPoint _unmodifiedInitialContentOffset;
}

@property(nonatomic) BOOL correctingContentOffset; // @synthesize correctingContentOffset=_correctingContentOffset;
@property(nonatomic) struct CGPoint unmodifiedInitialContentOffset; // @synthesize unmodifiedInitialContentOffset=_unmodifiedInitialContentOffset;
@property(nonatomic) struct CGPoint initialContentOffset; // @synthesize initialContentOffset=_initialContentOffset;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) double bottomRubberBandRange; // @synthesize bottomRubberBandRange=_bottomRubberBandRange;
@property(nonatomic) double topRubberBandRange; // @synthesize topRubberBandRange=_topRubberBandRange;
@property(nonatomic) double maximumDrawerHeight; // @synthesize maximumDrawerHeight=_maximumDrawerHeight;
@property(nonatomic) double minimumDrawerHeight; // @synthesize minimumDrawerHeight=_minimumDrawerHeight;
@property(nonatomic) struct CGPoint previousPanTranslation; // @synthesize previousPanTranslation=_previousPanTranslation;
@property(nonatomic) unsigned long long tapGestureIgnoringCount; // @synthesize tapGestureIgnoringCount=_tapGestureIgnoringCount;
@property(readonly, nonatomic) WFDrawerVelocityFilter *heightAccelerationFilter; // @synthesize heightAccelerationFilter=_heightAccelerationFilter;
@property(readonly, nonatomic) WFDrawerVelocityFilter *heightVelocityFilter; // @synthesize heightVelocityFilter=_heightVelocityFilter;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(readonly, nonatomic) __weak id <WFDrawerGestureCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)clampedDrawerHeight:(double)arg1;
- (double)containerHeight;
- (double)drawerHeight;
- (double)heightForRubberBandHeight:(double)arg1;
- (double)rubberBandHeightForHeight:(double)arg1;
- (double)unapplyRubberBandToValue:(double)arg1 withRange:(double)arg2;
- (double)applyRubberBandToValue:(double)arg1 withRange:(double)arg2;
- (id)dragGestureTrackerForCardDismissalHelper:(id)arg1;
- (void)drawerDismissalHelper:(id)arg1 requestedDismissalWithVelocity:(double)arg2;
- (double)dismissalRectTopEdgeForCardDismissalHelper:(id)arg1 coordinateSpace:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handlePanGesture:(id)arg1;
- (void)endDraggingWithVerticalVelocity:(double)arg1 animation:(id)arg2;
- (void)endDraggingWithAnimation:(id)arg1;
- (void)dragTranslatedWithVerticalDelta:(double)arg1;
- (void)beginDragging;
- (void)handleTapGesture:(id)arg1;
- (void)endIgnoringTapGestures;
- (void)beginIgnoringTapGestures;
- (void)updateTapGestureRecognizer;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

