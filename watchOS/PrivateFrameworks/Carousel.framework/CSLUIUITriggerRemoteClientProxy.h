//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/CSLSUIProvider-Protocol.h>
#import <Carousel/CSLSUITriggerClientExportedInterface-Protocol.h>
#import <Carousel/CSLSUITriggerServerExportedInterface-Protocol.h>

@class NSMutableArray, NSString, NSXPCConnection;
@protocol CSLUIUITriggerRemoteClientProxyDelegate, OS_dispatch_queue;

@interface CSLUIUITriggerRemoteClientProxy : NSObject <CSLSUITriggerServerExportedInterface, CSLSUITriggerClientExportedInterface, CSLSUIProvider>
{
    NSXPCConnection *_outgoingConnection;
    NSMutableArray *_triggerNames;
    NSObject<OS_dispatch_queue> *_queue;
    id <CSLUIUITriggerRemoteClientProxyDelegate> _delegate;
    NSXPCConnection *_incomingConnection;
    NSString *_machServiceName;
}

@property(copy) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
@property(retain, nonatomic) NSXPCConnection *incomingConnection; // @synthesize incomingConnection=_incomingConnection;
@property(nonatomic) __weak id <CSLUIUITriggerRemoteClientProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_clearOutgoingConnection;
- (void)_connectIfNecessary;
- (void)_clearTriggers;
- (void)removeUITriggerName:(id)arg1;
- (void)addUITriggerName:(id)arg1 usage:(id)arg2;
- (void)connectWithMachServiceName:(id)arg1;
- (void)handleUITriggerWithName:(id)arg1 dictionary:(id)arg2 reason:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestUITriggerWithRegistration:(id)arg1 UITriggerName:(id)arg2 withDictionary:(id)arg3 withReason:(int)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)_connectionInvalidated;
- (id)triggerNames;
- (id)initWithIncomingConnection:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

