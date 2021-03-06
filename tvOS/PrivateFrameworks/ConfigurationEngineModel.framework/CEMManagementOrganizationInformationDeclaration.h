//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSString;

@interface CEMManagementOrganizationInformationDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadOrganizationName;
    NSString *_payloadOrganizationAddress;
    NSString *_payloadOrganizationPhone;
    NSString *_payloadOrganizationEmail;
    NSString *_payloadOrganizationMagic;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withOrganizationName:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withOrganizationName:(id)arg2 withOrganizationAddress:(id)arg3 withOrganizationPhone:(id)arg4 withOrganizationEmail:(id)arg5 withOrganizationMagic:(id)arg6;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSString *payloadOrganizationMagic; // @synthesize payloadOrganizationMagic=_payloadOrganizationMagic;
@property(copy, nonatomic) NSString *payloadOrganizationEmail; // @synthesize payloadOrganizationEmail=_payloadOrganizationEmail;
@property(copy, nonatomic) NSString *payloadOrganizationPhone; // @synthesize payloadOrganizationPhone=_payloadOrganizationPhone;
@property(copy, nonatomic) NSString *payloadOrganizationAddress; // @synthesize payloadOrganizationAddress=_payloadOrganizationAddress;
@property(copy, nonatomic) NSString *payloadOrganizationName; // @synthesize payloadOrganizationName=_payloadOrganizationName;
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

