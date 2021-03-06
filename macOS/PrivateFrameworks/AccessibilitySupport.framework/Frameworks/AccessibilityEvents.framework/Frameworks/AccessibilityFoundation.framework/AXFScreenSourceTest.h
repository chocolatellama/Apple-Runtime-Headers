//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityFoundation/AXFScreenSource-Protocol.h>

@class AXFScreen, NSArray, NSString;
@protocol AXFScreenSourceDelegate;

@interface AXFScreenSourceTest : NSObject <AXFScreenSource>
{
    id <AXFScreenSourceDelegate> _delegate;
    NSArray *_screens;
    AXFScreen *_mainScreen;
    struct CGRect _totalScreenBounds;
}

@property(nonatomic) struct CGRect totalScreenBounds; // @synthesize totalScreenBounds=_totalScreenBounds;
@property(retain, nonatomic) AXFScreen *mainScreen; // @synthesize mainScreen=_mainScreen;
@property(nonatomic) __weak id <AXFScreenSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
@property(retain, nonatomic) NSArray *screens; // @synthesize screens=_screens;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

