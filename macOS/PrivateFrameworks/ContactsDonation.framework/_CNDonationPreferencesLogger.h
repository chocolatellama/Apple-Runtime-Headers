//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsDonation/CNDonationPreferencesLogger-Protocol.h>

@class NSString;
@protocol OS_os_log;

@interface _CNDonationPreferencesLogger : NSObject <CNDonationPreferencesLogger>
{
    NSObject<OS_os_log> *_log_t;
}

@property(readonly, nonatomic) NSObject<OS_os_log> *log_t; // @synthesize log_t=_log_t;
- (void).cxx_destruct;
- (void)setDonationsEnabled:(BOOL)arg1;
- (void)isDonationsEnabled:(BOOL)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

