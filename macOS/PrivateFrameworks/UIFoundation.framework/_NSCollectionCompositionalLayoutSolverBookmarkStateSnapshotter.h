//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _NSCollectionSectionSolutionBookmark;

@interface _NSCollectionCompositionalLayoutSolverBookmarkStateSnapshotter : NSObject
{
    _NSCollectionSectionSolutionBookmark *_bookmark;
    long long _originalSectionIndex;
}

@property(readonly, nonatomic) long long originalSectionIndex; // @synthesize originalSectionIndex=_originalSectionIndex;
- (void).cxx_destruct;
- (void)applyStateToBookmark:(id)arg1;
- (id)initWithBookmark:(id)arg1 originalSectionIndex:(long long)arg2;

@end

