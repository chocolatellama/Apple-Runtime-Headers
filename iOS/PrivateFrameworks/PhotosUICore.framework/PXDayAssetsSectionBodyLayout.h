//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXCuratedLibraryAssetsSectionGeneratedLayout.h>

#import <PhotosUICore/PXCuratedLibraryRowBasedLayout-Protocol.h>

@class PXDayAssetsSectionBodyLayoutSpec;

@interface PXDayAssetsSectionBodyLayout : PXCuratedLibraryAssetsSectionGeneratedLayout <PXCuratedLibraryRowBasedLayout>
{
    PXDayAssetsSectionBodyLayoutSpec *_spec;
    long long _style;
    long long _numberOfPrecedingAssets;
}

+ (struct CGSize)estimatedSizeWithReferenceSize:(struct CGSize)arg1 spec:(id)arg2 style:(long long)arg3 numberOfAssets:(long long)arg4;
@property(nonatomic) long long numberOfPrecedingAssets; // @synthesize numberOfPrecedingAssets=_numberOfPrecedingAssets;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) PXDayAssetsSectionBodyLayoutSpec *spec; // @synthesize spec=_spec;
- (void).cxx_destruct;
- (void)enumerateRowsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) double buildingRowSpacing;
@property(readonly, nonatomic) double buildingRowContentHeight;
@property(readonly, nonatomic) struct CGSize minPlayableSpriteSize;
- (void)enumerateHeroSpritesInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (struct CGSize)_minSizeOfDominantSprites;
@property(readonly, nonatomic) struct CGSize minimumItemSize;
- (struct CGRect)sectionRect;
- (struct _PXGSpriteIndexRange)spriteIndexRangeCoveringRect:(struct CGRect)arg1;
- (void)contentSizeDidChange;
- (id)_inputItemAtIndex:(unsigned int)arg1;
- (id)newGenerator;
- (void)referenceSizeDidChange;

@end

