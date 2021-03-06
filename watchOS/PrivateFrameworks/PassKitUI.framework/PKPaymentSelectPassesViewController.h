//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupTableViewController.h>

@class NSArray, NSMutableArray, NSString, PKPeerPaymentAccount, PKTableHeaderView;
@protocol PKPaymentSelectPassesViewControllerDelegate;

@interface PKPaymentSelectPassesViewController : PKPaymentSetupTableViewController
{
    PKTableHeaderView *_headerView;
    NSArray *_passes;
    NSMutableArray *_selectedIndexPaths;
    id <PKPaymentSelectPassesViewControllerDelegate> _delegate;
    PKPeerPaymentAccount *_peerPaymentAccount;
    _Bool _canSelectMultiplePasses;
    NSString *_buttonText;
    NSString *_headerTitle;
    NSString *_headerSubtitle;
}

@property(copy, nonatomic) NSString *headerSubtitle; // @synthesize headerSubtitle=_headerSubtitle;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(nonatomic) _Bool canSelectMultiplePasses; // @synthesize canSelectMultiplePasses=_canSelectMultiplePasses;
- (void).cxx_destruct;
- (void)_setNavigationBarEnabled:(_Bool)arg1;
- (void)_setViewEnabledState:(_Bool)arg1;
- (void)_continuousButtonPressed;
- (void)_setContinuousButtonEnabledState;
- (void)setHeaderViewTitle:(id)arg1 subtitle:(id)arg2;
- (id)headerView;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(int)arg1 context:(int)arg2;
- (id)initWithPaymentPasses:(id)arg1 context:(int)arg2 delegate:(id)arg3 peerPaymentAccount:(id)arg4;

@end

