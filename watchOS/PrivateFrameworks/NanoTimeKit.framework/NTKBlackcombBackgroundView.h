//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, CLKDevice, NSArray, NTKBlackcombDialColorPalette;

@interface NTKBlackcombBackgroundView : UIView
{
    CLKDevice *_device;
    NTKBlackcombDialColorPalette *_palette;
    CALayer *_smallTickCoveringLayer;
    NSArray *_smallTicks;
    NSArray *_mediumTicks;
    NSArray *_largeTicks;
    _Bool _showingStatus;
    _Bool _usesLongSideTicks;
}

@property(nonatomic) _Bool usesLongSideTicks; // @synthesize usesLongSideTicks=_usesLongSideTicks;
- (void).cxx_destruct;
- (void)applyToTritiumTransitionFraction:(float)arg1;
- (float)_innerDialRadiusAtLargeTick:(int)arg1 verticalLength:(float)arg2 horizontalLength:(float)arg3;
- (float)_outerDialRadiusAtMediumTick:(int)arg1 verticalLength:(float)arg2 horizontalLength:(float)arg3;
- (void)applyZoomFraction:(float)arg1;
- (void)configureTicksForStatus:(_Bool)arg1;
- (void)applyTransitionFractionToUsesLongSideTicks:(float)arg1;
- (void)_layoutTopLargeTick;
- (void)applyTransitionFraction:(float)arg1 fromPalette:(id)arg2 toPalette:(id)arg3;
- (void)applyPalette:(id)arg1;
- (void)_applyBackgroundColor:(id)arg1;
- (void)_setupTicks;
- (struct CGRect)_tickLayoutBounds;
- (id)initForDevice:(id)arg1;

@end

