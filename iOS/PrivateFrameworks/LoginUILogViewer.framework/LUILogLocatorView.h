//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIButton, UICollectionView;

@interface LUILogLocatorView : UIView
{
    UIButton *_upArrowButton;
    UIButton *_downArrowButton;
    UIButton *_screenshotButton;
    UICollectionView *_screenshotCollectionView;
}

@property(retain, nonatomic) UICollectionView *screenshotCollectionView; // @synthesize screenshotCollectionView=_screenshotCollectionView;
@property(retain, nonatomic) UIButton *screenshotButton; // @synthesize screenshotButton=_screenshotButton;
@property(retain, nonatomic) UIButton *downArrowButton; // @synthesize downArrowButton=_downArrowButton;
@property(retain, nonatomic) UIButton *upArrowButton; // @synthesize upArrowButton=_upArrowButton;
- (void).cxx_destruct;
- (id)_createButtonWithImageName:(id)arg1;
- (id)_createScreenshotCollectionView;
- (id)_createElementStackViewWithElements:(id)arg1;
- (void)handleOrientationChange:(long long)arg1;
- (void)layoutSubviews;
- (void)_setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

