//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SensorKit/SRSensorKitServiceClientWriting-Protocol.h>

@class SRSensorWriter;

@interface SRSensorWriterClient : NSObject <SRSensorKitServiceClientWriting>
{
    SRSensorWriter *_writer;
}

+ (id)sensorWriterClientWithWriter:(id)arg1;
@property __weak SRSensorWriter *writer; // @synthesize writer=_writer;
- (void).cxx_destruct;
- (void)setMonitoring:(_Bool)arg1;
- (void)resetDatastoreFiles:(id)arg1;
- (id)initWithWriter:(id)arg1;

@end

