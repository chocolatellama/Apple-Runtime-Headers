//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUDisplay-Protocol.h>

@class CADisplay, NSString, NUColorSpace, NUPixelFormat;

@interface NUDisplay_iOS : NSObject <NUDisplay>
{
    CADisplay *_display;
}

+ (id)mainDisplay;
+ (id)displays;
@property(readonly, nonatomic) CADisplay *display; // @synthesize display=_display;
- (void).cxx_destruct;
@property(readonly) NUColorSpace *colorSpace;
@property(readonly) NUPixelFormat *pixelFormat;
- (_Bool)wideColor;
@property(readonly, nonatomic) CDStruct_912cb5d2 size;
@property(readonly, nonatomic) id identifier;
@property(readonly, nonatomic) NSString *name;
@property(readonly, copy) NSString *description;
- (id)initWithCADisplay:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

