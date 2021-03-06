//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOUSBHostObject, NSRecursiveLock;

@interface IOUSBHostInterestNotificationReference : NSObject
{
    BOOL _interestNotificationPortDestroyed;
    IOUSBHostObject *_hostObject;
    NSRecursiveLock *_interestNotificationLock;
}

@property(retain) NSRecursiveLock *interestNotificationLock; // @synthesize interestNotificationLock=_interestNotificationLock;
@property BOOL interestNotificationPortDestroyed; // @synthesize interestNotificationPortDestroyed=_interestNotificationPortDestroyed;
@property __weak IOUSBHostObject *hostObject; // @synthesize hostObject=_hostObject;
- (void).cxx_destruct;
- (id)initWithHostObject:(id)arg1;

@end

