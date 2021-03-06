//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface _RWITCPRelayMessage : NSObject
{
    BOOL _writtenHeader;
    unsigned long long _writtenPayloadOffset;
    NSData *_payload;
}

+ (id)TCPRelayMessageWithPayload:(id)arg1;
+ (id)TCPRelayMessageFromDataStream:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSData *payload; // @synthesize payload=_payload;
- (void).cxx_destruct;
- (long long)writeInternal:(CDUnknownBlockType)arg1;
- (long long)write:(int)arg1;
@property(readonly, nonatomic) unsigned long long length;
- (id)initWithPayload:(id)arg1;

@end

