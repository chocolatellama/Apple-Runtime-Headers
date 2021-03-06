//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKit/CLKTimeFormatterObserver-Protocol.h>
#import <NanoTimeKit/NTKTimeView-Protocol.h>
#import <NanoTimeKit/NTKTritiumAnimator-Protocol.h>

@class CLKDevice, CLKTimeFormatter, NSString, NTKOlympusColorPalette, NTKVictoryLabel, NTKVictoryTimeLabel, UIButton, UIColor;
@protocol NTKOlympusContentViewDelegate;

@interface NTKOlympusTimeContentView : UIView <CLKTimeFormatterObserver, NTKTimeView, NTKTritiumAnimator>
{
    _Bool frozen;
    _Bool _invertedColors;
    id <NTKOlympusContentViewDelegate> _delegate;
    CLKDevice *_device;
    UIButton *_fullscreenLogoButton;
    UIButton *_circularLogoButton;
    NTKVictoryTimeLabel *_fullscreenHybridUpperTimeLabel;
    NTKVictoryLabel *_fullscreenHybridLowerTimeLabel;
    NTKVictoryLabel *_fullscreenDigitalUpperTimeLabel;
    NTKVictoryLabel *_fullscreenDigitalLowerTimeLabel;
    NTKVictoryLabel *_circularUpperTimeLabel;
    NTKVictoryLabel *_circularLowerTimeLabel;
    UIView *_contentView;
    UIView *_fullscreenDigitsContainerView;
    UIView *_circularDigitsContainerView;
    CLKTimeFormatter *_timeFormatter;
    unsigned int _style;
    unsigned int _dial;
    unsigned int _color;
    NTKOlympusColorPalette *_palette;
    NTKOlympusColorPalette *_tritiumPalette;
    UIColor *_currentForegroundColor;
    UIColor *_currentBackgroundColor;
    UIColor *_currentLogoColor;
    float _dialFraction;
    float _digitalStyleFraction;
    float _olympusDigitalStyleFraction;
    float _olympusAnalogStyleFraction;
    float _analogStyleFraction;
    float _olympusDigitalLabelsPositionFraction;
    float _analogStyleSwooshPositionFraction;
    float _tritiumFraction;
    struct CGSize _logoImageSizeForCircularDial;
}

