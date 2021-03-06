//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSNeuralNetwork/NSCopying-Protocol.h>
#import <MPSNeuralNetwork/NSObject-Protocol.h>

@class MPSCNNNormalizationGammaAndBetaState, NSCoder, NSString;
@protocol MTLCommandBuffer, MTLDevice;

@protocol MPSCNNInstanceNormalizationDataSource <NSObject, NSCopying>
@property(readonly, nonatomic) unsigned long long numberOfFeatureChannels;
- (NSString *)label;
- (float *)beta;
- (float *)gamma;

@optional
+ (BOOL)supportsSecureCoding;
- (void)purge;
- (BOOL)load;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id <MTLDevice>)arg2;
- (id)initWithCoder:(NSCoder *)arg1;
- (void)encodeWithCoder:(NSCoder *)arg1;
- (float)epsilon;
- (BOOL)updateGammaAndBetaWithInstanceNormalizationStateBatch:(struct NSArray *)arg1;
- (MPSCNNNormalizationGammaAndBetaState *)updateGammaAndBetaWithCommandBuffer:(id <MTLCommandBuffer>)arg1 instanceNormalizationStateBatch:(struct NSArray *)arg2;
@end

