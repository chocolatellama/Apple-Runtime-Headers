//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVVolumeHUDAssertion : NSObject
{
    NSString *_clientIdentifier;
    NSString *_sceneIdentifier;
}

@property(readonly, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
@property(readonly, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSceneIdentifier:(id)arg1 clientIdentifier:(id)arg2;

@end

