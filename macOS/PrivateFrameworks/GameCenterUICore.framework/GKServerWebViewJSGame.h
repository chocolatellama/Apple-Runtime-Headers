//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GKGame, NSNumber, NSString;

@interface GKServerWebViewJSGame : NSObject
{
    GKGame *_game;
}

+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *bundleVersion;
@property(readonly, nonatomic) NSString *bundleId;
@property(readonly, nonatomic) NSNumber *externalVersion;
@property(readonly, nonatomic) NSNumber *adamId;
- (id)attributeKeys;
- (id)initWithGame:(id)arg1;

@end

