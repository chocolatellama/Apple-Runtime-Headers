//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PlatterKit/PLPlatterView.h>

#import <PlatterKit/PLContentSizeCategoryAdjusting-Protocol.h>
#import <PlatterKit/PLPlatterInternal-Protocol.h>
#import <PlatterKit/PLTitled-Protocol.h>

@class NSArray, NSDate, NSString, NSTimeZone, PLPlatterHeaderContentView, UIButton, UIView;

@interface PLTitledPlatterView : PLPlatterView <PLPlatterInternal, PLTitled, PLContentSizeCategoryAdjusting>
{
    PLPlatterHeaderContentView *_headerContentView;
    _Bool _largerHeaderMarginEnabled;
}

@property(nonatomic, getter=isLargerHeaderMarginEnabled) _Bool largerHeaderMarginEnabled; // @synthesize largerHeaderMarginEnabled=_largerHeaderMarginEnabled;
- (void).cxx_destruct;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (_Bool)adjustForContentSizeCategoryChange;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory;
- (struct CGRect)_mainContentFrame;
- (void)_layoutHeaderViews;
- (void)layoutSubviews;
- (void)setNeedsLayout;
- (void)_configureHeaderContentViewIfNecessary;
- (struct CGSize)sizeThatFitsContentWithSize:(struct CGSize)arg1;
- (void)setHeaderHeedsHorizontalLayoutMargins:(_Bool)arg1;
- (_Bool)headerHeedsHorizontalLayoutMargins;
- (id)_headerContentView;
@property(nonatomic, getter=isDateAllDay) _Bool dateAllDay;
- (void)setUtilityView:(id)arg1;
- (id)utilityView;
@property(readonly, nonatomic) UIButton *utilityButton;
@property(readonly, nonatomic) NSArray *iconButtons;
@property(copy, nonatomic) NSTimeZone *timeZone;
@property(copy, nonatomic) NSDate *date;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSArray *icons;
@property(nonatomic) long long dateFormatStyle;
- (void)setBackgroundView:(id)arg1;
- (void)_configureHeaderContentView;
@property(nonatomic, getter=isSashHidden) _Bool sashHidden;

// Remaining properties
@property(nonatomic, getter=isBackgroundBlurred) _Bool backgroundBlurred;
@property(readonly, nonatomic) UIView *customContentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasShadow;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *preferredContentSizeCategory;
@property(readonly) Class superclass;

@end

