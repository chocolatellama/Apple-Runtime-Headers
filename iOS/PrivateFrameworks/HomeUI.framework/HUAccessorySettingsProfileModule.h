//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemModule.h>

#import <HomeUI/HFAccessorySettingManagedConfigurationAdapterObserver-Protocol.h>

@class HFAccessorySettingGroupItem, HFAccessorySettingManagedConfigurationAdapter, HUAccessorySettingsProfileItemProvider, NSString;
@protocol HUAccessorySettingsProfileModuleDelegate;

@interface HUAccessorySettingsProfileModule : HFItemModule <HFAccessorySettingManagedConfigurationAdapterObserver>
{
    id <HUAccessorySettingsProfileModuleDelegate> _delegate;
    HUAccessorySettingsProfileItemProvider *_profileItemProvider;
    HFAccessorySettingGroupItem *_settingGroupItem;
    HFAccessorySettingManagedConfigurationAdapter *_adapter;
}

@property(readonly, nonatomic) HFAccessorySettingManagedConfigurationAdapter *adapter; // @synthesize adapter=_adapter;
@property(readonly, nonatomic) HFAccessorySettingGroupItem *settingGroupItem; // @synthesize settingGroupItem=_settingGroupItem;
@property(readonly, nonatomic) HUAccessorySettingsProfileItemProvider *profileItemProvider; // @synthesize profileItemProvider=_profileItemProvider;
@property(nonatomic) __weak id <HUAccessorySettingsProfileModuleDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)managedConfigurationAdapterSettingsWereUpdated:(id)arg1;
- (id)_actuallyRemoveProfileItem:(id)arg1;
- (id)promptForRemoveProfileItem:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)itemProviders;
- (id)initWithItemUpdater:(id)arg1 settingGroupItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

