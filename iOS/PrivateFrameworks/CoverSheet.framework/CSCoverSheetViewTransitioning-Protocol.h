//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoverSheet/CSCoverSheetParticipating-Protocol.h>

@protocol CSCoverSheetViewTransitionSource;

@protocol CSCoverSheetViewTransitioning <CSCoverSheetParticipating>
- (void)transitionSource:(id <CSCoverSheetViewTransitionSource>)arg1 didEndWithContext:(CDStruct_7238a68f)arg2;
- (void)transitionSource:(id <CSCoverSheetViewTransitionSource>)arg1 didUpdateTransitionWithContext:(CDStruct_7238a68f)arg2;
- (void)transitionSource:(id <CSCoverSheetViewTransitionSource>)arg1 willBeginWithType:(long long)arg2;
@end

