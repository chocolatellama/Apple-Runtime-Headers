//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SBStatusBarStyleOverridesCoordinatorClient : NSObject
{
    int _registeredOverrides;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_registeredOverridesQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *registeredOverridesQueue; // @synthesize registeredOverridesQueue=_registeredOverridesQueue;
@property(nonatomic) int registeredOverrides; // @synthesize registeredOverrides=_registeredOverrides;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)acquireAssertionAndDeliverTapContextToClient:(id)arg1;
- (id)initWithConnection:(id)arg1 andStyleOverrides:(int)arg2;

@end

