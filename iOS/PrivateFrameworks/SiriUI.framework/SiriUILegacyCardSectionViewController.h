//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CardKit/CRKCardSectionViewController.h>

#import <SiriUI/SiriUISnippetViewControllerDelegate-Protocol.h>
#import <SiriUI/SiriUISnippetViewControllerDelegatePrivate-Protocol.h>

@class NSString, SiriUICardSectionView, SiriUISnippetViewController;

@interface SiriUILegacyCardSectionViewController : CRKCardSectionViewController <SiriUISnippetViewControllerDelegatePrivate, SiriUISnippetViewControllerDelegate>
{
    SiriUISnippetViewController *_snippetViewController;
    SiriUISnippetViewController *_containingSnippetViewController;
}

+ (id)cardSectionClasses;
@property(nonatomic) __weak SiriUISnippetViewController *containingSnippetViewController; // @synthesize containingSnippetViewController=_containingSnippetViewController;
@property(readonly, nonatomic) SiriUISnippetViewController *backingSnippetViewController; // @synthesize backingSnippetViewController=_snippetViewController;
- (void).cxx_destruct;
- (_Bool)_canShowWhileLocked;
- (struct UIEdgeInsets)siriViewControllerBackgroundInsets:(id)arg1;
- (id)additionalSpeechInterpretationsForSiriViewController:(id)arg1;
- (struct UIEdgeInsets)siriViewControllerDisplayInsetsForVisibleSpace:(id)arg1;
- (_Bool)siriViewController:(id)arg1 openPunchOut:(id)arg2;
- (void)siriViewController:(id)arg1 sendGenericAceCommands:(id)arg2;
- (id)persistentStoreForSiriViewController:(id)arg1;
- (id)localeForSiriViewController:(id)arg1;
- (void)siriViewControllerRequestTearDownEditingViewController:(id)arg1;
- (void)siriViewController:(id)arg1 startCorrectedSpeechRequestWithText:(id)arg2 correctionIdentifier:(id)arg3 userSelectionResults:(id)arg4;
- (void)siriViewControllerDidEndEditing:(id)arg1;
- (void)siriViewControllerWillBeginEditing:(id)arg1;
- (_Bool)siriViewControllerShouldPreventUserInteraction:(id)arg1;
- (void)removeSiriViewController:(id)arg1;
- (void)cancelSpeakingForSiriViewController:(id)arg1;
- (void)siriSnippetViewController:(id)arg1 didRequestKeyboardWithVisibility:(_Bool)arg2;
- (void)siriSnippetViewController:(id)arg1 didDismissViewController:(id)arg2;
- (void)siriSnippetViewController:(id)arg1 willDismissViewController:(id)arg2;
- (void)siriSnippetViewController:(id)arg1 didPresentViewController:(id)arg2;
- (void)siriSnippetViewController:(id)arg1 willPresentViewController:(id)arg2;
- (void)siriViewController:(id)arg1 speakText:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (double)statusBarHeightForSiriViewController:(id)arg1;
- (id)updatedUserUtteranceForSiriViewController:(id)arg1;
- (void)siriViewController:(id)arg1 didHideVibrantView:(id)arg2;
- (void)siriSnippetViewController:(id)arg1 setStatusViewHidden:(_Bool)arg2;
- (id)persistentDataStoreForSiriViewController:(id)arg1;
- (void)cancelRequestForSiriSnippetViewController:(id)arg1;
- (void)siriViewController:(id)arg1 addSelectionResponse:(id)arg2;
- (id)siriViewController:(id)arg1 listItemToPickInAutodisambiguationForListItems:(id)arg2;
- (id)siriViewController:(id)arg1 disambiguationItemForListItem:(id)arg2 disambiguationKey:(id)arg3;
- (id)siriViewController:(id)arg1 filteredDisambiguationListItems:(id)arg2;
- (void)siriViewController:(id)arg1 setContentOffset:(double)arg2;
- (void)siriViewControllerHeightDidChange:(id)arg1;
- (void)siriViewControllerHeightDidChange:(id)arg1 pinTopOfSnippet:(_Bool)arg2;
- (struct CGSize)siriViewControllerVisibleContentArea:(id)arg1;
- (double)siriViewControllerExpectedWidth:(id)arg1;
- (id)siriViewControllerEffectiveBundleForCoreLocation:(id)arg1;
- (void)siriViewController:(id)arg1 setDomainObject:(id)arg2 forIdentifier:(id)arg3;
- (id)siriViewController:(id)arg1 domainObjectForIdentifier:(id)arg2;
- (void)siriViewController:(id)arg1 openURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)siriViewController:(id)arg1 openURL:(id)arg2;
- (void)siriViewController:(id)arg1 performAceCommands:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)siriViewController:(id)arg1 performAceCommands:(id)arg2;
- (double)siriSnippetViewControllerExpectedWidth:(id)arg1;
- (void)siriSnippetViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)siriEnabledAppListForSiriViewController:(id)arg1;
- (unsigned long long)siriDeviceLockStateForSnippetViewController:(id)arg1;
- (void)siriSnippetViewControllerWillBecomeFirstResponder:(id)arg1;
- (void)siriSnippetViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg2;
- (_Bool)siriSnippetViewControllerIsVisible:(id)arg1;
- (void)siriSnippetViewController:(id)arg1 didShowGuideStartDate:(id)arg2 endDate:(id)arg3;
- (void)siriSnippetViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)siriSnippetViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3;
- (void)siriSnippetViewControllerViewDidLoad:(id)arg1;
- (void)siriSnippetViewController:(id)arg1 pushSirilandSnippets:(id)arg2;
- (id)_createReusableViewIfNeededWithClass:(Class)arg1;
- (void)_updateContentSize;
- (_Bool)_shouldAttemptToConnectToRemoteViewController;
- (void)viewDidLayoutSubviews;
- (void)_loadCardSectionView;
- (void)setDelegate:(id)arg1;
- (id)_interaction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SiriUICardSectionView *view; // @dynamic view;

@end

