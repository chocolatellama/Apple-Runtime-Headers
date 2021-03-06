//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CorePDF/CPRegion.h>

__attribute__((visibility("hidden")))
@interface CPColumn : CPRegion
{
    _Bool hasCentredParagraph;
    _Bool hasColumnBreak;
    float maxLeftPad;
    float maxRightPad;
    float maxRight;
    float minLeft;
    _Bool complete;
}

@property _Bool complete; // @synthesize complete;
- (id)description;
- (float)selectionBottom;
- (struct CGRect)paddedBounds;
- (void)setMaxRightPad:(float)arg1;
- (float)maxRightPad;
- (void)setMaxLeftPad:(float)arg1;
- (float)maxLeftPad;
- (float)rightPad;
- (float)leftPad;
- (void)setHasCentredParagraph:(_Bool)arg1;
- (_Bool)hasCentredParagraph;
- (float)bottomBaseline;
- (struct CGRect)columnBounds;
- (_Bool)isShapeRegion;
- (_Bool)isImageRegion;
- (void)setIsImageRegion:(_Bool)arg1;
- (_Bool)isRowRegion;
- (_Bool)isGraphicalRegion;
- (_Bool)isBoxRegion;
- (void)setHasColumnBreak:(_Bool)arg1;
- (void)accept:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (int)inOrder;
- (int)outOrder;

@end

