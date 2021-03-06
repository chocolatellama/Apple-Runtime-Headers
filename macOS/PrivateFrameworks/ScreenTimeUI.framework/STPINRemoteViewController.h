//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ViewBridge/NSRemoteViewController.h>

#import <ScreenTimeUI/STPINRemoteViewController-Protocol.h>

@class NSString;

@interface STPINRemoteViewController : NSRemoteViewController <STPINRemoteViewController>
{
    CDUnknownBlockType _pinServiceDidComplete;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@property(copy, nonatomic) CDUnknownBlockType pinServiceDidComplete; // @synthesize pinServiceDidComplete=_pinServiceDidComplete;
- (void).cxx_destruct;
- (void)pinServiceDidCompleteWithError:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

