//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface CPLEngineScope : NSObject <NSSecureCoding>
{
    NSString *_scopeIdentifier;
    int _scopeType;
    NSDate *_creationDate;
    int _localIndex;
    int _cloudIndex;
    int _stableIndex;
}

+ (_Bool)supportsSecureCoding;
+ (void)formatStatusDictionary:(id)arg1 forScopeWithIdentifier:(id)arg2 appendString:(CDUnknownBlockType)arg3 appendTopLevelStatus:(CDUnknownBlockType)arg4 appendLineStatus:(CDUnknownBlockType)arg5;
+ (id)separatorForStatusKey:(id)arg1;
@property(nonatomic) int stableIndex; // @synthesize stableIndex=_stableIndex;
@property(nonatomic) int cloudIndex; // @synthesize cloudIndex=_cloudIndex;
@property(nonatomic) int localIndex; // @synthesize localIndex=_localIndex;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) int scopeType; // @synthesize scopeType=_scopeType;
@property(readonly, nonatomic) NSString *scopeIdentifier; // @synthesize scopeIdentifier=_scopeIdentifier;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)description;
- (id)statusDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithScopeIdentifier:(id)arg1 scopeType:(int)arg2;

@end

