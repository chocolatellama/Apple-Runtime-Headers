//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIImageView.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface _UIBarBackgroundImageView : UIImageView
{
    UIView *_topStripView;
    UIImageView *_customImageContainer;
    BOOL _translucent;
}

@property(nonatomic, getter=isTranslucent) BOOL translucent; // @synthesize translucent=_translucent;
- (void).cxx_destruct;
- (id)image;
- (void)setImage:(id)arg1;
- (void)removeTopStripView;
- (void)updateTopStripViewCreateIfNecessary;
- (id)topStripView;

@end

