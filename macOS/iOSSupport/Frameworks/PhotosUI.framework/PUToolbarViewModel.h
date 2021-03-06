//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUViewModel.h>

@class NSArray, PUToolbarViewModelChange, UIView, UIViewController;

@interface PUToolbarViewModel : PUViewModel
{
    BOOL _needsToUpdateToolbarSize;
    NSArray *_toolbarItems;
    UIView *_accessoryView;
    double _accessoryViewTopOutset;
    double _accessoryViewMaximumHeight;
    double _maximumHeight;
    UIViewController *__viewController;
}

@property(nonatomic) BOOL needsToUpdateToolbarSize; // @synthesize needsToUpdateToolbarSize=_needsToUpdateToolbarSize;
@property(nonatomic, setter=_setViewController:) __weak UIViewController *_viewController; // @synthesize _viewController=__viewController;
@property(nonatomic) double maximumHeight; // @synthesize maximumHeight=_maximumHeight;
@property(nonatomic) double accessoryViewMaximumHeight; // @synthesize accessoryViewMaximumHeight=_accessoryViewMaximumHeight;
@property(nonatomic) double accessoryViewTopOutset; // @synthesize accessoryViewTopOutset=_accessoryViewTopOutset;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(copy, nonatomic) NSArray *toolbarItems; // @synthesize toolbarItems=_toolbarItems;
- (void).cxx_destruct;
- (void)didPublishChanges;
@property(readonly, nonatomic) PUToolbarViewModelChange *currentChange;
- (id)newViewModelChange;

@end

