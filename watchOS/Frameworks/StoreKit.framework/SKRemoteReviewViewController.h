//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <StoreKit/SKUIClientReviewViewController-Protocol.h>

@class NSString, SKStoreReviewViewController;
@protocol SKRemoteReviewViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKRemoteReviewViewController : _UIRemoteViewController <SKUIClientReviewViewController>
{
    id <SKRemoteReviewViewControllerDelegate> _delegate;
    SKStoreReviewViewController *_reviewViewController;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
@property(nonatomic) __weak SKStoreReviewViewController *reviewViewController; // @synthesize reviewViewController=_reviewViewController;
@property(nonatomic) __weak id <SKRemoteReviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)didFinishWithResult:(id)arg1 error:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

