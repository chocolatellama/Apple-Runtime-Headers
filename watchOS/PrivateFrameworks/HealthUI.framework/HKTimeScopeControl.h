//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray;

@interface HKTimeScopeControl : UIControl
{
    NSArray *_timeScopes;
    _Bool _shortTextStyle;
    int _selectedTimeScope;
}

+ (id)controlWithFrame:(struct CGRect)arg1 style:(int)arg2 timeScopes:(id)arg3 shortTextStyle:(_Bool)arg4;
@property(nonatomic) int selectedTimeScope; // @synthesize selectedTimeScope=_selectedTimeScope;
- (void).cxx_destruct;
- (int)_indexForTimeScope:(int)arg1;
- (int)_timeScopeForIndex:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1 timeScopes:(id)arg2 shortTextStyle:(_Bool)arg3;

@end

