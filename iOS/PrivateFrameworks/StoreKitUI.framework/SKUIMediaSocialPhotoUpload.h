//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface SKUIMediaSocialPhotoUpload : NSObject <NSCopying>
{
    _Bool _hasAlpha;
    unsigned long long _height;
    unsigned long long _length;
    NSString *_MD5;
    NSString *_token;
    NSString *_tokenType;
    NSString *_type;
    NSNumber *_uniqueIdentifier;
    unsigned long long _width;
}

@property(nonatomic) unsigned long long width; // @synthesize width=_width;
@property(copy, nonatomic) NSNumber *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *tokenType; // @synthesize tokenType=_tokenType;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *MD5; // @synthesize MD5=_MD5;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(nonatomic) unsigned long long height; // @synthesize height=_height;
@property(nonatomic) _Bool hasAlpha; // @synthesize hasAlpha=_hasAlpha;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUploadDictionary:(id)arg1;

@end

