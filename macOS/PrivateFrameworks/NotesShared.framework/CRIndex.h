//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/CRCoding-Protocol.h>
#import <NotesShared/CRDataType-Protocol.h>
#import <NotesShared/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface CRIndex : NSObject <NSCopying, CRDataType, CRCoding>
{
    NSArray *_indexPath;
}

+ (id)indexForReplica:(id)arg1 betweenIndex:(id)arg2 andIndex:(id)arg3;
+ (id)indexWithPath:(id)arg1;
@property(retain, nonatomic) NSArray *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)tombstone;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)mergeWith:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (long long)compare:(id)arg1;
- (id)indexAtDepth:(unsigned long long)arg1 withInteger:(long long)arg2 replica:(id)arg3;
- (id)previousIndexForReplica:(id)arg1;
- (id)nextIndexForReplica:(id)arg1;
- (unsigned long long)depth;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

