//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Carousel/BSTransactionObserver-Protocol.h>
#import <Carousel/CSLNavigationStackContainerViewDelegate-Protocol.h>

@class BSEventQueue, BSEventQueueLock, BSTransaction, CSLNavigationStackContainerView, NSArray, NSString;
@protocol CSLNavigationStackControllerDelegate;

@interface CSLNavigationStackController : UIViewController <BSTransactionObserver, CSLNavigationStackContainerViewDelegate>
{
    _Bool _backgroundColorFrozen;
    NSArray *_viewControllers;
    id <CSLNavigationStackControllerDelegate> _delegate;
    BSEventQueue *_updateQueue;
    BSEventQueueLock *_viewDidLoadLock;
    BSTransaction *_currentTransaction;
    BSEventQueueLock *_transactionLock;
    CSLNavigationStackContainerView *_containerView;
    NSArray *_managedViewControllers;
}

@property(retain, nonatomic) NSArray *managedViewControllers; // @synthesize managedViewControllers=_managedViewControllers;
@property(retain, nonatomic) CSLNavigationStackContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) BSEventQueueLock *transactionLock; // @synthesize transactionLock=_transactionLock;
@property(retain, nonatomic) BSTransaction *currentTransaction; // @synthesize currentTransaction=_currentTransaction;
@property(retain, nonatomic) BSEventQueueLock *viewDidLoadLock; // @synthesize viewDidLoadLock=_viewDidLoadLock;
@property(retain, nonatomic) BSEventQueue *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(nonatomic, getter=isBackgroundColorFrozen) _Bool backgroundColorFrozen; // @synthesize backgroundColorFrozen=_backgroundColorFrozen;
@property(nonatomic) __weak id <CSLNavigationStackControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void).cxx_destruct;
- (id)navigationStackContainerView:(id)arg1 pairedViewForManagedView:(id)arg2;
- (_Bool)navigationStackContainerView:(id)arg1 isViewManaged:(id)arg2;
- (void)transactionDidComplete:(id)arg1;
- (void)_setCurrentTransaction:(id)arg1;
- (int)_navigationControllerOperationForUpdate:(id)arg1;
- (id)_animatorForUpdate:(id)arg1;
- (id)_transitionContextForUpdate:(id)arg1;
- (void)_executeUpdate:(id)arg1;
- (void)_preflightUpdate:(id)arg1;
- (void)completeCurrentTransitionImmediately;
@property(readonly, nonatomic) UIViewController *visibleViewController;
@property(readonly, nonatomic) UIViewController *topViewController;
- (void)enqueueRequest:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)setViewControllers:(id)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

