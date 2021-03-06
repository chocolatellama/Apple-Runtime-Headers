//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIMotionEffectGroup, UIView;

@interface TVLGridCollectionViewCell : UICollectionViewCell
{
    UIMotionEffectGroup *_motionEffectGroup;
    _Bool _pressIsAnimating;
    _Bool _unpressOnEndAnimating;
    _Bool _acceptsFocus;
    UIView *_hostedView;
    struct UIEdgeInsets _cellInset;
}

@property(nonatomic) struct UIEdgeInsets cellInset; // @synthesize cellInset=_cellInset;
@property(retain, nonatomic) UIView *hostedView; // @synthesize hostedView=_hostedView;
@property(nonatomic) _Bool acceptsFocus; // @synthesize acceptsFocus=_acceptsFocus;
- (void).cxx_destruct;
- (void)_showPressState;
- (void)_clearPressState;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (void)_detachMotionEffects;
- (void)_attachMotionEffects;
- (void)layoutSubviews;
- (_Bool)_unapplyMotionEffect:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;
- (id)preferredFocusEnvironments;
- (_Bool)canBecomeFocused;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

