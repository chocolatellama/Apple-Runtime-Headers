//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface BOSBundleComponentVersion : NSObject
{
    NSString *_shortVersionString;
    NSString *_bundleVersion;
    NSString *_sourceVersion;
    NSString *_buildVersion;
}

+ (id)_combinedVersionAndInfoDictionaryForCFBundle:(struct __CFBundle *)arg1;
+ (id)_combinedVersionAndInfoDictionaryForBundle:(id)arg1;
+ (id)_orderedVersionKeys;
+ (id)bundleComponentVersionWithOnDiskBundle:(id)arg1;
@property(retain) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(retain) NSString *sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property(retain) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain) NSString *shortVersionString; // @synthesize shortVersionString=_shortVersionString;
- (void).cxx_destruct;
@property(readonly) NSDictionary *attributeDictionary;
- (long long)compare:(id)arg1;
- (id)initWithAttributes:(id)arg1;
- (id)initWithShortVersionString:(id)arg1 bundleVersion:(id)arg2 sourceVersion:(id)arg3 buildVersion:(id)arg4;
- (void)_setBuildVersion:(id)arg1;

@end

