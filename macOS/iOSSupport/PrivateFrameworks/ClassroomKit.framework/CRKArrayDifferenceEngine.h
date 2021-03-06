//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CRKArrayDifferenceConfiguration;

@interface CRKArrayDifferenceEngine : NSObject
{
    NSObject *mObject;
    NSString *mKeyPath;
    id <CRKArrayDifferenceConfiguration> _configuration;
}

+ (id)configurationWithIncomingItemsIdentifierFunction:(CDUnknownBlockType)arg1 publishedItemsIdentifierFunction:(CDUnknownBlockType)arg2;
+ (id)identityConfiguration;
@property(retain, nonatomic) id <CRKArrayDifferenceConfiguration> configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)updateWithNewArray:(id)arg1;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 configuration:(id)arg3;

@end

