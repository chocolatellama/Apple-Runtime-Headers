//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ShareSheet/UIActivity.h>

#import <ShareSheet/_UICloudSharingControllerDelegate_Internal-Protocol.h>
#import <ShareSheet/_UIDocumentSharingControllerDelegate_Private-Protocol.h>

@class NSString, UIImage, UIViewController;

@interface _UICloudSharingActivity : UIActivity <_UICloudSharingControllerDelegate_Internal, _UIDocumentSharingControllerDelegate_Private>
{
    NSString *_activityTitle;
    UIViewController *_activityViewController;
    _Bool _initialSharing;
    UIImage *_activityImage;
}

+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;
@property(nonatomic) _Bool initialSharing; // @synthesize initialSharing=_initialSharing;
@property(retain, nonatomic) UIImage *activityImage; // @synthesize activityImage=_activityImage;
@property(retain, nonatomic) NSString *activityTitle; // @synthesize activityTitle=_activityTitle;
- (void).cxx_destruct;
- (_Bool)_activitySupportsPromiseURLs;
- (void)_documentSharingControllerDidDismiss:(id)arg1;
- (void)_cloudShareControllerDidDismiss:(id)arg1;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)_isURLEligibleForSharing:(id)arg1 isInitial:(_Bool *)arg2;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (_Bool)eligibleTypeForActivity:(id)arg1;
- (void)_setupForSharingInfo;
- (void)_setupForInitialSharing;
- (id)_systemImageName;
- (id)activityType;
@property(retain, nonatomic) UIViewController *activityViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

