//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface UIKeyboardInputManagerClient : NSObject
{
    NSXPCConnection *_connection;
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)handleError:(id)arg1 forRequest:(id)arg2;
- (void)handleRequest:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)init;
- (void)dealloc;

@end