+ (float)scaleForViewDuringColorChangeTransitionWithFraction:(float)arg1;
@property(nonatomic) float tritiumFraction; // @synthesize tritiumFraction=_tritiumFraction;
@property(nonatomic) struct CGSize logoImageSizeForCircularDial; // @synthesize logoImageSizeForCircularDial=_logoImageSizeForCircularDial;
@property(nonatomic) float analogStyleSwooshPositionFraction; // @synthesize analogStyleSwooshPositionFraction=_analogStyleSwooshPositionFraction;
@property(nonatomic) float olympusDigitalLabelsPositionFraction; // @synthesize olympusDigitalLabelsPositionFraction=_olympusDigitalLabelsPositionFraction;
@property(nonatomic) float analogStyleFraction; // @synthesize analogStyleFraction=_analogStyleFraction;
@property(nonatomic) float olympusAnalogStyleFraction; // @synthesize olympusAnalogStyleFraction=_olympusAnalogStyleFraction;
@property(nonatomic) float olympusDigitalStyleFraction; // @synthesize olympusDigitalStyleFraction=_olympusDigitalStyleFraction;
@property(nonatomic) float digitalStyleFraction; // @synthesize digitalStyleFraction=_digitalStyleFraction;
@property(nonatomic) float dialFraction; // @synthesize dialFraction=_dialFraction;
@property(retain, nonatomic) UIColor *currentLogoColor; // @synthesize currentLogoColor=_currentLogoColor;
@property(retain, nonatomic) UIColor *currentBackgroundColor; // @synthesize currentBackgroundColor=_currentBackgroundColor;
@property(retain, nonatomic) UIColor *currentForegroundColor; // @synthesize currentForegroundColor=_currentForegroundColor;
@property(retain, nonatomic) NTKOlympusColorPalette *tritiumPalette; // @synthesize tritiumPalette=_tritiumPalette;
@property(retain, nonatomic) NTKOlympusColorPalette *palette; // @synthesize palette=_palette;
@property(nonatomic) unsigned int color; // @synthesize color=_color;
@property(nonatomic) unsigned int dial; // @synthesize dial=_dial;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
@property(retain, nonatomic) CLKTimeFormatter *timeFormatter; // @synthesize timeFormatter=_timeFormatter;
@property(retain, nonatomic) UIView *circularDigitsContainerView; // @synthesize circularDigitsContainerView=_circularDigitsContainerView;
@property(retain, nonatomic) UIView *fullscreenDigitsContainerView; // @synthesize fullscreenDigitsContainerView=_fullscreenDigitsContainerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NTKVictoryLabel *circularLowerTimeLabel; // @synthesize circularLowerTimeLabel=_circularLowerTimeLabel;
@property(retain, nonatomic) NTKVictoryLabel *circularUpperTimeLabel; // @synthesize circularUpperTimeLabel=_circularUpperTimeLabel;
@property(retain, nonatomic) NTKVictoryLabel *fullscreenDigitalLowerTimeLabel; // @synthesize fullscreenDigitalLowerTimeLabel=_fullscreenDigitalLowerTimeLabel;
@property(retain, nonatomic) NTKVictoryLabel *fullscreenDigitalUpperTimeLabel; // @synthesize fullscreenDigitalUpperTimeLabel=_fullscreenDigitalUpperTimeLabel;
@property(retain, nonatomic) NTKVictoryLabel *fullscreenHybridLowerTimeLabel; // @synthesize fullscreenHybridLowerTimeLabel=_fullscreenHybridLowerTimeLabel;
@property(retain, nonatomic) NTKVictoryTimeLabel *fullscreenHybridUpperTimeLabel; // @synthesize fullscreenHybridUpperTimeLabel=_fullscreenHybridUpperTimeLabel;
@property(retain, nonatomic) UIButton *circularLogoButton; // @synthesize circularLogoButton=_circularLogoButton;
@property(retain, nonatomic) UIButton *fullscreenLogoButton; // @synthesize fullscreenLogoButton=_fullscreenLogoButton;
@property(retain, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(nonatomic) _Bool invertedColors; // @synthesize invertedColors=_invertedColors;
@property(nonatomic) __weak id <NTKOlympusContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isFrozen) _Bool frozen; // @synthesize frozen;
- (void).cxx_destruct;
- (void)_applyTransitionTritiumOnFraction:(float)arg1;
- (void)tritium_transitionToTritiumOffWithProgress:(float)arg1;
- (void)tritium_transitionToTritiumOnWithProgress:(float)arg1;
- (void)tritium_transitionToFrameSpecifier:(id)arg1;
- (void)timeFormatterTextDidChange:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)containsSubview:(id)arg1;
- (void)handleLogoButtonTouchUpInside:(id)arg1;
- (void)handleLogoButtonResetHighlight:(id)arg1;
- (void)handleLogoButtonHighlighted:(id)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setLogoButtonHighlighted:(_Bool)arg1;
- (void)cleanupAfterEditing;
- (void)prepareForEditing;
- (void)_applyTransitionFraction:(float)arg1 fromTextColor:(id)arg2 toTextColor:(id)arg3;
- (void)_applyTransitionFraction:(float)arg1 fromColor:(id)arg2 toColor:(id)arg3 fromBackgroundColor:(id)arg4 toBackgroundColor:(id)arg5 fromLogoColor:(id)arg6 toLogoColor:(id)arg7;
- (void)_applyAnimationPopTransitionWithFraction:(float)arg1;
- (void)setLabelOutlineColor:(id)arg1;
- (void)setLabelOutlineAlpha:(float)arg1;
- (void)applyTransitionFraction:(float)arg1 fromColorPalette:(id)arg2 toColorPalette:(id)arg3 animateElements:(_Bool)arg4;
- (void)ensureVisibleIfNeeded:(id)arg1;
- (void)setViewsVisibleForStyleTransition;
- (void)setViewsVisibleForDialTransition;
- (void)setViewsVisibilityForDial:(unsigned int)arg1 style:(unsigned int)arg2;
- (void)updateStylesFraction:(float)arg1 fromStyle:(unsigned int)arg2 toStyle:(unsigned int)arg3;
- (void)applyTransitionFraction:(float)arg1 fromStyle:(unsigned int)arg2 toStyle:(unsigned int)arg3;
- (void)applyTransitionFraction:(float)arg1 fromDial:(unsigned int)arg2 toDial:(unsigned int)arg3;
- (void)updateColors;
- (id)circularLogoImageWithoutText;
- (id)circularLogoImage;
- (void)updateTimeLabelsFrame;
- (void)updateLogosFrame;
- (void)layoutSubviews;
- (id)styleWithFont:(id)arg1;
- (id)createTimeLabelWithFont:(id)arg1 option:(unsigned int)arg2;
- (id)victoryFontWithSize:(float)arg1;
- (id)fontForDigitalFullscreen;
- (id)fontForHybridFullscreen;
- (id)monospacedFontForCircularDial;
- (id)fontForCircularDial;
- (void)removeCircularViews;
- (void)removeFullscreenViews;
- (void)createFullscreenHybridViewsIfNeeded;
- (void)createFullscreenDigitalViewsIfNeeded;
- (id)createLogoButtonWithBackgroundImage:(id)arg1;
- (void)createCircularViewsIfNeeded;
- (void)createFullscreenLogoIfNeeded;
- (void)configureViewsForEditing;
- (void)createAndRemoveViewsForCurrentStateIfNeeded;
- (id)initWithDevice:(id)arg1 dial:(unsigned int)arg2 style:(unsigned int)arg3 color:(unsigned int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

