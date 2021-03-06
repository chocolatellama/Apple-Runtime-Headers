//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCTest/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol XCUITextInputSource;

@protocol XCUITextInputSource <NSObject>
@property(readonly) NSArray *keyMaps;
@property(readonly) NSString *identifier;
- (BOOL)isEqualToInputSource:(id <XCUITextInputSource>)arg1;
- (BOOL)overrideCurrentKeyboardLayoutWithError:(id *)arg1;
- (BOOL)selectWithError:(id *)arg1;
- (BOOL)enableWithError:(id *)arg1;
@end

