//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKAnnotationView.h>

@class GEOFeatureStyleAttributes, MKWalletMerchantStylingInfo, NSString, UIColor, UIImage, UIImageView, UILabel, UIView, _MKBezierPathView;

@interface MKMarkerAnnotationView : MKAnnotationView
{
    UIImageView *_shadowView;
    _MKBezierPathView *_markerView;
    UIImageView *_glyphImageView;
    UILabel *_glyphLabel;
    _MKBezierPathView *_selectedMarkerView;
    UIImageView *_selectedGlyphImageView;
    UILabel *_selectedGlyphLabel;
    _MKBezierPathView *_selectedDotView;
    UIView *_contentMaskView;
    GEOFeatureStyleAttributes *_customStyleAttributes;
    MKWalletMerchantStylingInfo *_walletMerchantStylingInfo;
    BOOL _isObserving;
    BOOL _animatesWhenAdded;
    UIColor *_markerTintColor;
    UIColor *_glyphTintColor;
    NSString *_glyphText;
    UIImage *_glyphImage;
    UIImage *_selectedGlyphImage;
    UIColor *_markerStrokeTintColor;
    double _markerStrokeWidth;
}

+ (float)_defaultDisplayPriority;
+ (Class)_mapkitLeafClass;
@property(nonatomic) double markerStrokeWidth; // @synthesize markerStrokeWidth=_markerStrokeWidth;
@property(copy, nonatomic) UIColor *markerStrokeTintColor; // @synthesize markerStrokeTintColor=_markerStrokeTintColor;
@property(nonatomic) BOOL animatesWhenAdded; // @synthesize animatesWhenAdded=_animatesWhenAdded;
@property(copy, nonatomic) UIImage *selectedGlyphImage; // @synthesize selectedGlyphImage=_selectedGlyphImage;
@property(copy, nonatomic) UIImage *glyphImage; // @synthesize glyphImage=_glyphImage;
@property(copy, nonatomic) NSString *glyphText; // @synthesize glyphText=_glyphText;
@property(copy, nonatomic) UIColor *glyphTintColor; // @synthesize glyphTintColor=_glyphTintColor;
@property(copy, nonatomic) UIColor *markerTintColor; // @synthesize markerTintColor=_markerTintColor;
@property(retain, nonatomic, getter=_styleAttributes, setter=_setStyleAttributes:) GEOFeatureStyleAttributes *styleAttributes; // @synthesize styleAttributes=_customStyleAttributes;
- (void).cxx_destruct;
- (struct UIEdgeInsets)_defaultCollisionAlignmentRectInsets;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)_effectiveSubtitlesIsCollidable:(char *)arg1;
- (BOOL)isProvidingCustomFeature;
- (BOOL)_shouldDeselectWhenDragged;
- (void)dealloc;
- (BOOL)updateCalloutViewIfNeededAnimated:(BOOL)arg1;
- (void)_setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setDragState:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)_configureAnimated:(BOOL)arg1 fromState:(long long)arg2 toState:(long long)arg3;
- (void)_setupSelectedViewsIfNeededUsesCallout:(BOOL)arg1;
- (void)_setupNormalViewsIfNeeded;
- (void)_didDragWithVelocity:(struct CGPoint)arg1;
- (long long)_stateForIsSelected:(BOOL)arg1;
- (void)_configureViewsForState:(long long)arg1 usesCallout:(BOOL)arg2;
- (void)prepareForSnapshotting;
- (void)_unhideForDisplay;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (long long)_currentMarkerState;
- (void)_updateContentForState:(long long)arg1 forceUpdate:(BOOL)arg2;
- (void)_updateContentForState:(long long)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(nonatomic) long long subtitleVisibility; // @dynamic subtitleVisibility;
@property(nonatomic) long long titleVisibility; // @dynamic titleVisibility;
- (void)setAnnotation:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)_effectiveGlyphText;
- (id)_effectiveGlyphImageForState:(long long)arg1 isSystemProvided:(char *)arg2;
- (id)_effectiveGlyphTintColorForState:(long long)arg1;
- (id)_effectiveMarkerStrokeTintColorForState:(long long)arg1;
- (double)_effectiveMarkerStrokeWidthForState:(long long)arg1;
@property(retain, nonatomic) UIView *selectedContentView;
- (double)_effectiveShadowAlphaForState:(long long)arg1;
- (id)_effectiveMarkerTintColorForState:(long long)arg1;
- (BOOL)canShowCallout;
- (BOOL)_hasDataRequiringCallout;
@property(retain, nonatomic, getter=_walletMerchantStylingInfo, setter=_setWalletMerchantStylingInfo:) MKWalletMerchantStylingInfo *walletMerchantStylingInfo;

@end

