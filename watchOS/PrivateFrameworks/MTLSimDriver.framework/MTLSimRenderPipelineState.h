//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/_MTLRenderPipelineState.h>

#import <MTLSimDriver/MTLRenderPipelineStateSPI-Protocol.h>
#import <MTLSimDriver/MTLSerializerRenderPipelineState-Protocol.h>

@class MTLDebugInstrumentationData, MTLSimDevice, NSString;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface MTLSimRenderPipelineState : _MTLRenderPipelineState <MTLRenderPipelineStateSPI, MTLSerializerRenderPipelineState>
{
    MTLSimDevice *_device;
    unsigned int _pipelineRef;
}

- (unsigned int)imageblockMemoryLengthForDimensions:(CDStruct_778afa1c)arg1;
@property(readonly) unsigned int imageblockSampleLength;
- (unsigned int)getVertexShaderTelemetryID;
- (unsigned int)getFragmentShaderTelemetryID;
- (id)newVertexShaderDebugInfo;
- (id)newFragmentShaderDebugInfo;
- (unsigned int)pipelineRef;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 pipelineRef:(unsigned int)arg2 descriptor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *fragmentDebugInstrumentationData;
@property(readonly) unsigned int hash;
@property(readonly) NSString *label;
@property(readonly) unsigned int maxTotalThreadsPerThreadgroup;
@property(nonatomic) unsigned long long resourceIndex;
@property(readonly) Class superclass;
@property(readonly) _Bool supportIndirectCommandBuffers;
@property(readonly) _Bool threadgroupSizeMatchesTileSize;
@property(readonly) unsigned long long uniqueIdentifier;
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *vertexDebugInstrumentationData;

@end

