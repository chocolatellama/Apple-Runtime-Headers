//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AKBulletTextListStackView, PUICButton, UIImageView, UILabel, UIScrollView, UIView;
@protocol AKAuthorizationPrivacyDetailViewControllerDelegate;

@interface AKAuthorizationPrivacyDetailViewController : UIViewController
{
    id <AKAuthorizationPrivacyDetailViewControllerDelegate> _delegate;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UIImageView *_privacyImageView;
    UILabel *_splashLabel;
    UILabel *_splashSummaryLabel;
    PUICButton *_learnHowButton;
    AKBulletTextListStackView *_akBulletTextListStackView;
}

+ (void)initialize;
@property(retain, nonatomic) AKBulletTextListStackView *akBulletTextListStackView; // @synthesize akBulletTextListStackView=_akBulletTextListStackView;
@property(retain, nonatomic) PUICButton *learnHowButton; // @synthesize learnHowButton=_learnHowButton;
@property(retain, nonatomic) UILabel *splashSummaryLabel; // @synthesize splashSummaryLabel=_splashSummaryLabel;
@property(retain, nonatomic) UILabel *splashLabel; // @synthesize splashLabel=_splashLabel;
@property(retain, nonatomic) UIImageView *privacyImageView; // @synthesize privacyImageView=_privacyImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <AKAuthorizationPrivacyDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleLearnHowTapped:(id)arg1;
- (id)learnHowAttributedText;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

