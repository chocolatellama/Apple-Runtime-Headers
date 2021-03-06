//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/CSLSStatusOverlayAssertionProtocol-Protocol.h>

@class NSString, NSXPCConnection;
@protocol CSLStatusOverlayAssertionDelegate, OS_dispatch_queue;

@interface CSLStatusOverlayAssertion : NSObject <CSLSStatusOverlayAssertionProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _active;
    id <CSLStatusOverlayAssertionDelegate> _delegate;
    NSString *_statusString;
    NSXPCConnection *_connection;
}

@property(nonatomic) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
@property(nonatomic) __weak id <CSLStatusOverlayAssertionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_queue_setStatusString:(id)arg1;
- (oneway void)setStatusString:(id)arg1;
- (oneway void)acquireWithStatusString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_invalidate;
- (void)resume;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

