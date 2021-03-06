//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBasePathToElementType.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class NSString;

@interface EWSPathToExtendedFieldType : EWSBasePathToElementType <XSDefinitionProvider>
{
    BOOL _PropertyIdSpecified;
    long long _DistinguishedPropertySetId;
    long long _PropertyId;
    NSString *_PropertyName;
    NSString *_PropertySetId;
    NSString *_PropertyTag;
    long long _PropertyType;
}

+ (id)definition;
@property(nonatomic) long long PropertyType; // @synthesize PropertyType=_PropertyType;
@property(copy, nonatomic) NSString *PropertyTag; // @synthesize PropertyTag=_PropertyTag;
@property(copy, nonatomic) NSString *PropertySetId; // @synthesize PropertySetId=_PropertySetId;
@property(copy, nonatomic) NSString *PropertyName; // @synthesize PropertyName=_PropertyName;
@property(nonatomic) BOOL PropertyIdSpecified; // @synthesize PropertyIdSpecified=_PropertyIdSpecified;
@property(nonatomic) long long PropertyId; // @synthesize PropertyId=_PropertyId;
@property(nonatomic) long long DistinguishedPropertySetId; // @synthesize DistinguishedPropertySetId=_DistinguishedPropertySetId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

