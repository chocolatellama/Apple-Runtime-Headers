//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/TVFeaturedRibbonCell.h>

#import <VideosUI/_TVStackedMediaViewDelegate-Protocol.h>

@class IKViewElement, NSString, UIView;

__attribute__((visibility("hidden")))
@interface VUICollectionViewRibbonCell : TVFeaturedRibbonCell <_TVStackedMediaViewDelegate>
{
    IKViewElement *_viewElement;
    UIView *_overlayView;
}

+ (id)ribbonCellWithElement:(id)arg1 existingCell:(id)arg2;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (void).cxx_destruct;
- (void)_recordStackedMediaLoadErrorForMediaType:(id)arg1 path:(id)arg2;
- (void)stackedMediaView:(id)arg1 failedToLoadPreviewAssetAtPath:(id)arg2;
- (void)stackedMediaView:(id)arg1 failedToLoadVideoAtPath:(id)arg2;
- (id)selectingView;
- (void)_updateMaskingModeForParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

