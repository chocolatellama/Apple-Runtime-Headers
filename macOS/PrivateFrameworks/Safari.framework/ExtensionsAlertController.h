//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ExtensionsAlertController : NSObject
{
}

+ (void)reportRefusalToInstallLegacyExtension;
+ (void)showPromptForLegacyExtensionsRemoved:(id)arg1 hasEnabledAppExtension:(BOOL)arg2;
+ (void)offerUpgradeForExtension:(id)arg1 toGalleryVersion:(id)arg2 defaultToGalleryVersion:(BOOL)arg3 responseBlock:(CDUnknownBlockType)arg4;
+ (void)showPromptForExtensionsDisabledDueToResourceHogging:(id)arg1 developerHosted:(id)arg2;
+ (void)reportRefusalToInstallDeveloperHostedExtension:(id)arg1;
+ (void)showPromptForExtensionsDisabledDueToDeveloperHosted:(id)arg1;
+ (void)confirmUserIntendsToInstallResourceHoggingExtension:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
+ (void)confirmUserIntendsToEnableResourceHoggingExtension:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
+ (void)showPromptForExtensionsDisabledDueToResourceHogging:(id)arg1;
+ (void)confirmUserTrustsEnablingExtension:(id)arg1 warnAboutExtensionPerformance:(BOOL)arg2 responseBlock:(CDUnknownBlockType)arg3;
+ (void)offerInstallationOfExtensionFromGallery:(id)arg1 version:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;
+ (void)showPromptForExtensionDisabledBecauseItHasRequestedAdditionalPermissions:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
+ (void)_handleExtensionTurnedOffAlertResponse:(long long)arg1 responseBlock:(CDUnknownBlockType)arg2;
+ (void)confirmUserIntendsToInstallEphemeralExtension:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
+ (void)confirmUserTrustsInstallingExtension:(id)arg1 warnAboutExtensionPerformance:(BOOL)arg2 responseBlock:(CDUnknownBlockType)arg3;
+ (void)reportRefusalToInstallAppleSignedExtension:(id)arg1 withIdentifier:(id)arg2;
+ (void)reportInstallationErrorForExtension:(id)arg1;
+ (void)reportBlacklistedExtension:(id)arg1 withIcon:(id)arg2;
+ (void)reportExtensionsAreNotEnabled;

@end

