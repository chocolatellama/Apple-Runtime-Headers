//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _MSPQueryState : NSObject
{
    NSArray *_contents;
    NSArray *_identifiers;
}

@property(readonly) NSArray *identifiers; // @synthesize identifiers=_identifiers;
@property(readonly) NSArray *contents; // @synthesize contents=_contents;
- (void).cxx_destruct;
- (id)stateByMovingObjectAtIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (id)stateByDeletingObjectsAtIndexes:(id)arg1;
- (id)stateByDeletingObjectAtIndex:(unsigned int)arg1;
- (id)stateByInvokingPreprocessingBlock:(CDUnknownBlockType)arg1 mappingBlock:(CDUnknownBlockType)arg2;
- (id)initWithContents:(id)arg1 identifiers:(id)arg2;
- (id)initWithContainerContents:(id)arg1;

@end

