//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString;
@protocol UINSToolbar, UINSWindow;

@interface _UIWindowToolbarController : NSObject
{
    id <UINSToolbar> _toolbar;
    id <UINSWindow> _hostWindow;
    NSArray *_itemIdentifiers;
    NSString *_centeredItemIdentifier;
    NSSet *_templateItems;
    BOOL _hasExplicitToolbar;
}

+ (id)sharedWindowToolbarController;
@property(copy, nonatomic) NSSet *templateItems; // @synthesize templateItems=_templateItems;
@property(copy, nonatomic) NSString *centeredItemIdentifier; // @synthesize centeredItemIdentifier=_centeredItemIdentifier;
@property(copy, nonatomic) NSArray *itemIdentifiers; // @synthesize itemIdentifiers=_itemIdentifiers;
- (void).cxx_destruct;
- (void)_refreshToolbar;
@property(nonatomic) BOOL autoHidesToolbarInFullScreen;
- (id)_toolbarCreatingIfNeeded:(BOOL)arg1;
- (BOOL)_hasExplicitToolbar;
- (BOOL)_wantsToolbar;
- (void)updateForMainWindow:(id)arg1;
- (void)updateForMainHostWindowDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

