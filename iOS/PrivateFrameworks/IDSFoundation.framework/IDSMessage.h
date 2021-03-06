//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDSFoundation/IDSBaseMessage.h>

#import <IDSFoundation/NSCopying-Protocol.h>

@class NSDictionary, NSNumber;

@interface IDSMessage : IDSBaseMessage <NSCopying>
{
    NSNumber *_wantsDeliveryStatus;
    NSNumber *_version;
    NSDictionary *_deliveryStatusContext;
    _Bool _wantsCertifiedDelivery;
}

@property(copy) NSNumber *version; // @synthesize version=_version;
@property(copy) NSDictionary *deliveryStatusContext; // @synthesize deliveryStatusContext=_deliveryStatusContext;
@property _Bool wantsCertifiedDelivery; // @synthesize wantsCertifiedDelivery=_wantsCertifiedDelivery;
@property(copy) NSNumber *wantsDeliveryStatus; // @synthesize wantsDeliveryStatus=_wantsDeliveryStatus;
- (void).cxx_destruct;
- (id)_objectForKeyFromMadridBag:(id)arg1;
- (id)_madridServerBag;
- (_Bool)_shouldUseJSONForEncoding;
- (_Bool)wantsUserAgentInHeaders;
- (id)userAgentHeaderString;
- (id)messageBody;
- (_Bool)wantsHTTPHeaders;
- (_Bool)wantsAPSRetries;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

