//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKFrozenReminderObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EKFrozenReminderStructuredLocation : EKFrozenReminderObject
{
}

+ (id)uniqueIdentifierForREMObject:(id)arg1;
+ (_Bool)canCommitSelf;
+ (Class)meltedClass;
- (void)setLatitudeAndLongitudeFromAlternateUniverseObject:(EKPersistentObject_556b3b22 *)arg1 inChangeSet:(id)arg2;
- (double)radius;
- (int)referenceFrame;
- (double)longitude;
- (double)latitude;
- (id)mapKitHandle;
- (id)updateParentToCommitSelf:(id)arg1;
- (id)title;
- (id)uuid;
- (id)updatedStructuredLocation;
- (id)_structuredLocation;
- (id)remObjectID;
@property(readonly) NSString *uniqueIdentifier;
- (id)initWithAlternateUniverseObject:(EKPersistentObject_556b3b22 *)arg1 inEventStore:(id)arg2 withUpdatedChildObjects:(id)arg3;

@end

