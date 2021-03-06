//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPSSVGF;
@protocol MPSSVGFTextureAllocator, MTLTexture;

@interface MPSSVGFDenoiser : NSObject
{
    id <MTLTexture> _prevFrameCountTexture;
    id <MTLTexture> _prevMomentsTexture;
    id <MTLTexture> _prevMomentsTexture2;
    id <MTLTexture> _prevTexture;
    id <MTLTexture> _prevTexture2;
    unsigned long long _bilateralFilterIterations;
    BOOL _clear;
    MPSSVGF *_svgf;
    id <MPSSVGFTextureAllocator> _textureAllocator;
}

@property(readonly, nonatomic) id <MPSSVGFTextureAllocator> textureAllocator; // @synthesize textureAllocator=_textureAllocator;
@property(readonly, nonatomic) MPSSVGF *svgf; // @synthesize svgf=_svgf;
- (id)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 motionVectorTexture:(id)arg3 depthNormalTexture:(id)arg4 previousDepthNormalTexture:(id)arg5;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id *)arg3 sourceTexture2:(id)arg4 destinationTexture2:(id *)arg5 motionVectorTexture:(id)arg6 depthNormalTexture:(id)arg7 previousDepthNormalTexture:(id)arg8;
- (void)encodeClearToCommandBuffer:(id)arg1;
- (void)clearTemporalHistory;
- (void)releaseTemporaryTextures;
- (void)dealloc;
- (id)initWithSVGF:(id)arg1 textureAllocator:(id)arg2;
- (id)initWithDevice:(id)arg1;
@property(nonatomic) unsigned long long bilateralFilterIterations;

@end

