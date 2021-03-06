//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Carousel/CSLSystemLockIcon.h>

@class CSLSpriteSheetDescriptor, CSLSystemLockExitEndAnimationView, CSLSystemLockExitingAnimationView;

@interface CSLSystemLockSpriteIcon : CSLSystemLockIcon
{
    CSLSpriteSheetDescriptor *_exitingSpriteSheet;
    CSLSpriteSheetDescriptor *_exitEndSpriteSheet;
    CSLSystemLockExitingAnimationView *_exitingAnimationView;
    CSLSystemLockExitEndAnimationView *_exitEndAnimationView;
}

+ (id)iconWithExitingSpriteSheet:(id)arg1 exitEndSpriteSheet:(id)arg2;
- (void).cxx_destruct;
- (void)performUnlockAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareForAnimation;
- (float)unlockPercent;
- (void)setUnlockPercent:(float)arg1;
- (void)_addConstraints;
- (id)initWithFrame:(struct CGRect)arg1 exitingSpriteSheet:(id)arg2 exitEndSpriteSheet:(id)arg3;

@end

