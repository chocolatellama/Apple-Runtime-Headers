//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WFActionDrawerSection : NSObject
{
    _Bool _loading;
    NSString *_localizedTitle;
    NSArray *_actions;
    NSArray *_donations;
    NSString *_bundleIdentifier;
    long long _sectionType;
}

@property(readonly, nonatomic) long long sectionType; // @synthesize sectionType=_sectionType;
@property(readonly, nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSArray *donations; // @synthesize donations=_donations;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
- (void).cxx_destruct;
- (id)initAsLoading;
- (id)initWithLocalizedTitle:(id)arg1 donations:(id)arg2 bundleIdentifier:(id)arg3 sectionType:(long long)arg4 actions:(id)arg5;
- (id)initWithLocalizedTitle:(id)arg1 actions:(id)arg2 bundleIdentifier:(id)arg3 sectionType:(long long)arg4;

@end

