//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDDrawableInfo.h>

#import <TSReading/TSDMixing-Protocol.h>

@class TSDPathSource;

@interface TSDMaskInfo : TSDDrawableInfo <TSDMixing>
{
    TSDPathSource *mPathSource;
}

@property(retain, nonatomic) TSDPathSource *pathSource; // @synthesize pathSource=mPathSource;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (void)setGeometry:(id)arg1;
- (Class)repClass;
- (Class)layoutClass;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 pathSource:(id)arg3;

@end

