//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDNetworkRouterLANRule-Protocol.h>
#import <HomeKitDaemon/HMDTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HMDNetworkRouterIPAddress, HMDNetworkRouterLANIdentifierList, HMDNetworkRouterProtocol, HMDNetworkRouterRuleDirection, HMDTLVUnsignedNumberValue, NSString;

@interface HMDNetworkRouterStaticPortRule : NSObject <HMDNetworkRouterLANRule, NSCopying, HMDTLVProtocol>
{
    HMDNetworkRouterRuleDirection *_direction;
    HMDNetworkRouterLANIdentifierList *_lanIdentifierList;
    HMDNetworkRouterProtocol *_protocol;
    HMDNetworkRouterIPAddress *_destinationIPAddress;
    HMDTLVUnsignedNumberValue *_destinationPortStart;
    HMDTLVUnsignedNumberValue *_destinationPortEnd;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
+ (id)ruleFromFirewallRuleLAN:(id)arg1;
@property(retain, nonatomic) HMDTLVUnsignedNumberValue *destinationPortEnd; // @synthesize destinationPortEnd=_destinationPortEnd;
@property(retain, nonatomic) HMDTLVUnsignedNumberValue *destinationPortStart; // @synthesize destinationPortStart=_destinationPortStart;
@property(retain, nonatomic) HMDNetworkRouterIPAddress *destinationIPAddress; // @synthesize destinationIPAddress=_destinationIPAddress;
@property(retain, nonatomic) HMDNetworkRouterProtocol *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) HMDNetworkRouterLANIdentifierList *lanIdentifierList; // @synthesize lanIdentifierList=_lanIdentifierList;
@property(retain, nonatomic) HMDNetworkRouterRuleDirection *direction; // @synthesize direction=_direction;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithDirection:(id)arg1 lanIdentifierList:(id)arg2 protocol:(id)arg3 destinationIPAddress:(id)arg4 destinationPortStart:(id)arg5 destinationPortEnd:(id)arg6;
- (id)init;
- (void)addTo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

