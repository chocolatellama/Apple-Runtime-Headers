//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSAppearanceContentStyle.h>

__attribute__((visibility("hidden")))
@interface _NSViewContextContentStyle : NSAppearanceContentStyle
{
    long long _backgroundStyle;
    int _semanticContext;
    unsigned long long _windowStyleMask;
}

- (int)_backgroundStyleForRenderingIntent:(long long)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBackgroundStyle:(long long)arg1 semanticContext:(int)arg2 windowStyleMask:(unsigned long long)arg3;

@end

