//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import <iTunesStoreUI/PKAddPassesViewControllerDelegate-Protocol.h>

@class NSObject, NSString, PKPass, SSAuthenticationContext, UIViewController;
@protocol OS_dispatch_semaphore;

@interface SUAddiTunesPassOperation : ISOperation <PKAddPassesViewControllerDelegate>
{
    _Bool _addedCard;
    SSAuthenticationContext *_authenticationContext;
    UIViewController *_viewController;
    PKPass *_pass;
    PKPass *_presentedPass;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) PKPass *presentedPass; // @synthesize presentedPass=_presentedPass;
@property(nonatomic) _Bool addedCard; // @synthesize addedCard=_addedCard;
@property(retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
- (void).cxx_destruct;
- (void)addPassesViewControllerDidFinish:(id)arg1;
- (void)run;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

