//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMManagementTestMessageMessage_Reply : CEMPayloadBase
{
    NSString *_replyEcho;
}

+ (id)buildRequiredOnlyWithEcho:(id)arg1;
+ (id)buildWithEcho:(id)arg1;
+ (id)allowedReasons;
+ (id)allowedReplyKeys;
@property(copy, nonatomic) NSString *replyEcho; // @synthesize replyEcho=_replyEcho;
- (void).cxx_destruct;
- (id)serializePayload;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

