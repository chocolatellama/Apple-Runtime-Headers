//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PrintingPrivate/PMXPCSupportDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, PMXPCSupport;
@protocol PKBrowserDelegate;

@interface PKBrowser : NSObject <PMXPCSupportDelegate>
{
    id <PKBrowserDelegate> _delegate;
    BOOL _browsing;
    NSMutableDictionary *_devices;
    PMXPCSupport *_xpc;
}

@property(retain) PMXPCSupport *xpc; // @synthesize xpc=_xpc;
@property(nonatomic) BOOL browsing; // @synthesize browsing=_browsing;
@property id <PKBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *devices; // @synthesize devices=_devices;
- (void)printerUpdated:(id)arg1 more:(BOOL)arg2;
- (void)printerRemoved:(id)arg1 more:(BOOL)arg2;
- (void)printerAdded:(id)arg1 more:(BOOL)arg2;
- (void)handleEventForCommand:(int)arg1 status:(int)arg2 event:(id)arg3;
- (id)queueList;
- (void)stop;
- (void)start;
@property(readonly) NSArray *filteredDeviceList;
@property(readonly) NSArray *deviceList;
@property unsigned long long browsingMask; // @dynamic browsingMask;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

