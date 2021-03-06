//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AXMediaUtilities/AXMEvaluationNode.h>

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@class AXMPipelineContextInput;

@interface AXMImageRegistrationNode : AXMEvaluationNode <NSSecureCoding>
{
    AXMPipelineContextInput *_previousInput;
    AXMPipelineContextInput *_currentInput;
    struct CGPoint _transpositionHistoryCircularBuffer[10];
    unsigned long long _transpositionHistoryLastRecordedIndex;
    _Bool _fillingHistoryBuffer;
    long long _registrationState;
}

+ (id)title;
+ (_Bool)isSupported;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long registrationState;
- (void)_recordTransposition:(struct CGPoint)arg1;
- (void)_resetImageRegistration;
- (void)_resetTranspositionHistory;
- (void)evaluate:(id)arg1;
- (id)_translationalImageRegistrationRequestForInput:(id)arg1;
- (_Bool)validateVisionKitSoftLinkSymbols;
- (_Bool)requiresVisionFramework;
- (void)nodeInitialize;

@end

