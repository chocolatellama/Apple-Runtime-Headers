//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteViewServices/NSRemoteServiceConnectionDelegate-Protocol.h>

@class NSLocalWindowWrappingRemoteWindow, NSPanel, NSRemoteServiceConnection, NSString;
@protocol NSObject><NSRemoteWindowControllerDelegate, OS_dispatch_queue;

@interface NSRemoteWindowController : NSObject <NSRemoteServiceConnectionDelegate>
{
    NSRemoteServiceConnection *_connection;
    NSLocalWindowWrappingRemoteWindow *_localProxyWindow;
    unsigned int _remoteConnectionID;
    unsigned int _remoteWindowID;
    unsigned long long _windowRights;
    id <NSObject><NSRemoteWindowControllerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    BOOL _isSheet;
    unsigned long long _styleMask;
    BOOL _canBecomeKeyWindow;
    BOOL _canBecomeMainWindow;
    NSString *_pendingingWindowRightsGrantToken;
    CDUnknownBlockType _pendingGrantOfferedBlock;
    NSString *_remoteWindowClass;
    unsigned int _remoteOrderPlaceRequestsAccepted:1;
    unsigned int _disableAutomaticTermination:1;
    unsigned int _requestUpdateSharedWindowFrameInProgress:1;
}

+ (Class)localWindowClass;
@property(copy) NSString *remoteWindowClass; // @synthesize remoteWindowClass=_remoteWindowClass;
@property unsigned int disableAutomaticTermination; // @synthesize disableAutomaticTermination=_disableAutomaticTermination;
@property BOOL canBecomeMainWindow; // @synthesize canBecomeMainWindow=_canBecomeMainWindow;
@property BOOL canBecomeKeyWindow; // @synthesize canBecomeKeyWindow=_canBecomeKeyWindow;
@property(readonly, retain) NSRemoteServiceConnection *connection; // @synthesize connection=_connection;
@property BOOL isSheet; // @synthesize isSheet=_isSheet;
@property(retain) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property id delegate; // @synthesize delegate=_delegate;
@property(readonly, retain) NSPanel *window; // @synthesize window=_localProxyWindow;
- (void).cxx_destruct;
- (int)_completeWindowRightsGrant:(const CDStruct_a41f6e61 *)arg1;
- (void)connection:(id)arg1 didReceiveError:(id)arg2;
- (void)connection:(id)arg1 didReceiveRequest:(id)arg2;
- (BOOL)blacklistedSelector:(SEL)arg1;
- (BOOL)_performKeyEquivalentWithRequest:(id)arg1;
- (void)_sharedWindowShouldChange:(id)arg1;
- (void)hideSharedWindow:(BOOL)arg1 atLocation:(struct CGPoint)arg2;
- (void)_thisWindowShouldChange:(id)arg1;
- (void)_handleReplyActivateSharedWindow:(id)arg1;
- (void)_handleReplySetupSharedWindow:(id)arg1;
- (void)_clearPendingWindowRightsGrant;
- (void)_handleRequestUpdateSharedWindowFrame:(id)arg1;
- (void)_handleUserValueChanged:(id)arg1;
- (void)_handleModalSession:(id)arg1;
- (id)findAccessibilityChildWindow:(id)arg1;
- (id)createAccessibilityChildWindow:(id)arg1 withStyle:(id)arg2;
- (BOOL)acceptsFirstResponder;
- (BOOL)asyncSelectFirstResponderWithDirection:(unsigned long long)arg1;
- (void)sendEvent:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)sendSynchronousRequest:(id)arg1;
- (BOOL)initializeRemoteWindow;
- (void)cleanup;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 rights:(unsigned long long)arg2;
- (id)initWithRemotePanel:(id)arg1 remoteServiceReply:(id)arg2 rights:(unsigned long long)arg3;
- (id)initWithConnection:(id)arg1;

@end

