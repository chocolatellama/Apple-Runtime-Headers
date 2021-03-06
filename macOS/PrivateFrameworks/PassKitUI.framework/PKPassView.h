//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSBezierPath, NSImage, NSString, PKPass;

@interface PKPassView : NSView
{
    NSBezierPath *_clipPath;
    NSImage *_blurredBackground;
    NSImage *_cachedGradientOverlayImage;
    PKPass *_pass;
    NSString *_windowTitle;
}

+ (void)drawGradientOverlayWithBackgroundColor:(id)arg1 inRect:(struct CGRect)arg2;
+ (void)drawPlainNinePartImage:(id)arg1 inRect:(struct CGRect)arg2;
+ (void)drawPerforatedNinePartImage:(id)arg1 inRect:(struct CGRect)arg2;
+ (void)drawNotchedNinePartImage:(id)arg1 inRect:(struct CGRect)arg2;
@property(retain, nonatomic) NSString *windowTitle; // @synthesize windowTitle=_windowTitle;
@property(retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)innerRect;
- (void)dealloc;
- (void)applyShadowToCurrentLayer;
- (void)drawImage:(id)arg1 foregroundFilledInRect:(struct CGRect)arg2;
- (void)drawContainerBackgroundInRect:(struct CGRect)arg1;
- (void)drawBarcodeBackgroundInRect:(struct CGRect)arg1;
- (void)drawBackgroundColor;
- (void)drawBackground;
- (void)drawMaskImage:(id)arg1 clipDirtyRect:(struct CGRect)arg2;

@end

