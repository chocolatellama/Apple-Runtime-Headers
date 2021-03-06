//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureDevice, AVCaptureDeviceDiscoverySession, NSArray, NSMutableArray;
@protocol AXSSMotionTrackingCameraManagerDelegate;

@interface AXSSMotionTrackingCameraManager : NSObject
{
    BOOL __monitoring;
    id <AXSSMotionTrackingCameraManagerDelegate> _delegate;
    NSMutableArray *__compatibleCaptureDevices;
    NSMutableArray *__allCaptureDevices;
    AVCaptureDeviceDiscoverySession *__captureDeviceDiscoverySession;
}

+ (id)_sortedCaptureDevicesFromDevices:(id)arg1;
@property(retain, nonatomic) AVCaptureDeviceDiscoverySession *_captureDeviceDiscoverySession; // @synthesize _captureDeviceDiscoverySession=__captureDeviceDiscoverySession;
@property(retain, nonatomic) NSMutableArray *_allCaptureDevices; // @synthesize _allCaptureDevices=__allCaptureDevices;
@property(retain, nonatomic) NSMutableArray *_compatibleCaptureDevices; // @synthesize _compatibleCaptureDevices=__compatibleCaptureDevices;
@property(nonatomic) BOOL _monitoring; // @synthesize _monitoring=__monitoring;
@property(nonatomic) __weak id <AXSSMotionTrackingCameraManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_captureDeviceDisconnected:(id)arg1;
- (void)_captureDeviceConnected:(id)arg1;
- (void)_resetDiscoverySession;
- (void)_stopDiscoverySession;
- (void)_startDiscoverySession;
- (void)_allCaptureDevicesChanged:(id)arg1;
- (void)_captureDeviceUpdated;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) AVCaptureDevice *defaultCaptureDevice;
@property(readonly, copy, nonatomic) NSArray *allCaptureDevices;
@property(readonly, copy, nonatomic) NSArray *compatibleCaptureDevices;
- (void)stopMonitoring;
- (void)startMonitoring;
- (void)dealloc;
- (id)init;

@end

