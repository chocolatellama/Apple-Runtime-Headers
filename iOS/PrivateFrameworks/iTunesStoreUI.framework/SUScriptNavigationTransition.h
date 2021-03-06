//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSMutableArray, NSString, SUNavigationContainerViewController, SUScriptNavigationItem;

@interface SUScriptNavigationTransition : SUScriptObject
{
    long long _status;
    NSString *_title;
    SUNavigationContainerViewController *_container;
    long long _fromIndex;
    long long _toIndex;
    NSString *_rightBarButton;
    NSMutableArray *_finishBlocks;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
@property(retain, nonatomic) NSMutableArray *finishBlocks; // @synthesize finishBlocks=_finishBlocks;
@property(retain, nonatomic) NSString *rightBarButton; // @synthesize rightBarButton=_rightBarButton;
- (void).cxx_destruct;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (id)_className;
- (void)finishedLoading;
@property(retain, nonatomic) SUScriptNavigationItem *topNavigationItem;
@property(nonatomic) long long toIndex; // @synthesize toIndex=_toIndex;
@property(nonatomic) long long fromIndex; // @synthesize fromIndex=_fromIndex;
@property(nonatomic) long long status;
- (void)addFinishBlock:(CDUnknownBlockType)arg1;
- (id)initWithContainer:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;

@end

