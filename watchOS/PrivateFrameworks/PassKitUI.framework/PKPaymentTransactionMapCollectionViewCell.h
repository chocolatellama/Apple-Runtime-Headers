//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class PKDashboardTransactionMapItem, PKTransactionMapView, UIActivityIndicatorView, UIImageView, UILabel;

@interface PKPaymentTransactionMapCollectionViewCell : PKDashboardCollectionViewCell
{
    UIImageView *_disclosureView;
    UIActivityIndicatorView *_spinner;
    _Bool _showDisclosureIndicator;
    _Bool _showSpinner;
    PKDashboardTransactionMapItem *_item;
    PKTransactionMapView *_mapView;
    UILabel *_titleLabel;
}

@property(nonatomic) _Bool showSpinner; // @synthesize showSpinner=_showSpinner;
@property(nonatomic) _Bool showDisclosureIndicator; // @synthesize showDisclosureIndicator=_showDisclosureIndicator;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) PKTransactionMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) PKDashboardTransactionMapItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (float)maxWidthForTransactionCellInWidth:(float)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)prepareForReuse;
- (void)_updateSpinnerAndDisclosureIndicator;
- (id)initWithFrame:(struct CGRect)arg1;

@end

