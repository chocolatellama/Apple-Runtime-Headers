//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKit/NTKRichComplicationCornerGaugeTextView.h>

@class NTKRichComplicationImageView;

@interface NTKRichComplicationCornerMeteredGaugeTextView : NTKRichComplicationCornerGaugeTextView
{
    NTKRichComplicationImageView *_outerImageView;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (int)progressFillStyle;
@property(readonly, nonatomic) NTKRichComplicationImageView *outerImageView; // @synthesize outerImageView=_outerImageView;
- (void).cxx_destruct;
- (void)_handleTemplate:(id)arg1 reason:(int)arg2;
- (void)layoutSubviews;
- (id)init;

@end

