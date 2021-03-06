//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UISearchBarLayoutBase.h>

@class UIView, _UISearchBarSearchContainerLayout;
@protocol _UISearchBarContainerSublayoutDelegate;

__attribute__((visibility("hidden")))
@interface _UISearchBarScopeContainerLayout : _UISearchBarLayoutBase
{
    _Bool _collapsed;
    _Bool _hasScopeBar;
    id <_UISearchBarContainerSublayoutDelegate> _delegate;
    _UISearchBarSearchContainerLayout *_neighboringSearchLayout;
    UIView *_scopeBar;
    unsigned int _numberOfScopeTitles;
    float _scopeBarOpacity;
    struct CGRect _scopeBarLayoutFrame;
}

@property(readonly, nonatomic) float scopeBarOpacity; // @synthesize scopeBarOpacity=_scopeBarOpacity;
@property(nonatomic) unsigned int numberOfScopeTitles; // @synthesize numberOfScopeTitles=_numberOfScopeTitles;
@property(nonatomic) _Bool hasScopeBar; // @synthesize hasScopeBar=_hasScopeBar;
@property(retain, nonatomic) UIView *scopeBar; // @synthesize scopeBar=_scopeBar;
@property(retain, nonatomic) _UISearchBarSearchContainerLayout *neighboringSearchLayout; // @synthesize neighboringSearchLayout=_neighboringSearchLayout;
@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=_collapsed;
@property(nonatomic) __weak id <_UISearchBarContainerSublayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)applyLayout;
- (void)updateLayout;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)scopeControlHeight;
@property(readonly, nonatomic) float naturalBarHeight;
@property(readonly, nonatomic) struct UIEdgeInsets containerSpecificInsets;
@property(readonly, nonatomic) struct CGRect scopeBarLayoutFrame; // @synthesize scopeBarLayoutFrame=_scopeBarLayoutFrame;

@end

