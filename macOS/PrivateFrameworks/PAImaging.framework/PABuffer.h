//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PAPixelFormat;
@protocol PAPixelFormat;

@interface PABuffer : NSObject
{
    struct PFIntSize_st _size;
    PAPixelFormat *_format;
    long long _bytesPerRow;
    const void *_bytes;
}

@property(readonly, nonatomic) const void *bytes; // @synthesize bytes=_bytes;
@property(readonly, nonatomic) long long bytesPerRow; // @synthesize bytesPerRow=_bytesPerRow;
@property(readonly, nonatomic) id <PAPixelFormat> pixelFormat; // @synthesize pixelFormat=_format;
@property(readonly, nonatomic) struct PFIntSize_st size; // @synthesize size=_size;
- (void).cxx_destruct;
- (void)debugDump:(id)arg1;
- (struct CGImage *)_newCGImageWithColorSpace:(struct CGColorSpace *)arg1;
- (const void *)bytesAtPoint:(struct PFIntPoint_st)arg1;
- (long long)_bytesOffsetAtPoint:(struct PFIntPoint_st)arg1;
@property(readonly, nonatomic) unsigned long long bytesPerPixel;
@property(readonly, nonatomic) unsigned long long length;
@property(readonly, nonatomic) int format;
- (id)initWithNUBuffer:(id)arg1;
- (id)initWithSize:(struct PFIntSize_st)arg1 pixelFormat:(id)arg2 bytes:(const void *)arg3 bytesPerRow:(long long)arg4;
- (id)initWithSize:(struct PFIntSize_st)arg1 format:(int)arg2 bytes:(const void *)arg3 bytesPerRow:(long long)arg4;

@end

