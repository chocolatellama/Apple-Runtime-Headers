//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSData, NSDictionary, NSError, NSMutableDictionary, NSString;
@protocol NSSecureCoding;

__attribute__((visibility("hidden")))
@interface ACRemoteDeviceMessage : NSObject
{
    NSMutableDictionary *_payload;
    NSData *_data;
    _Bool _needsReply;
    _Bool _isReply;
    NSString *_identifier;
}

+ (id)_whitelistedClasses;
+ (id)actionMessageWithCommand:(id)arg1 account:(id)arg2 options:(id)arg3;
+ (id)replyForMessage:(id)arg1 withSuccess:(_Bool)arg2 error:(id)arg3;
+ (id)replyForMessage:(id)arg1 withSuccess:(_Bool)arg2 result:(id)arg3 error:(id)arg4;
@property(nonatomic) _Bool isReply; // @synthesize isReply=_isReply;
@property(nonatomic) _Bool needsReply; // @synthesize needsReply=_needsReply;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSData *data;
- (void)_invalidateCachedData;
- (id)_payloadObjectForKey:(id)arg1;
- (void)_setPayloadObject:(id)arg1 forKey:(id)arg2;
- (id)initWithData:(id)arg1;
- (id)init;
@property(readonly, nonatomic) NSDictionary *options;
@property(readonly, nonatomic) ACAccount *account;
@property(readonly, nonatomic) NSString *command;
@property(readonly, nonatomic) NSObject<NSSecureCoding> *result;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) _Bool success;
@property(readonly, nonatomic) NSString *sentMessageIdentifier;

@end

