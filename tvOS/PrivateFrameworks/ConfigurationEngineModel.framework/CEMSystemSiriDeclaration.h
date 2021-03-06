//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMSystemSiriDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadAllowAssistant;
    NSNumber *_payloadAllowDictation;
    NSNumber *_payloadAllowAssistantUserGeneratedContent;
    NSNumber *_payloadForceAssistantProfanityFilter;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowAssistant:(id)arg2 withAllowDictation:(id)arg3 withAllowAssistantUserGeneratedContent:(id)arg4 withForceAssistantProfanityFilter:(id)arg5;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadForceAssistantProfanityFilter; // @synthesize payloadForceAssistantProfanityFilter=_payloadForceAssistantProfanityFilter;
@property(copy, nonatomic) NSNumber *payloadAllowAssistantUserGeneratedContent; // @synthesize payloadAllowAssistantUserGeneratedContent=_payloadAllowAssistantUserGeneratedContent;
@property(copy, nonatomic) NSNumber *payloadAllowDictation; // @synthesize payloadAllowDictation=_payloadAllowDictation;
@property(copy, nonatomic) NSNumber *payloadAllowAssistant; // @synthesize payloadAllowAssistant=_payloadAllowAssistant;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (_Bool)mustBeSupervised;
- (_Bool)multipleAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

