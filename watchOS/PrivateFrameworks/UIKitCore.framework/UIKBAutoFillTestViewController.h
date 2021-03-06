//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/UITableViewDataSource-Protocol.h>
#import <UIKitCore/UITableViewDelegate-Protocol.h>

@class NSString, UIKBAutoFillTestArchive;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UIKBAutoFillTestArchive *_testArchive;
}

+ (void)enumerateSubviewsOfRootView:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) UIKBAutoFillTestArchive *testArchive; // @synthesize testArchive=_testArchive;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)_applyNavigationItemPropertiesFromTestArchive;
- (void)viewDidLoad;
- (id)initWithAutoFillTestArchive:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

