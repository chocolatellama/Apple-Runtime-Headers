//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface IKGLSharedContextRegistry : NSObject
{
    struct __CFDictionary *_sharedContexts;
    struct __CFDictionary *_contexts;
    struct __CFSet *_dirtyContexts;
    CDStruct_df38f2d5 *_lastResult;
    void *_lastOwner;
    struct _CGLContextObject *_lastContext;
}

+ (id)sharedInstance;
- (void)willUseTexture:(unsigned int)arg1 inContext:(struct _CGLContextObject *)arg2;
- (void)didDeleteTexture:(unsigned int)arg1 inContext:(struct _CGLContextObject *)arg2;
- (void)didCreateTexture:(unsigned int)arg1 inContext:(struct _CGLContextObject *)arg2;
- (void)makeContextReady:(struct _CGLContextObject *)arg1;
- (void)markDirty:(struct _CGLContextObject *)arg1;
- (void)removeSharedTexturesWithOwner:(void *)arg1;
- (void)removeTexturesInContext:(struct _CGLContextObject *)arg1 owner:(void *)arg2;
- (void)removeOwner:(void *)arg1;
- (CDStruct_df38f2d5 *)glImageInfoInContext:(struct _CGLContextObject *)arg1 owner:(void *)arg2 createIfNeeded:(BOOL)arg3;
- (void)removeContext:(struct _CGLContextObject *)arg1;
- (void)_removeTexturesInContext:(struct _CGLContextObject *)arg1;
- (BOOL)isContext:(struct _CGLContextObject *)arg1 sharedWith:(struct _CGLContextObject *)arg2;
- (void)declareContext:(struct _CGLContextObject *)arg1 isSharedWith:(struct _CGLContextObject *)arg2;
- (void)_associate:(struct _CGLContextObject *)arg1 with:(struct _CGLContextObject *)arg2;
- (void)_moveTexturesFromContext:(struct _CGLContextObject *)arg1 toContext:(struct _CGLContextObject *)arg2;
- (void)_checkSharedDictionaryConsistency;
- (struct __CFDictionary *)sharedContexts;
- (void)dealloc;
- (id)init;

@end

