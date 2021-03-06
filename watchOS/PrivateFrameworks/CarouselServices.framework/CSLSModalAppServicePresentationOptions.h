//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarouselServices/NSCopying-Protocol.h>
#import <CarouselServices/NSSecureCoding-Protocol.h>

@class NSSet, NSString;

@interface CSLSModalAppServicePresentationOptions : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _animated;
    _Bool _suppressesLaunchUI;
    _Bool _wantsAlertSuppression;
    NSString *_bundleIdentifier;
    int _presentationContext;
    NSSet *_allowedAlertServices;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSSet *allowedAlertServices; // @synthesize allowedAlertServices=_allowedAlertServices;
@property(nonatomic) _Bool wantsAlertSuppression; // @synthesize wantsAlertSuppression=_wantsAlertSuppression;
@property(nonatomic) int presentationContext; // @synthesize presentationContext=_presentationContext;
@property(nonatomic) _Bool suppressesLaunchUI; // @synthesize suppressesLaunchUI=_suppressesLaunchUI;
@property(nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

