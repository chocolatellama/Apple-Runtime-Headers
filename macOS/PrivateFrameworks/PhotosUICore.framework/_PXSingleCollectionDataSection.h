//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXCollectionsDataSection.h>

@protocol PXDisplayCollection;

@interface _PXSingleCollectionDataSection : PXCollectionsDataSection
{
    long long _count;
    id <PXDisplayCollection> _displayCollection;
}

@property(readonly, nonatomic) id <PXDisplayCollection> displayCollection; // @synthesize displayCollection=_displayCollection;
- (long long)count;
- (void).cxx_destruct;
- (id)objectAtIndex:(long long)arg1;
- (long long)indexOfCollection:(id)arg1;
- (id)initWithDisplayCollection:(id)arg1;

@end

