//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssetsLibraryServices/PLPhotoLibraryPathManagerCore.h>

@class NSString, PLImportFileManager;

@interface PLPhotoLibraryPathManagerDCIM : PLPhotoLibraryPathManagerCore
{
    unsigned int _persistedAlbumDataDirectoryExists;
    NSString *_photoDataDirectory;
    NSString *_photoDataCachesDirectory;
    NSString *_photoDataSearchDirectory;
    NSString *_dcimDirectory;
    NSString *_cplAssetsDirectory;
    NSString *_cmmAssetsDirectory;
    NSString *_journalsDirectory;
    NSString *_projectsDirectory;
    NSString *_changeStoreDatabasePath;
    NSString *_thumbnailsDirectory;
    NSString *_thumbnailsV2Directory;
    _Bool _assetAlbumOrderStructurePathCreated;
    PLImportFileManager *_importFileManager;
}

+ (id)systemLibraryPathManager;
@property(retain, nonatomic) PLImportFileManager *importFileManager; // @synthesize importFileManager=_importFileManager;
- (void).cxx_destruct;
- (id)pathsGroupedByAssetBasePathFromFilePaths:(id)arg1;
- (id)assetBaseFilenameForAdjustmentFilePath:(id)arg1;
- (id)persistedAlbumDataDirectoryCreateIfNeeded:(_Bool)arg1 error:(id *)arg2;
- (id)iTunesPhotosSyncCurrentLibraryUUIDPath;
- (id)iTunesPhotosSyncMetadataFilePath;
- (id)iTunesPhotosLastSyncMetadataFilePath;
- (id)iTunesSyncedAssetSmallThumbnailsDirectory;
- (id)iTunesSyncedAssetMetadataThumbnailsDirectory;
- (id)iTunesSyncedFaceAlbumThumbnailsDirectory;
- (id)iTunesSyncedFaceDataDirectory;
- (id)iTunesSyncedAssetsDirectory;
- (id)iTunesPhotosSyncDirectory;
- (id)pathToAssetAlbumOrderStructure;
- (id)photoMetadataDirectoryForMediaInMainDirectory:(id)arg1;
- (id)photoMutationsDirectory;
- (id)photoMetadataDirectory;
- (id)syncInfoPath;
- (id)pathToAssetsToAlbumsMapping;
- (id)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)privateCacheDirectoryWithSubType:(unsigned char)arg1;
- (id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)pathsForExternalWriters;
- (id)createPathsForNewLibraries;
- (id)pathsForPermissionCheck;
- (id)pathsForClientAccess:(id)arg1;
- (id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)photosDatabasePath;
- (id)addToPath:(id)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)convertPhotoLibraryPathType:(unsigned char)arg1;
- (id)getImportFileManager;
- (id)initWithLibraryURL:(id)arg1;

@end

