//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPopUpButton.h>

@class NSArray;

@interface AMApplicationPickerPopUpButton : NSPopUpButton
{
    NSArray *_chosenURLs;
    NSArray *_customURLs;
}

+ (id)_applicationURLsFromPasteboard:(id)arg1;
+ (id)_cleanedUpURLs:(id)arg1;
+ (id)_displayNameForURL:(id)arg1;
@property(copy, nonatomic) NSArray *customURLs; // @synthesize customURLs=_customURLs;
@property(copy, nonatomic) NSArray *chosenURLs; // @synthesize chosenURLs=_chosenURLs;
- (void).cxx_destruct;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)_validateDrag:(id)arg1;
- (void)_updateMenu;
- (void)_updateToolTip;
- (void)_update;
@property(readonly, copy, nonatomic) NSArray *_cleanedUpCustomURLs;
@property(readonly, copy, nonatomic) NSArray *_cleanedUpChosenURLs;
- (void)_resetSelection;
- (void)_addURLs:(id)arg1;
- (void)_toggleURL:(id)arg1;
- (void)chooseURLViaOpenPanel:(id)arg1;
- (void)chooseItem:(id)arg1;
- (void)choosePlaceholder:(id)arg1;
- (void)chooseCustomTitle:(id)arg1;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

