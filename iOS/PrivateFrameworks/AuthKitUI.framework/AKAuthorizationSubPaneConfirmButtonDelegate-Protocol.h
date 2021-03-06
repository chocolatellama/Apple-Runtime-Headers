//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AuthKitUI/NSObject-Protocol.h>

@class AKAuthorizationPresentationContext, AKAuthorizationSubPaneConfirmButton;

@protocol AKAuthorizationSubPaneConfirmButtonDelegate <NSObject>
- (AKAuthorizationPresentationContext *)presentationContext;
- (void)performAuthorization;
- (void)performPasswordAuthentication;
- (void)subpaneConfirmButtonDidFailBiometry:(AKAuthorizationSubPaneConfirmButton *)arg1;
- (void)subPaneConfirmButtonDidEnterProcessingState:(AKAuthorizationSubPaneConfirmButton *)arg1;

@optional
- (_Bool)validateReadyForAuthorization;
@end

