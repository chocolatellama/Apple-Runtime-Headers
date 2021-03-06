//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@class NSString;

@interface ATXAVRouteInfo : NSObject <NSSecureCoding>
{
    _Bool _isExternalRoute;
    NSString *_deviceName;
    NSString *_deviceID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool isExternalRoute; // @synthesize isExternalRoute=_isExternalRoute;
@property(readonly, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(readonly, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDeviceName:(id)arg1 deviceID:(id)arg2 isExternalRoute:(_Bool)arg3;

@end

