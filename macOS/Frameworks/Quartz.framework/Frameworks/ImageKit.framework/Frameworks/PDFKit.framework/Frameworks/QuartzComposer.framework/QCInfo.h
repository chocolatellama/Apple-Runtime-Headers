//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzComposer/QCPatch.h>

@class QCBooleanPort, QCNumberPort;

__attribute__((visibility("hidden")))
@interface QCInfo : QCPatch
{
    QCNumberPort *outputVersion;
    QCBooleanPort *outputSafeMode;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (BOOL)isSafe;
- (BOOL)setup:(id)arg1;

@end

