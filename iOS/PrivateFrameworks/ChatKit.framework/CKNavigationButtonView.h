//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImage, UILabel, UIVisualEffect, UIVisualEffectView;

@interface CKNavigationButtonView : UIView
{
    _Bool _wantsLongPress;
    _Bool _buttonEnabled;
    _Bool _wantsVibrancy;
    CDUnknownBlockType _buttonTappedCallback;
    CDUnknownBlockType _buttonLongPressCallback;
    long long _joinButtonStyle;
    UIImage *_image;
    UIImage *_defaultImage;
    UIImage *_disabledImage;
    UIButton *_imageButton;
    UILabel *_textLabel;
    UIVisualEffectView *_vibrancyView;
    UIVisualEffect *_vibrancyEffect;
    UIVisualEffect *_disabledVibrancyEffect;
    NSString *_text;
}

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIVisualEffect *disabledVibrancyEffect; // @synthesize disabledVibrancyEffect=_disabledVibrancyEffect;
@property(retain, nonatomic) UIVisualEffect *vibrancyEffect; // @synthesize vibrancyEffect=_vibrancyEffect;
@property(retain, nonatomic) UIVisualEffectView *vibrancyView; // @synthesize vibrancyView=_vibrancyView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIButton *imageButton; // @synthesize imageButton=_imageButton;
@property(retain, nonatomic) UIImage *disabledImage; // @synthesize disabledImage=_disabledImage;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) _Bool wantsVibrancy; // @synthesize wantsVibrancy=_wantsVibrancy;
@property(nonatomic, getter=isButtonEnabled) _Bool buttonEnabled; // @synthesize buttonEnabled=_buttonEnabled;
@property(nonatomic) _Bool wantsLongPress; // @synthesize wantsLongPress=_wantsLongPress;
@property(nonatomic) long long joinButtonStyle; // @synthesize joinButtonStyle=_joinButtonStyle;
@property(copy, nonatomic) CDUnknownBlockType buttonLongPressCallback; // @synthesize buttonLongPressCallback=_buttonLongPressCallback;
@property(copy, nonatomic) CDUnknownBlockType buttonTappedCallback; // @synthesize buttonTappedCallback=_buttonTappedCallback;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)_buttonLongPressed:(id)arg1;
- (void)_buttonTapped:(id)arg1;
- (void)_setupImageButton;
- (id)initWithImage:(id)arg1 disabledImage:(id)arg2 text:(id)arg3 wantsLongPress:(_Bool)arg4;
- (id)initWithImage:(id)arg1 text:(id)arg2 wantsLongPress:(_Bool)arg3;

@end

