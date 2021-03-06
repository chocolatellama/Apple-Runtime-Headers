//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoServicesConfiguration/NSObject-Protocol.h>

@class NSDictionary;

@protocol CPSConfigurationService <NSObject>
- (void)testErrorWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)testKillWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)requestPreferenceChange:(NSDictionary *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)requestCloudPhotoServiceStateChange:(NSDictionary *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)cloudPhotoServicesStatusWithReply:(void (^)(NSDictionary *, NSError *))arg1;

@optional
- (void)cloudPhotoLibraryFitsOnLocalDiskWithOptions:(NSDictionary *)arg1 completionHandler:(void (^)(unsigned long long, NSError *))arg2;
- (void)cloudPhotoLibraryServiceStatusWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)calculateLibrarySizeWithOptions:(NSDictionary *)arg1 completionHandler:(void (^)(long long, NSDictionary *, NSError *))arg2;
- (void)cloudPhotoServicesStatusWithOptions:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
@end

