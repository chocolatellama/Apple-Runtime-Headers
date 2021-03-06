//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableDictionary;

@interface PKDiscoveryLayout : UICollectionViewLayout
{
    NSMutableDictionary *_attributesPerIndexPath;
    NSMutableDictionary *_headersPerIndexPath;
    struct CGSize _currentSize;
    double _interimSpacing;
    double _lineSpacing;
}

@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) double interimSpacing; // @synthesize interimSpacing=_interimSpacing;
- (void).cxx_destruct;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)_adjustItems:(id)arg1 withLateralMove:(double)arg2;
- (void)prepareLayout;
- (struct CGSize)collectionViewContentSize;
- (id)init;

@end

