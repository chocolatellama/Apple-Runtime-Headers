//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class IOControllerSemanticMO;

__attribute__((visibility("hidden")))
@interface IOControllerConfigurationMO : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(nonatomic) int bufferFrameSize; // @dynamic bufferFrameSize;
@property(nonatomic) double sampleRate; // @dynamic sampleRate;
@property(retain, nonatomic) IOControllerSemanticMO *semantic; // @dynamic semantic;

@end

