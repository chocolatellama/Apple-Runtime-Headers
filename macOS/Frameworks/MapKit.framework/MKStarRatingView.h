//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage, NSMutableArray;

@interface MKStarRatingView : NSView
{
    double _rating;
    unsigned long long _numLevels;
    double _padding;
    BOOL _highlighted;
    NSMutableArray *_ratingViews;
    long long _numReviews;
    long long _starStyle;
    NSImage *_fullStarImage;
    NSImage *_halfStarImage;
    NSImage *_emptyStarImage;
    NSImage *_fullStarHighlightedImage;
    NSImage *_halfStarHighlightedImage;
    NSImage *_emptyStarHighlightedImage;
}

+ (id)ratingAsAttributedString:(double)arg1 baseFont:(id)arg2 style:(long long)arg3 theme:(id)arg4;
+ (id)ratingShortAsAttributedString:(double)arg1 baseFont:(id)arg2 theme:(id)arg3;
+ (id)colorForRating:(double)arg1;
@property(retain, nonatomic) NSImage *emptyStarHighlightedImage; // @synthesize emptyStarHighlightedImage=_emptyStarHighlightedImage;
@property(retain, nonatomic) NSImage *halfStarHighlightedImage; // @synthesize halfStarHighlightedImage=_halfStarHighlightedImage;
@property(retain, nonatomic) NSImage *fullStarHighlightedImage; // @synthesize fullStarHighlightedImage=_fullStarHighlightedImage;
@property(retain, nonatomic) NSImage *emptyStarImage; // @synthesize emptyStarImage=_emptyStarImage;
@property(retain, nonatomic) NSImage *halfStarImage; // @synthesize halfStarImage=_halfStarImage;
@property(retain, nonatomic) NSImage *fullStarImage; // @synthesize fullStarImage=_fullStarImage;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) double rating; // @synthesize rating=_rating;
@property(nonatomic) unsigned long long numberOfRatingLevels; // @synthesize numberOfRatingLevels=_numLevels;
@property(nonatomic) long long starStyle; // @synthesize starStyle=_starStyle;
- (void).cxx_destruct;
- (void)setPadding:(double)arg1;
- (void)viewDidChangeBackingProperties;
- (void)layout;
- (void)_layoutStarViewsCreatingIfNeeded:(BOOL)arg1;
- (struct NSEdgeInsets)alignmentRectInsets;
- (double)verticalAlignmentCenterPercentage;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)imageWithName:(id)arg1 andColor:(id)arg2;
- (void)_updateLayerGeometryFromView;
- (void)_commonInit;
- (id)initWithStyle:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

