//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarouselUIServices/UIScrollViewDelegate-Protocol.h>

@class CUISAlertChevronView, NSString, UIScrollView;
@protocol CUISAlertSwipeToDismissViewBehaviorDelegate;

@interface CUISAlertSwipeToDismissViewBehavior : NSObject <UIScrollViewDelegate>
{
    id <CUISAlertSwipeToDismissViewBehaviorDelegate> _delegate;
    UIScrollView *_scrollView;
    CUISAlertChevronView *_topChevron;
}

@property(retain, nonatomic) CUISAlertChevronView *topChevron; // @synthesize topChevron=_topChevron;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <CUISAlertSwipeToDismissViewBehaviorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_handleScrollDidEnd:(id)arg1;
- (_Bool)_draggedPastTopThreshold;
- (_Bool)_scrollViewPastTopThreshold:(float)arg1;
- (id)initWithScrollView:(id)arg1 topChevron:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

