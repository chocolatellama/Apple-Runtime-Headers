//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface SFBehavior : NSObject
{
    NSString *_family;
    NSXPCConnection *_connection;
}

+ (id)behaviorFamily:(id)arg1;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain) NSString *family; // @synthesize family=_family;
- (void).cxx_destruct;
- (id)configurationString:(id)arg1 defaultValue:(id)arg2;
- (id)configurationNumber:(id)arg1 defaultValue:(id)arg2;
- (_Bool)featureDisabled:(id)arg1;
- (_Bool)featureEnabled:(id)arg1;
- (_Bool)feature:(id)arg1 defaultValue:(_Bool)arg2;
- (unsigned int)ramping:(id)arg1 force:(_Bool)arg2;
- (id)initBehaviorFamily:(id)arg1 connection:(id)arg2;

@end

