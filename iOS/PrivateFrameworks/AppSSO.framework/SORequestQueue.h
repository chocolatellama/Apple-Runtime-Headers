//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SORequestQueue : NSObject
{
    NSMutableArray *_queue;
    id _processingItem;
    CDUnknownBlockType _processItemBlock;
}

+ (id)debugDescription;
+ (id)requestQueueWithIdentifier:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType processItemBlock; // @synthesize processItemBlock=_processItemBlock;
- (void).cxx_destruct;
- (id)description;
- (void)_itemCompleted;
- (void)_processItem:(id)arg1;
- (void)removeAllRequestsWithBlock:(CDUnknownBlockType)arg1;
- (void)processNextRequest;
- (void)enqueueRequest:(id)arg1;
- (id)init;

@end

