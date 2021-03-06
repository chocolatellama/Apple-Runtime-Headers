//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, VCCoreDuetListener;

@interface VCShortcutsObliterator : NSObject
{
    VCCoreDuetListener *_listener;
    NSSet *_syncDataHandlers;
}

@property(readonly, nonatomic) NSSet *syncDataHandlers; // @synthesize syncDataHandlers=_syncDataHandlers;
@property(readonly, nonatomic) VCCoreDuetListener *listener; // @synthesize listener=_listener;
- (void).cxx_destruct;
- (void)resetWatchSync;
- (_Bool)terminateProcessWithIdentifier:(id)arg1 assertion:(out id *)arg2 error:(out id *)arg3;
- (_Bool)deleteDataVaultWithError:(id *)arg1;
- (_Bool)deleteAppGroupWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)deleteKeychainItemsWithError:(id *)arg1;
- (void)obliterate:(id *)arg1;
- (id)initWithCoreDuetListener:(id)arg1 syncDataHandlers:(id)arg2;

@end

