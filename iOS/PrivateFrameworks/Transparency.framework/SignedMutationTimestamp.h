//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Transparency/GPBMessage.h>

#import <Transparency/TransparencyVerifiable-Protocol.h>

@class NSData, NSString, Signature, TransparencyManagedDataStore, TransparencySignatureVerifier;

@interface SignedMutationTimestamp : GPBMessage <TransparencyVerifiable>
{
}

+ (id)descriptor;
- (_Bool)verifyWithError:(id *)arg1;
- (id)copyManagedObjectWithError:(id *)arg1;
- (id)parsedMutationWithError:(id *)arg1;
@property(retain) NSString *application;
@property(retain) TransparencySignatureVerifier *verifier;
@property(retain) TransparencyManagedDataStore *dataStore;

// Remaining properties
@property(nonatomic) _Bool hasSignature; // @dynamic hasSignature;
@property(copy, nonatomic) NSData *mutation; // @dynamic mutation;
@property(retain, nonatomic) Signature *signature; // @dynamic signature;

@end

