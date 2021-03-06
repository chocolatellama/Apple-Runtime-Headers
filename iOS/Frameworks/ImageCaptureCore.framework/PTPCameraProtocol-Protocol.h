//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSData, NSDictionary, NSMutableDictionary, NSNumber;

@protocol PTPCameraProtocol
- (void)notifyDeviceCloseWithUSBLocationID:(NSNumber *)arg1;
- (void)notifyContentCatalogPercentCompleted:(NSNumber *)arg1;
- (void)notifyPTPEvent:(NSData *)arg1;
- (void)notifyAddedItems:(NSArray *)arg1;
- (void)postNotification:(NSDictionary *)arg1;
- (void)unregisterInterestedEventNotifications:(NSArray *)arg1;
- (void)registerInterestedEventNotifications:(NSArray *)arg1;
- (void)ptpEventForwarding:(_Bool)arg1;
- (void)enumerateContentWithOptions:(NSDictionary *)arg1;
- (void)requestStartUsingDeviceWithReply:(void (^)(NSMutableDictionary *))arg1;
- (void)requestDeleteObjectHandle:(NSNumber *)arg1 options:(NSDictionary *)arg2 withReply:(void (^)(NSMutableDictionary *))arg3;
- (void)imageCaptureEventNotification:(NSMutableDictionary *)arg1 completion:(void (^)(NSMutableDictionary *))arg2;
- (void)requestReadDataFromObjectHandle:(NSNumber *)arg1 options:(NSDictionary *)arg2 withReply:(void (^)(NSMutableDictionary *))arg3;
- (void)requestDownloadObjectHandle:(NSNumber *)arg1 options:(NSDictionary *)arg2 withReply:(void (^)(NSMutableDictionary *))arg3;
- (void)requestThumbnailDataForObjectHandle:(NSNumber *)arg1 options:(NSDictionary *)arg2 withReply:(void (^)(NSMutableDictionary *))arg3;
- (void)requestMetadataForObjectHandle:(NSNumber *)arg1 options:(NSDictionary *)arg2 withReply:(void (^)(NSMutableDictionary *))arg3;
- (void)sendPTPCommand:(NSData *)arg1 andPayload:(NSData *)arg2 withReply:(void (^)(NSMutableDictionary *))arg3;
- (void)openDeviceSessionWithReply:(void (^)(NSMutableDictionary *))arg1;
@end

