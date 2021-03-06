//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarUIKit/CUIKIconGenerator-Protocol.h>

@class NSString;

@interface CUIKDefaultIconGenerator : NSObject <CUIKIconGenerator>
{
}

+ (id)_dateNameFromDate:(id)arg1 calendar:(id)arg2 type:(long long)arg3 style:(long long)arg4;
+ (id)_dayNumberStringFromDate:(id)arg1 calendar:(id)arg2;
+ (void)_drawGridInContext:(struct CGContext *)arg1 size:(struct CGSize)arg2;
+ (void)_drawIconInContext:(struct CGContext *)arg1 imageSize:(struct CGSize)arg2 scale:(double)arg3 iconBase:(id)arg4 calendar:(id)arg5 dayNumberString:(id)arg6 dateNameBlock:(CDUnknownBlockType)arg7 dateNameFormatType:(long long)arg8 showGrid:(_Bool)arg9;
+ (void)drawIconInContext:(struct CGContext *)arg1 imageSize:(struct CGSize)arg2 scale:(double)arg3 iconBase:(id)arg4 date:(id)arg5 calendar:(id)arg6 format:(long long)arg7;
+ (id)_whiteImageWithSize:(struct CGSize)arg1 scale:(double)arg2;
+ (id)_iconImageWithSize:(struct CGSize)arg1 scale:(double)arg2 drawBlock:(CDUnknownBlockType)arg3;
- (struct CGImage *)iconImageWithDate:(id)arg1 calendar:(id)arg2 format:(long long)arg3 size:(struct CGSize)arg4 scale:(double)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

