//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionRowView.h>

@class NSArray, NSMutableArray, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface MKPlaceEncyclopedicRowView : MKPlaceSectionRowView
{
    NSMutableArray *_factoidViews;
    UILayoutGuide *_insetMetricGuide;
    UILayoutGuide *_leftMetricGuide;
    UILayoutGuide *_rightMetricGuide;
    unsigned long long _columnCount;
    BOOL _isStandAlone;
    NSArray *_items;
    NSMutableArray *_labelConstraints;
}

@property(nonatomic) BOOL isStandAlone; // @synthesize isStandAlone=_isStandAlone;
@property(retain, nonatomic) NSMutableArray *labelConstraints; // @synthesize labelConstraints=_labelConstraints;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)refreshContent:(BOOL)arg1;
- (void)addWidthAndSideSpacingConstraintsForLabels;
- (void)refreshColumnCount;
- (void)layoutSubviews;
- (void)setColumnCount:(unsigned long long)arg1;
- (void)_contentSizeDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

