//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKSectionTableViewController.h>

@class PKOrderPhysicalCardController, PKPhysicalCardController, UIBarButtonItem;

@interface PKReplacePhysicalCardReasonViewController : PKSectionTableViewController
{
    PKPhysicalCardController *_controller;
    int _context;
    unsigned int _feature;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_nextButton;
    _Bool _hasSelectedRow;
    int _selectedRow;
    _Bool _loadingCustomizationOptions;
    PKOrderPhysicalCardController *_orderController;
}

- (void).cxx_destruct;
- (void)_nextButtonPressed:(id)arg1;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_updateNavigationButtons;
- (id)_cellForReasonAtIndexPath:(id)arg1 inTableView:(id)arg2;
- (void)_reasonRowSelectedAtIndexPath:(id)arg1 inTableView:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillLayoutSubviews;
- (_Bool)shouldMapSection:(unsigned int)arg1;
- (void)viewDidLoad;
- (id)initWithPhysicalCardController:(id)arg1 context:(int)arg2;

@end

