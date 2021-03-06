//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDP/CDPDAuthListener-Protocol.h>
#import <CoreCDP/CDPDCircleListener-Protocol.h>

@class NSString;
@protocol CDPDCircleProxy;

@interface CDPManateeStateController : NSObject <CDPDAuthListener, CDPDCircleListener>
{
    id <CDPDCircleProxy> _circleProxy;
}

@property(retain, nonatomic) id <CDPDCircleProxy> circleProxy; // @synthesize circleProxy=_circleProxy;
- (void).cxx_destruct;
- (_Bool)_checkCircleStatusWithContext:(id)arg1 error:(id *)arg2;
- (void)_sendNotification:(const char *)arg1 withValue:(unsigned long long)arg2;
- (void)_didCreateCircleProxy;
- (void)reportManateeUnavailable;
- (void)reportManateeAvailable;
- (void)circleViewStatusChanged;
- (void)circleStatusChanged;
- (void)securityLevelChanged:(_Bool)arg1;
- (_Bool)isPrimaryAccountHSA2;
- (_Bool)_checkSecurityEligibility:(id *)arg1;
- (_Bool)isManateeAvailable:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

