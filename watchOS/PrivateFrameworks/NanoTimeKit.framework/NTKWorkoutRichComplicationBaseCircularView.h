//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKit/CLKMonochromeComplicationView-Protocol.h>

@class CLKComplicationTemplate, NSString, NTKColoringImageView, NTKWorkoutComplicationAnimatedWrapperView, UIColor;
@protocol CLKMonochromeFilterProvider;

@interface NTKWorkoutRichComplicationBaseCircularView : UIView <CLKMonochromeComplicationView>
{
    UIView *_backgroundView;
    UIColor *_immutableBackgroundColor;
    NTKColoringImageView *_staticImageView;
    NTKWorkoutComplicationAnimatedWrapperView *_animatedImageView;
    int _state;
    _Bool _paused;
    id <CLKMonochromeFilterProvider> _filterProvider;
    CLKComplicationTemplate *_complicationTemplate;
}

@property(retain, nonatomic) CLKComplicationTemplate *complicationTemplate; // @synthesize complicationTemplate=_complicationTemplate;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) __weak id <CLKMonochromeFilterProvider> filterProvider; // @synthesize filterProvider=_filterProvider;
- (void).cxx_destruct;
- (void)_updateUI;
- (void)_applyChanges;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(float)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithNoActiveWorkoutImageName:(id)arg1 animatedImagesName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

