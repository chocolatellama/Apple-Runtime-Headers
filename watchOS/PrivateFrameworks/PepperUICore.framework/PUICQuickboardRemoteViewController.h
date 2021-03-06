//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <PepperUICore/PUICQuickboardRemoteInterface-Protocol.h>

@class NSString;
@protocol PUICQuickboardRemoteViewControllerDelegate;

@interface PUICQuickboardRemoteViewController : _UIRemoteViewController <PUICQuickboardRemoteInterface>
{
    id <PUICQuickboardRemoteViewControllerDelegate> _delegate;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
+ (id)presentRemoteQuickboardViewControllerWithTextInputContext:(id)arg1 connectionHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) id <PUICQuickboardRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)quickboardDidCancelEditing;
- (void)quickboardDidEndEditing;
- (void)quickboardDidUpdateInputDictionary:(id)arg1;
- (void)quickboardDidUpdateAttributedText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

