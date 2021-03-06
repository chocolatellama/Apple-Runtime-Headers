//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface CKPrettyError : NSError
{
}

+ (id)descriptionForError:(id)arg1 paths:(BOOL)arg2;
+ (id)descriptionForError:(id)arg1;
+ (id)secureCodableError:(id)arg1;
+ (id)errorWithDictionaryRepresentation:(id)arg1;
+ (id)dictionaryRepresentationForError:(id)arg1;
+ (id)itemErrorFromError:(id)arg1 forID:(id)arg2;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 path:(id)arg3 format:(id)arg4;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 format:(id)arg3;
+ (id)errorWithCode:(long long)arg1 error:(id)arg2 URL:(id)arg3 format:(id)arg4;
+ (id)errorWithCode:(long long)arg1 error:(id)arg2 path:(id)arg3 format:(id)arg4;
+ (id)errorWithCode:(long long)arg1 URL:(id)arg2 format:(id)arg3;
+ (id)errorWithCode:(long long)arg1 path:(id)arg2 format:(id)arg3;
+ (id)errorWithCode:(long long)arg1 error:(id)arg2 format:(id)arg3;
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2 error:(id)arg3 format:(id)arg4;
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2 format:(id)arg3;
+ (id)errorWithCode:(long long)arg1 format:(id)arg2;
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2 error:(id)arg3 path:(id)arg4 URL:(id)arg5 description:(id)arg6;
+ (id)sanitizedError:(id)arg1;
+ (BOOL)isError:(id)arg1 withCodes:(id)arg2;
+ (BOOL)isError:(id)arg1 withCode:(long long)arg2;
+ (id)_errorDomain;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)CKPartialErrorDescription;

@end

