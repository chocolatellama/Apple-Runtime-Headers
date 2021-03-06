//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/_PASDatabaseMigrationProtocol-Protocol.h>

@class NSCondition, NSString, PPSQLDatabaseHandlePool;

@interface PPSQLDatabase : NSObject <_PASDatabaseMigrationProtocol>
{
    PPSQLDatabaseHandlePool *_handlePool;
    NSCondition *_handlePoolCond;
    NSString *_path;
    unsigned char _migrationCount;
}

+ (id)tableNameForTable:(unsigned char)arg1;
+ (void)dropTableWithName:(id)arg1 txnWitness:(id)arg2;
+ (id)nonMigratingToolsInstanceWithParentDirectory:(id)arg1;
+ (id)nonMigratingToolsInstance;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int *)arg1;
- (id)migrations;
- (id)databaseHandle;
- (BOOL)_prepareDatabaseHandleForMigration;
- (unsigned long long)maxSchemaVersion;
- (BOOL)unmigrate;
- (BOOL)migrateToVersion:(unsigned int)arg1;
- (BOOL)_handleCorruption;
- (BOOL)_removeCorruptionMarker;
- (BOOL)_isCorruptionMarkerPresent;
- (id)_allTables;
- (id)checkWithError:(id *)arg1;
- (id)stats;
- (BOOL)isInMemory;
- (void)writeTransactionWithClient:(unsigned char)arg1 block:(CDUnknownBlockType)arg2;
- (void)readTransactionWithClient:(unsigned char)arg1 block:(CDUnknownBlockType)arg2;
- (void)_releaseReadOnlyHandle:(id)arg1 client:(unsigned char)arg2;
- (id)_acquireReadOnlyHandleWithClient:(unsigned char)arg1;
- (id)handleWithClient:(unsigned char)arg1;
- (id)_nullableHandleWithClient:(unsigned char)arg1;
- (void)_disableQueryLoggingForHandle:(id)arg1;
- (void)_enableQueryLoggingForHandle:(id)arg1;
- (id)_openFreshHandleForClient:(unsigned char)arg1;
- (id)_initWithPath:(id)arg1 performMigrations:(BOOL)arg2;
- (id)initWithParentDirectory:(id)arg1 performMigrations:(BOOL)arg2;
- (id)initWithTemporaryInMemoryDatabaseAndPerformMigrations:(BOOL)arg1;
- (id)_initInStandardParentDirectoryWithPerformMigrations:(BOOL)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

