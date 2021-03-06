//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClockKit/NSCopying-Protocol.h>
#import <ClockKit/NSSecureCoding-Protocol.h>

@class NSString, UIColor, UIImage;

@interface CLKImageProvider : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _finalized;
    _Bool _foregroundAccentImageTinted;
    UIImage *_onePieceImage;
    UIColor *_tintColor;
    UIImage *_twoPieceImageBackground;
    UIImage *_twoPieceImageForeground;
    NSString *_accessibilityLabel;
    CDUnknownBlockType _imageViewCreationHandler;
    UIImage *_foregroundAccentImage;
    UIColor *_foregroundAccentImageColor;
    struct CGSize _maxSize;
}

+ (_Bool)supportsSecureCoding;
+ (id)imageProviderWithImageViewCreationHandler:(CDUnknownBlockType)arg1;
+ (id)imageProviderWithOnePieceImage:(id)arg1 twoPieceImageBackground:(id)arg2 twoPieceImageForeground:(id)arg3;
+ (id)imageProviderWithOnePieceImage:(id)arg1;
@property(nonatomic, getter=isForegroundAccentImageTinted) _Bool foregroundAccentImageTinted; // @synthesize foregroundAccentImageTinted=_foregroundAccentImageTinted;
@property(retain, nonatomic) UIColor *foregroundAccentImageColor; // @synthesize foregroundAccentImageColor=_foregroundAccentImageColor;
@property(retain, nonatomic) UIImage *foregroundAccentImage; // @synthesize foregroundAccentImage=_foregroundAccentImage;
@property(readonly, nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(copy, nonatomic) CDUnknownBlockType imageViewCreationHandler; // @synthesize imageViewCreationHandler=_imageViewCreationHandler;
@property(retain, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(retain, nonatomic) UIImage *twoPieceImageForeground; // @synthesize twoPieceImageForeground=_twoPieceImageForeground;
@property(retain, nonatomic) UIImage *twoPieceImageBackground; // @synthesize twoPieceImageBackground=_twoPieceImageBackground;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIImage *onePieceImage; // @synthesize onePieceImage=_onePieceImage;
- (void).cxx_destruct;
- (void)_resizeImagesIfNecessaryWithCornerRadius:(double)arg1;
- (void)_resizeImagesIfNecessaryAndMaskToCircle:(_Bool)arg1;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;
- (id)initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (void)finalizeWithMaxSize:(struct CGSize)arg1 cornerRadius:(double)arg2;
- (void)finalizeWithMaxSize:(struct CGSize)arg1 maskToCircle:(_Bool)arg2;
- (void)validate;

@end

