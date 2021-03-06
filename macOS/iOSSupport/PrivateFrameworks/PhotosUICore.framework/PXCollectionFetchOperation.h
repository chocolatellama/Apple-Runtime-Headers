//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class PHCollection, PHFetchOptions, PHFetchResult;
@protocol PXCollectionFetchOperationDelegate;

@interface PXCollectionFetchOperation : NSOperation
{
    id <PXCollectionFetchOperationDelegate> _delegate;
    PHFetchOptions *_fetchOptions;
    PHCollection *_collection;
    PHFetchResult *_outputFetchResult;
}

+ (id)fetchOperationWithCollection:(id)arg1 delegate:(id)arg2;
@property(retain, nonatomic) PHFetchResult *outputFetchResult; // @synthesize outputFetchResult=_outputFetchResult;
@property(readonly, nonatomic) PHCollection *collection; // @synthesize collection=_collection;
@property(retain, nonatomic) PHFetchOptions *fetchOptions; // @synthesize fetchOptions=_fetchOptions;
@property(nonatomic) __weak id <PXCollectionFetchOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleFinish;
- (void)handleBegin;
- (void)main;
- (id)init;
- (id)initWithCollection:(id)arg1;

@end

