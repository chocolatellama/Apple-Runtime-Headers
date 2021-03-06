//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKSectionTableViewController.h>

#import <PassKitUI/PKAccountServiceAccountResolutionControllerDelegate-Protocol.h>

@class NSArray, NSString, PKAccount, PKAccountService, PKAccountServiceAccountResolutionController, PKInstallmentPlan, PKPaymentPass, PKSplashImageHeaderView;
@protocol PKPaymentDataProvider;

@interface PKInstallmentPlanHistoryViewController : PKSectionTableViewController <PKAccountServiceAccountResolutionControllerDelegate>
{
    PKAccount *_account;
    PKAccountService *_accountService;
    PKInstallmentPlan *_installmentPlan;
    PKPaymentPass *_paymentPass;
    PKAccountServiceAccountResolutionController *_resolutionController;
    id <PKPaymentDataProvider> _dataProvider;
    NSArray *_transactions;
    NSString *_deviceName;
    PKSplashImageHeaderView *_headerView;
    float _headerHeight;
}

- (void).cxx_destruct;
- (void)_handleAccountChangedNotification:(id)arg1;
- (void)_presentBillPayment;
- (id)_makePaymentCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_paymentHistoryCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_progressCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_totalCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_paymentDetailsCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)_configureHeader;
- (void)_updateWithInstallmentPlan:(id)arg1;
- (void)_presentTransactionDetailsForTransaction:(id)arg1;
- (void)accountServiceAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(_Bool)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (_Bool)shouldMapSection:(unsigned int)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 installmentPlan:(id)arg2 accountService:(id)arg3 paymentPass:(id)arg4 dataProvider:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

