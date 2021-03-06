//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeController.h>

@class OBTextBulletedList, UIStackView;

@interface OBTextWelcomeController : OBWelcomeController
{
    UIStackView *_stackView;
    OBTextBulletedList *_currentBulletedList;
}

@property(retain, nonatomic) OBTextBulletedList *currentBulletedList; // @synthesize currentBulletedList=_currentBulletedList;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
- (void).cxx_destruct;
- (_Bool)shouldInlineButtonTray;
- (void)addBulletedListItemWithTitle:(id)arg1 description:(id)arg2 accessoryButton:(id)arg3;
- (void)addBulletedListItemWithTitle:(id)arg1 description:(id)arg2;
- (void)addSectionWithHeader:(id)arg1 content:(id)arg2 accessoryButton:(id)arg3;
- (void)addSectionWithHeader:(id)arg1 content:(id)arg2;
- (void)loadView;
- (id)initWithTitle:(id)arg1;

@end

