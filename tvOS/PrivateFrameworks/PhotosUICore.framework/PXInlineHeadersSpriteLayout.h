//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXGItemsLayout.h>

#import <PhotosUICore/PXGViewSource-Protocol.h>

@class NSCalendar, NSDateFormatter, NSString, PXCuratedLibraryInlineHeadersDataSource, PXCuratedLibraryInlineHeadersLayoutSpec;
@protocol PXCuratedLibraryInlineHeadersLayoutGeometrySource;

@interface PXInlineHeadersSpriteLayout : PXGItemsLayout <PXGViewSource>
{
    CDStruct_d97c9657 _updateFlags;
    NSDateFormatter *_yearFormatter;
    NSDateFormatter *_monthFormatter;
    NSCalendar *_calendar;
    unsigned short _mediaVersion;
    _Bool _didHideSprites;
    unsigned long long _level;
    unsigned long long _style;
    PXCuratedLibraryInlineHeadersLayoutSpec *_spec;
    PXCuratedLibraryInlineHeadersDataSource *_dataSource;
    id <PXCuratedLibraryInlineHeadersLayoutGeometrySource> _geometrySource;
}

@property(nonatomic) __weak id <PXCuratedLibraryInlineHeadersLayoutGeometrySource> geometrySource; // @synthesize geometrySource=_geometrySource;
@property(retain, nonatomic) PXCuratedLibraryInlineHeadersDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) PXCuratedLibraryInlineHeadersLayoutSpec *spec; // @synthesize spec=_spec;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) unsigned long long level; // @synthesize level=_level;
- (void).cxx_destruct;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)_updateSprites;
- (void)update;
- (void)_bumpMediaVersion;
- (void)invalidateAnchorItemFrames;
- (void)_currentLocaleChanged:(id)arg1;
- (void)_setupDateFormatters;
- (void)alphaDidChange;
- (void)screenScaleDidChange;
- (void)visibleRectDidChange;
- (id)initWithLevel:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

