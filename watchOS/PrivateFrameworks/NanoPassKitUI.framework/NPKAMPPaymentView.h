//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UIImageView, UILabel, UIStackView;

@interface NPKAMPPaymentView : UIView
{
    struct CGImage *_appIconImage;
    unsigned int _displayStyle;
    UIImageView *_appIconImageView;
    UILabel *_appDetailsLabel;
    UILabel *_amountLabel;
    UIStackView *_stackView;
}

+ (id)_stringFromNPKAMPPaymentViewDisplayStyle:(unsigned int)arg1;
+ (float)_appIconImageViewHeightForDisplayStyle:(unsigned int)arg1;
+ (_Bool)_isRightToLeft;
+ (id)_stackViewWithArrangedSubviews:(id)arg1;
+ (id)ampPaymentViewWithFrame:(struct CGRect)arg1;
+ (id)ampPaymentView;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(copy, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(copy, nonatomic) UILabel *appDetailsLabel; // @synthesize appDetailsLabel=_appDetailsLabel;
@property(copy, nonatomic) UIImageView *appIconImageView; // @synthesize appIconImageView=_appIconImageView;
@property(nonatomic) unsigned int displayStyle; // @synthesize displayStyle=_displayStyle;
@property(nonatomic) struct CGImage *appIconImage; // @synthesize appIconImage=_appIconImage;
- (void).cxx_destruct;
- (float)_heightForAttributedText:(id)arg1 inDisplayStyle:(unsigned int)arg2;
- (unsigned int)displayStyleFittingHeight:(float)arg1 withAttributedText:(id)arg2;
- (id)_applyStylingToValueString:(id)arg1 displayStyle:(unsigned int)arg2 lineBreakMode:(int)arg3;
- (id)_detailParagraphStyleForDisplayStyle:(unsigned int)arg1 withLineBreakMode:(int)arg2;
- (id)_headlineParagraphStyleWithLineBreakMode:(int)arg1;
- (id)_detailFontForDisplayStyle:(unsigned int)arg1;
- (id)_headlineFontForDisplayStyle:(unsigned int)arg1;
- (id)_secondaryTextColor;
- (id)_primaryTextColor;
- (float)_bottomPaddingForDisplayStyle:(unsigned int)arg1;
- (float)_verticalInterItemPaddingForDisplayStyle:(unsigned int)arg1;
- (void)_updateAmountLabelFontForDisplayStyle:(unsigned int)arg1;
- (void)_updateAppIconImageWithImage:(struct CGImage *)arg1 forDisplayStyle:(unsigned int)arg2;
- (void)_updateRelativeConstraintsForDisplayStyle:(unsigned int)arg1;
- (void)_updateVerticalConstraintsForDisplayStyle:(unsigned int)arg1;
- (void)_setUpHorizontalConstraints;
- (void)_setUpStackView;
- (void)_setUpAmountLabel;
- (void)_setUpAppDetailsLabel;
- (void)_setUpAppIconImageView;
@property(copy, nonatomic) NSString *amountText;
@property(copy, nonatomic) NSAttributedString *appDetailsAttributedText;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

