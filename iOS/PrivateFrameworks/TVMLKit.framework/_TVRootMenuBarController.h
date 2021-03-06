//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import <TVMLKit/IKAppTabBarController-Protocol.h>
#import <TVMLKit/TVAppRootViewController-Protocol.h>
#import <TVMLKit/UITabBarControllerDelegate-Protocol.h>

@class IKAppTabBar, NSArray, NSString, UINavigationController, UIViewController;
@protocol IKAppNavigationController, _TVAppNavigationControllerDelegate;

@interface _TVRootMenuBarController : UITabBarController <UITabBarControllerDelegate, TVAppRootViewController, IKAppTabBarController>
{
    IKAppTabBar *_appTabBar;
    NSArray *_appTabBarItems;
    unsigned long long _previousSelectedIndex;
    id <_TVAppNavigationControllerDelegate> _appNavigationControllerDelegate;
}

@property(retain, nonatomic) id <_TVAppNavigationControllerDelegate> appNavigationControllerDelegate; // @synthesize appNavigationControllerDelegate=_appNavigationControllerDelegate;
@property(nonatomic) unsigned long long previousSelectedIndex; // @synthesize previousSelectedIndex=_previousSelectedIndex;
@property(retain, nonatomic) NSArray *appTabBarItems; // @synthesize appTabBarItems=_appTabBarItems;
@property(readonly, nonatomic) IKAppTabBar *appTabBar; // @synthesize appTabBar=_appTabBar;
- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)transientTabItemForTabBar:(id)arg1;
- (void)tabBar:(id)arg1 setSelectedTabItem:(id)arg2;
- (id)selectedTabItemForTabBar:(id)arg1;
- (id)tabBar:(id)arg1 setTabItems:(id)arg2;
- (id)tabBar:(id)arg1 tabItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfTabsInTabBar:(id)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
@property(readonly, nonatomic) id <IKAppNavigationController> appNavigationController;
@property(readonly, nonatomic) UIViewController *currentViewController;
@property(readonly, nonatomic) UINavigationController *currentNavigationController;
- (void)setAppNavigationControllersDelegate:(id)arg1;
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

