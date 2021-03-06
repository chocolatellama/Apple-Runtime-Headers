//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, NSData, NSMutableArray, NSNotificationCenter;
@protocol ABDistributedNotificationListenerDelegate, CNScheduler;

@interface ABDistributedNotificationListener : NSObject
{
    NSNotificationCenter *_notificationCenter;
    NSMutableArray *_notificationTokens;
    id <CNScheduler> _scheduler;
    CNContactStore *_store;
    NSData *_lastHistoryToken;
    id <ABDistributedNotificationListenerDelegate> _delegate;
}

+ (id)os_log;
@property(readonly, nonatomic) __weak id <ABDistributedNotificationListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSData *lastHistoryToken; // @synthesize lastHistoryToken=_lastHistoryToken;
@property(retain, nonatomic) CNContactStore *store; // @synthesize store=_store;
@property(retain, nonatomic) id <CNScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(retain, nonatomic) NSMutableArray *notificationTokens; // @synthesize notificationTokens=_notificationTokens;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
- (void).cxx_destruct;
- (void)processChangesSinceLastNotification:(id)arg1;
- (void)stopListeningForDistributedNotifications;
- (void)startListeningForDistributedNotificationsWithNames:(id)arg1;
- (id)description;
- (id)initWithDelegate:(id)arg1 notificationCenter:(id)arg2 contactStore:(id)arg3 scheduler:(id)arg4;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

