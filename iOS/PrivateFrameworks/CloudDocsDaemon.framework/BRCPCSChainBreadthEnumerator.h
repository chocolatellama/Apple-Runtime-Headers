//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class BRCPCSChainInfo;

__attribute__((visibility("hidden")))
@interface BRCPCSChainBreadthEnumerator : NSEnumerator
{
    BRCPCSChainInfo *_chainInfo;
    struct PQLResultSet *_enumerator;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)chainInfo;
- (id)nextObject;
- (id)initWithPCSChainInfo:(id)arg1 clientZone:(id)arg2;

@end

