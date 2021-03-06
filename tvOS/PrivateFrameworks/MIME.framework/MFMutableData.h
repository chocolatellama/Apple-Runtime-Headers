//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableData.h>

#import <MIME/NSCopying-Protocol.h>
#import <MIME/NSMutableCopying-Protocol.h>

@interface MFMutableData : NSMutableData <NSCopying, NSMutableCopying>
{
    void *_bytes;
    unsigned long long _length;
    unsigned long long _mappedLength;
    unsigned long long _capacity;
    unsigned long long _threshold;
    char *_path;
    int _fd;
    unsigned long long _flushFrom;
    _Bool _flush;
    _Bool _immutable;
    _Bool _vm;
}

- (_Bool)mf_immutable;
- (void)_mapMutableData:(_Bool)arg1;
- (void)_flushToDisk:(unsigned long long)arg1 capacity:(unsigned long long)arg2;
- (_Bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2;
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;
- (void)mf_makeImmutable;
- (void)setMappingThreshold:(unsigned int)arg1;
- (void)setLength:(unsigned long long)arg1;
- (id)subdataWithRange:(struct _NSRange)arg1;
- (void)appendData:(id)arg1;
- (void)appendBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void *)mutableBytes;
- (const void *)bytes;
- (unsigned long long)length;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLength:(unsigned long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2;
- (id)_initWithFd:(int)arg1 path:(id)arg2 mutable:(_Bool)arg3;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)init;

@end

