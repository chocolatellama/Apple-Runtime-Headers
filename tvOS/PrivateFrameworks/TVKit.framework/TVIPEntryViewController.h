//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TVKit/TVIPEntryViewDelegate-Protocol.h>

@class NSString, TVHeaderView, TVIPEntryView, UILabel;
@protocol TVIPEntryViewControllerDelegate;

@interface TVIPEntryViewController : UIViewController <TVIPEntryViewDelegate>
{
    TVHeaderView *_titleView;
    UILabel *_promptLabel;
    TVIPEntryView *_ipEntryView;
    NSString *_prompt;
    id <TVIPEntryViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <TVIPEntryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
- (void).cxx_destruct;
- (id)_ipEntryView;
- (void)ipEntryViewDidFinishEditing:(id)arg1;
@property(copy, nonatomic) NSString *ipAddress;
- (void)setTitle:(id)arg1;
- (id)preferredFocusEnvironments;
- (_Bool)becomeFirstResponder;
- (void)viewDidLayoutSubviews;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

