//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCListener, NSXPCListenerEndpoint, NSXPCStoreServer;

@interface PLXPCPhotoLibraryStoreContainer : NSObject
{
    NSXPCStoreServer *_server;
    NSXPCListener *_listener;
}

+ (id)newContainerWithPathManager:(id)arg1;
@property(readonly) NSXPCStoreServer *server; // @synthesize server=_server;
- (void).cxx_destruct;
@property(readonly) NSXPCListenerEndpoint *listenerEndpoint;
- (id)initWithServer:(id)arg1 listener:(id)arg2;

@end

