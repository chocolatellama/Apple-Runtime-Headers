//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _UIStatusBarDataEntry;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDataAggregatorUpdate : NSObject
{
    _Bool _animated;
    _UIStatusBarDataEntry *_entry;
}

+ (id)updateWithEntry:(id)arg1;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(retain, nonatomic) _UIStatusBarDataEntry *entry; // @synthesize entry=_entry;
- (void).cxx_destruct;

@end

