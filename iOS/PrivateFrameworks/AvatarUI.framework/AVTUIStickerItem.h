//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTDiscardableContent-Protocol.h>

@class MSSticker, NSString;

@interface AVTUIStickerItem : NSObject <AVTDiscardableContent>
{
    _Bool _hasBeenRendered;
    CDUnknownBlockType discardableContentHandler;
    NSString *_localizedName;
    MSSticker *_cachedMSSticker;
    CDUnknownBlockType _resourceProvider;
    struct CGRect _clippingRect;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType resourceProvider; // @synthesize resourceProvider=_resourceProvider;
@property(nonatomic) struct CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
@property(nonatomic) _Bool hasBeenRendered; // @synthesize hasBeenRendered=_hasBeenRendered;
@property(retain, nonatomic) MSSticker *cachedMSSticker; // @synthesize cachedMSSticker=_cachedMSSticker;
@property(readonly, copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(copy, nonatomic) CDUnknownBlockType discardableContentHandler; // @synthesize discardableContentHandler;
- (void).cxx_destruct;
- (void)discardContent;
@property(readonly, copy) NSString *description;
- (void)clearCachedItems;
- (id)initWithLocalizedName:(id)arg1 resourceProvider:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

