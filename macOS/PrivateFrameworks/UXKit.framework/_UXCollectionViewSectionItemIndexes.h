//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UXKit/NSCopying-Protocol.h>

@class NSMutableIndexSet;

@interface _UXCollectionViewSectionItemIndexes : NSObject <NSCopying>
{
    NSMutableIndexSet *_itemIndexesSet;
}

- (id)itemIndexPathsForSection:(unsigned long long)arg1;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (void)adjustForDeletionOfItems:(id)arg1;
- (void)adjustForDeletionOfItem:(unsigned long long)arg1;
- (void)adjustForInsertionOfItems:(id)arg1;
- (void)adjustForInsertionOfItem:(unsigned long long)arg1;
- (void)removeSectionItemIndexes:(id)arg1;
- (void)removeItemsInRange:(struct _NSRange)arg1;
- (void)removeItem:(unsigned long long)arg1;
- (void)addSectionItemIndexes:(id)arg1;
- (void)addItemsInRange:(struct _NSRange)arg1;
- (void)addItem:(unsigned long long)arg1;
- (BOOL)containsItem:(unsigned long long)arg1;
- (id)items;
- (unsigned long long)lastItem;
- (unsigned long long)firstItem;
- (unsigned long long)itemCount;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

