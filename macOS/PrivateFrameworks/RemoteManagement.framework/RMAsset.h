//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteManagement/NSSecureCoding-Protocol.h>

@class NSData, NSString, RMConfigurationAccount;

@interface RMAsset : NSObject <NSSecureCoding>
{
    NSString *_type;
    NSString *_identifier;
    NSString *_serverToken;
    NSData *_content;
    RMConfigurationAccount *_account;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) RMConfigurationAccount *account; // @synthesize account=_account;
@property(readonly, copy, nonatomic) NSData *content; // @synthesize content=_content;
@property(readonly, copy, nonatomic) NSString *serverToken; // @synthesize serverToken=_serverToken;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqualToAsset:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 identifier:(id)arg2 serverToken:(id)arg3 content:(id)arg4 account:(id)arg5;

@end

