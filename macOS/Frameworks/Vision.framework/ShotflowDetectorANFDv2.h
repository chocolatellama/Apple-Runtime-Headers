//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Vision/ShotflowDetector.h>

__attribute__((visibility("hidden")))
@interface ShotflowDetectorANFDv2 : ShotflowDetector
{
}

+ (id)filterThresholds;
+ (Class)shotflowNetworkClass;
- (id)nmsBoxes:(id)arg1;
- (id)mergeHeadsBoxes:(id)arg1;
- (id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;
- (id)initWithNetwork:(id)arg1;
- (id)initWithNetwork:(id)arg1 filterThreshold:(id)arg2;

@end

