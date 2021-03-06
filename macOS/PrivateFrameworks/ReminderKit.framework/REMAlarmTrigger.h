//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>
#import <ReminderKit/REMObjectIDProviding-Protocol.h>

@class REMObjectID;

@interface REMAlarmTrigger : NSObject <REMObjectIDProviding, NSSecureCoding>
{
    REMObjectID *_objectID;
}

+ (id)cdEntityName;
+ (id)objectIDWithUUID:(id)arg1;
+ (id)newObjectID;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) REMObjectID *objectID; // @synthesize objectID=_objectID;
- (void).cxx_destruct;
@property(readonly, nonatomic) REMObjectID *remObjectID;
- (void)encodeWithCoder:(id)arg1;
- (id)_deepCopy;
- (BOOL)isContentEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) BOOL isTemporal;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithAlarmTrigger:(id)arg1 objectID:(id)arg2;
- (id)initWithObjectID:(id)arg1;

@end

