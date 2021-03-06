//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCMomentsHistoryBuffer : NSObject
{
    id _delegate;
    int _bufferLength;
    NSMutableArray *_timestampQueue;
    NSMutableDictionary *_sampleMap;
    unsigned int _lastTimestamp;
}

- (unsigned int)getUpdatedTimestampWithTimestamp:(unsigned int)arg1;
- (void)enqueueWithSample:(struct opaqueCMSampleBuffer *)arg1 timestamp:(unsigned int)arg2;
- (void)dequeueOneFrame;
- (id)delegate;
- (int)getCount;
- (void)flushBuffer;
- (struct opaqueCMSampleBuffer *)getClosestSampleForTimestamp:(unsigned int)arg1;
- (void)updateBufferWithSample:(struct opaqueCMSampleBuffer *)arg1 timestamp:(unsigned int)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 bufferLength:(int)arg2 dispatchQueue:(id)arg3;

@end

