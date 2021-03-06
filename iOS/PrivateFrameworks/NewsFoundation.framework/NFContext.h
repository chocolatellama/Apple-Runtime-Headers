//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFoundation/NFContext-Protocol.h>

@class NFCallbackStore, NSMutableDictionary, NSString;

@interface NFContext : NSObject <NFContext>
{
    NFCallbackStore *_callbackStore;
    NSMutableDictionary *_objects;
}

@property(readonly, nonatomic) NSMutableDictionary *objects; // @synthesize objects=_objects;
@property(readonly, nonatomic) NFCallbackStore *callbackStore; // @synthesize callbackStore=_callbackStore;
- (void).cxx_destruct;
- (id)mergeWithContext:(id)arg1;
- (id)resolveForKey:(id)arg1;
- (void)whenUnsafeResolvingWithKey:(id)arg1 scope:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (void)whenResolvingKey:(id)arg1 scope:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (void)whenResolvingProtocol:(id)arg1 scope:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (void)whenResolvingClass:(Class)arg1 scope:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (void)unsafeUseObject:(id)arg1 forKey:(id)arg2 name:(id)arg3;
- (void)useObject:(id)arg1 forKey:(id)arg2;
- (void)useObject:(id)arg1 forProtocol:(id)arg2 name:(id)arg3;
- (void)useObject:(id)arg1 forProtocol:(id)arg2;
- (void)useObject:(id)arg1 forClass:(Class)arg2 name:(id)arg3;
- (void)useObject:(id)arg1 forClass:(Class)arg2;
- (id)initWithCallbackStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

