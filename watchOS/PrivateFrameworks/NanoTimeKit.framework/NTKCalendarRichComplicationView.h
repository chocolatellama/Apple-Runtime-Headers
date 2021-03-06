//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKit/NTKRichComplicationRectangularBaseView.h>

@class NSArray, NTKCalendarRichComplicationContentView;

@interface NTKCalendarRichComplicationView : NTKRichComplicationRectangularBaseView
{
    NTKCalendarRichComplicationContentView *_contentView;
    NSArray *_accentViews;
    NSArray *_desaturateViews;
}

@property(retain, nonatomic) NSArray *desaturateViews; // @synthesize desaturateViews=_desaturateViews;
@property(retain, nonatomic) NSArray *accentViews; // @synthesize accentViews=_accentViews;
@property(retain, nonatomic) NTKCalendarRichComplicationContentView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)_updateViews:(id)arg1 withFilter:(id)arg2;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(float)arg1;
- (void)_handleTemplate:(id)arg1 reason:(int)arg2;
- (id)init;

@end

