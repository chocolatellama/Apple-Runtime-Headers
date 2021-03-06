//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSUUID;
@protocol OS_dispatch_source;

@interface _HDHealthServiceConnectionInfo : NSObject
{
    _Bool _pairingAttempted;
    unsigned int _sessionIdentifier;
    CDUnknownBlockType _sessionHandler;
    CDUnknownBlockType _dataHandler;
    CDUnknownBlockType _characteristicsHandler;
    CDUnknownBlockType _mfaSuccessHandler;
    unsigned int _connectionOptions;
    int _mfaStatus;
    NSData *_autoPairData;
    NSUUID *_peripheralUUID;
    int _connectionState;
    int _pairingState;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    double _timeoutInterval;
}

@property(nonatomic) _Bool pairingAttempted; // @synthesize pairingAttempted=_pairingAttempted;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(readonly, nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic) int pairingState; // @synthesize pairingState=_pairingState;
@property(nonatomic) int connectionState; // @synthesize connectionState=_connectionState;
@property(readonly, nonatomic) NSUUID *peripheralUUID; // @synthesize peripheralUUID=_peripheralUUID;
@property(readonly, nonatomic) NSData *autoPairData; // @synthesize autoPairData=_autoPairData;
@property(readonly, nonatomic) int mfaStatus; // @synthesize mfaStatus=_mfaStatus;
@property(readonly, nonatomic) unsigned int connectionOptions; // @synthesize connectionOptions=_connectionOptions;
@property(readonly, nonatomic) CDUnknownBlockType mfaSuccessHandler; // @synthesize mfaSuccessHandler=_mfaSuccessHandler;
@property(readonly, nonatomic) CDUnknownBlockType characteristicsHandler; // @synthesize characteristicsHandler=_characteristicsHandler;
@property(readonly, nonatomic) CDUnknownBlockType dataHandler; // @synthesize dataHandler=_dataHandler;
@property(readonly, nonatomic) CDUnknownBlockType sessionHandler; // @synthesize sessionHandler=_sessionHandler;
@property(nonatomic) unsigned int sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (void).cxx_destruct;
- (void)markMFAStatusComplete;
- (id)initWithSessionHandler:(CDUnknownBlockType)arg1 dataHandler:(CDUnknownBlockType)arg2 characteristicsHandler:(CDUnknownBlockType)arg3 mfaSuccessHandler:(CDUnknownBlockType)arg4 autoPairData:(id)arg5 connectionOptions:(unsigned int)arg6 timeoutInterval:(double)arg7 peripheralUUID:(id)arg8;

@end

