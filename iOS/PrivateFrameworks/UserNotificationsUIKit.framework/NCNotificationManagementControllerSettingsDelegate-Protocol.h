//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NCNotificationRequest, NCNotificationSectionSettings, NSString;
@protocol NCNotificationManagementController;

@protocol NCNotificationManagementControllerSettingsDelegate <NSObject>
- (void)notificationManagementController:(id <NCNotificationManagementController>)arg1 setAllowsCriticalAlerts:(_Bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationManagementController:(id <NCNotificationManagementController>)arg1 setDeliverQuietly:(_Bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationManagementController:(id <NCNotificationManagementController>)arg1 setAllowsNotifications:(_Bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (NCNotificationSectionSettings *)notificationManagementController:(id <NCNotificationManagementController>)arg1 sectionSettingsForSectionIdentifier:(NSString *)arg2;

@optional
- (void)notificationManagementControllerDidDismissManagementView:(id <NCNotificationManagementController>)arg1;
@end

