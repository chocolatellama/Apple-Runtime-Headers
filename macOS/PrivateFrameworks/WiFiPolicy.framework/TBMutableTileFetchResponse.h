//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WiFiPolicy/TBFetchResponse-Protocol.h>

@class NSArray, NSDictionary, NSError, NSMutableSet, NSSet, NSString;

@interface TBMutableTileFetchResponse : NSObject <TBFetchResponse>
{
    NSError *error;
    NSArray *results;
    NSDictionary *resultsByBSSID;
    NSMutableSet *_mutableTiles;
}

@property(retain, nonatomic) NSMutableSet *mutableTiles; // @synthesize mutableTiles=_mutableTiles;
@property(readonly, nonatomic) NSDictionary *resultsByBSSID; // @synthesize resultsByBSSID;
@property(readonly, nonatomic) NSArray *results; // @synthesize results;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *tiles;
- (void)addResponse:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

