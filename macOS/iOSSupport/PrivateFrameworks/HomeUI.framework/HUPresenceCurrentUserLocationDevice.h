//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDevice;

@interface HUPresenceCurrentUserLocationDevice : NSObject
{
    unsigned long long _type;
    HMDevice *_customDevice;
}

+ (id)customDeviceWithHMDevice:(id)arg1;
+ (id)currentDevice;
+ (id)FMFDevice;
@property(readonly, nonatomic) HMDevice *customDevice; // @synthesize customDevice=_customDevice;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1 customDevice:(id)arg2;

@end

