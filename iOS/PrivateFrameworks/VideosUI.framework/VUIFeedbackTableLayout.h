//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIFeedbackTableLayout : TVViewLayout
{
    VUITextLayout *_headerTextLayout;
    VUITextLayout *_descriptionTextLayout;
    double _middleSpacing;
}

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
@property(readonly, nonatomic) double middleSpacing; // @synthesize middleSpacing=_middleSpacing;
@property(readonly, nonatomic) VUITextLayout *descriptionTextLayout; // @synthesize descriptionTextLayout=_descriptionTextLayout;
@property(readonly, nonatomic) VUITextLayout *headerTextLayout; // @synthesize headerTextLayout=_headerTextLayout;
- (void).cxx_destruct;
- (void)_setupLayout;
- (id)init;

@end

