//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/MCProfile.h>

@class MCProfileServiceProfile, NSArray, NSNumber;

@interface MCConfigurationProfile : MCProfile
{
    NSArray *_payloads;
    NSArray *_managedPayloads;
    _Bool _isCloudProfile;
    _Bool _isCloudLocked;
    _Bool _isMDMProfile;
    MCProfileServiceProfile *_OTAProfile;
    NSNumber *_isCloudProfileNum;
    NSNumber *_isCloudLockedNum;
}

@property(retain, nonatomic) NSNumber *isCloudLockedNum; // @synthesize isCloudLockedNum=_isCloudLockedNum;
@property(retain, nonatomic) NSNumber *isCloudProfileNum; // @synthesize isCloudProfileNum=_isCloudProfileNum;
@property(nonatomic) _Bool isMDMProfile; // @synthesize isMDMProfile=_isMDMProfile;
@property(nonatomic) _Bool isCloudLocked; // @synthesize isCloudLocked=_isCloudLocked;
@property(nonatomic) _Bool isCloudProfile; // @synthesize isCloudProfile=_isCloudProfile;
@property(retain, nonatomic) MCProfileServiceProfile *OTAProfile; // @synthesize OTAProfile=_OTAProfile;
- (void).cxx_destruct;
- (void)replacePayloadWithUUID:(id)arg1 withPayload:(id)arg2;
- (id)earliestCertificateExpiryDate;
- (id)localizedManagedPayloadSummaryByType;
- (id)localizedPayloadSummaryByType;
- (id)_localizedPayloadSummaryByType:(id)arg1;
- (id)stubDictionary;
- (id)description;
- (id)installationWarningsIncludeUnsignedProfileWarning:(_Bool)arg1;
- (_Bool)isManagedByProfileService;
- (_Bool)isManagedByMDM;
- (id)initWithDictionary:(id)arg1 options:(id)arg2 signerCerts:(id)arg3 allowEmptyPayload:(_Bool)arg4 outError:(id *)arg5;
- (id)subjectSummaryFromCertificateWithPersistentID:(id)arg1;
- (struct __SecCertificate *)copyCertificateWithPersistentID:(id)arg1;
- (id)subjectSummaryFromCertificatePayloadWithUUID:(id)arg1;
- (struct __SecCertificate *)copyCertificateFromPayloadWithUUID:(id)arg1;
- (id)_subjectSummaryFromCertificate:(struct __SecCertificate *)arg1;
- (id)payloadWithUUID:(id)arg1;
- (id)managedPayloads;
- (id)payloads;
- (void)_sortPayloads;
- (id)_sortPayloads:(id)arg1;
- (void)_addObjectsOfClass:(Class)arg1 fromArray:(id)arg2 toArray:(id)arg3;

@end

