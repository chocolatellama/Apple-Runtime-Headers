//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotifications/NSCopying-Protocol.h>
#import <UserNotifications/NSSecureCoding-Protocol.h>

@interface UNNotificationSettings : NSObject <NSCopying, NSSecureCoding>
{
    int _authorizationStatus;
    int _soundSetting;
    int _badgeSetting;
    int _alertSetting;
    int _notificationCenterSetting;
    int _lockScreenSetting;
    int _carPlaySetting;
    int _alertStyle;
    int _showPreviewsSetting;
    int _criticalAlertSetting;
    _Bool _providesAppNotificationSettings;
    int _announcementSetting;
    int _groupingSetting;
}

+ (_Bool)supportsSecureCoding;
+ (id)settingsWithAuthorizationStatus:(int)arg1 soundSetting:(int)arg2 badgeSetting:(int)arg3 alertSetting:(int)arg4 notificationCenterSetting:(int)arg5 lockScreenSetting:(int)arg6 carPlaySetting:(int)arg7 announcementSetting:(int)arg8 criticalAlertSetting:(int)arg9 alertStyle:(int)arg10 showPreviewsSetting:(int)arg11 groupingSetting:(int)arg12 providesAppNotificationSettings:(_Bool)arg13;
+ (id)settingsWithAuthorizationStatus:(int)arg1 soundSetting:(int)arg2 badgeSetting:(int)arg3 alertSetting:(int)arg4 notificationCenterSetting:(int)arg5 lockScreenSetting:(int)arg6 carPlaySetting:(int)arg7 spokenSetting:(int)arg8 criticalAlertSetting:(int)arg9 alertStyle:(int)arg10 showPreviewsSetting:(int)arg11 providesAppNotificationSettings:(_Bool)arg12;
+ (id)emptySettings;
@property(readonly, nonatomic) int groupingSetting; // @synthesize groupingSetting=_groupingSetting;
@property(readonly, nonatomic) int announcementSetting; // @synthesize announcementSetting=_announcementSetting;
@property(readonly, nonatomic) _Bool providesAppNotificationSettings; // @synthesize providesAppNotificationSettings=_providesAppNotificationSettings;
@property(readonly, nonatomic) int criticalAlertSetting; // @synthesize criticalAlertSetting=_criticalAlertSetting;
@property(readonly, nonatomic) int showPreviewsSetting; // @synthesize showPreviewsSetting=_showPreviewsSetting;
@property(readonly, nonatomic) int alertStyle; // @synthesize alertStyle=_alertStyle;
@property(readonly, nonatomic) int carPlaySetting; // @synthesize carPlaySetting=_carPlaySetting;
@property(readonly, nonatomic) int lockScreenSetting; // @synthesize lockScreenSetting=_lockScreenSetting;
@property(readonly, nonatomic) int notificationCenterSetting; // @synthesize notificationCenterSetting=_notificationCenterSetting;
@property(readonly, nonatomic) int alertSetting; // @synthesize alertSetting=_alertSetting;
@property(readonly, nonatomic) int badgeSetting; // @synthesize badgeSetting=_badgeSetting;
@property(readonly, nonatomic) int soundSetting; // @synthesize soundSetting=_soundSetting;
@property(readonly, nonatomic) int authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (_Bool)hasEnabledSettings;
- (id)initWithAuthorizationStatus:(int)arg1 soundSetting:(int)arg2 badgeSetting:(int)arg3 alertSetting:(int)arg4 notificationCenterSetting:(int)arg5 lockScreenSetting:(int)arg6 carPlaySetting:(int)arg7 announcementSetting:(int)arg8 criticalAlertSetting:(int)arg9 alertStyle:(int)arg10 showPreviewsSetting:(int)arg11 groupingSetting:(int)arg12 providesAppNotificationSettings:(_Bool)arg13;

@end

