//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreFollowUp/NSSecureCoding-Protocol.h>

@class FLFollowUpNotification, NSArray, NSData, NSDictionary, NSString;

@interface FLFollowUpItem : NSObject <NSSecureCoding>
{
    _Bool _showInSettings;
    _Bool _shouldPersistWhenActivated;
    _Bool _shouldPersistWhenDismissed;
    NSString *_uniqueIdentifier;
    NSString *_groupIdentifier;
    FLFollowUpNotification *_notification;
    NSString *_targetBundleIdentifier;
    NSString *_title;
    NSString *_informativeText;
    NSString *_informativeFooterText;
    NSString *_representingBundlePath;
    NSString *_bundleIconName;
    unsigned long long _displayStyle;
    NSString *_categoryIdentifier;
    NSString *_extensionIdentifier;
    NSArray *_actions;
    NSDictionary *_userInfo;
    unsigned long long _sqlID;
    NSString *_clientIdentifier;
    NSString *_delegateMachServiceName;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *delegateMachServiceName; // @synthesize delegateMachServiceName=_delegateMachServiceName;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(nonatomic) unsigned long long sqlID; // @synthesize sqlID=_sqlID;
@property _Bool shouldPersistWhenDismissed; // @synthesize shouldPersistWhenDismissed=_shouldPersistWhenDismissed;
@property _Bool shouldPersistWhenActivated; // @synthesize shouldPersistWhenActivated=_shouldPersistWhenActivated;
@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy) NSArray *actions; // @synthesize actions=_actions;
@property(copy) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
@property(copy) NSString *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property unsigned long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(copy, nonatomic) NSString *bundleIconName; // @synthesize bundleIconName=_bundleIconName;
@property(copy, nonatomic) NSString *representingBundlePath; // @synthesize representingBundlePath=_representingBundlePath;
@property(copy, nonatomic) NSString *informativeFooterText; // @synthesize informativeFooterText=_informativeFooterText;
@property(copy, nonatomic) NSString *informativeText; // @synthesize informativeText=_informativeText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *targetBundleIdentifier; // @synthesize targetBundleIdentifier=_targetBundleIdentifier;
@property(nonatomic) _Bool showInSettings; // @synthesize showInSettings=_showInSettings;
@property(retain, nonatomic) FLFollowUpNotification *notification; // @synthesize notification=_notification;
@property(copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void).cxx_destruct;
- (id)description;
@property(retain, nonatomic) NSData *_userInfoData;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithoutDefaults;
- (id)init;
- (_Bool)isHSA2PasswordResetItem;
- (_Bool)isHSA2LoginItem;

@end

