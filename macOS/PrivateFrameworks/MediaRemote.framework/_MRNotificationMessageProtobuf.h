//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSMutableArray;

@interface _MRNotificationMessageProtobuf : PBCodable <NSCopying>
{
    NSMutableArray *_notifications;
    NSMutableArray *_playerPaths;
    NSMutableArray *_userInfos;
}

+ (Class)playerPathType;
+ (Class)userInfoType;
+ (Class)notificationType;
@property(retain, nonatomic) NSMutableArray *playerPaths; // @synthesize playerPaths=_playerPaths;
@property(retain, nonatomic) NSMutableArray *userInfos; // @synthesize userInfos=_userInfos;
@property(retain, nonatomic) NSMutableArray *notifications; // @synthesize notifications=_notifications;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)playerPathAtIndex:(unsigned long long)arg1;
- (unsigned long long)playerPathsCount;
- (void)addPlayerPath:(id)arg1;
- (void)clearPlayerPaths;
- (id)userInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)userInfosCount;
- (void)addUserInfo:(id)arg1;
- (void)clearUserInfos;
- (id)notificationAtIndex:(unsigned long long)arg1;
- (unsigned long long)notificationsCount;
- (void)addNotification:(id)arg1;
- (void)clearNotifications;

@end

