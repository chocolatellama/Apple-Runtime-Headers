//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BookLibrary/NSURLSessionDataDelegate-Protocol.h>

@class NSData, NSError, NSMutableData, NSString;
@protocol BLM3U8ParserDelegate;

@interface BLM3U8Parser : NSObject <NSURLSessionDataDelegate>
{
    _Bool _collectForRewrite;
    id <BLM3U8ParserDelegate> _delegate;
    NSData *_data;
    NSMutableData *_bytes;
    NSError *_error;
    NSMutableData *_collectedData;
}

@property(retain, nonatomic) NSMutableData *collectedData; // @synthesize collectedData=_collectedData;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableData *bytes; // @synthesize bytes=_bytes;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) _Bool collectForRewrite; // @synthesize collectForRewrite=_collectForRewrite;
@property(nonatomic) __weak id <BLM3U8ParserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)rewriteWithURL:(id)arg1;
- (void)saveLine:(id)arg1;
- (void)processLine;
- (id)parseAttributeList:(id)arg1;
- (unsigned long long)consumeBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (_Bool)parseWithError:(id *)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

