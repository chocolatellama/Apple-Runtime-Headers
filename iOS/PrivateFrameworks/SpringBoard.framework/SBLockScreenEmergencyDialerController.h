//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBLockScreenEmergencyCallViewControllerDelegate-Protocol.h>

@class NSString, SBLockScreenEmergencyCallViewController, UIViewController;
@protocol SBLockScreenEmergencyDialerDelegate;

@interface SBLockScreenEmergencyDialerController : NSObject <SBLockScreenEmergencyCallViewControllerDelegate>
{
    SBLockScreenEmergencyCallViewController *_viewController;
    _Bool _active;
    id <SBLockScreenEmergencyDialerDelegate> _delegate;
}

@property(nonatomic) __weak id <SBLockScreenEmergencyDialerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)emergencyCallViewController:(id)arg1 didExitWithError:(id)arg2;
- (void)dismissEmergencyCallViewController:(id)arg1;
- (void)deactivate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

