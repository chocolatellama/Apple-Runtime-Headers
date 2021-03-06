//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RPPairingUIController : NSObject
{
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _retryHandler;
    CDUnknownBlockType _tryPINHandler;
}

@property(copy, nonatomic) CDUnknownBlockType tryPINHandler; // @synthesize tryPINHandler=_tryPINHandler;
@property(copy, nonatomic) CDUnknownBlockType retryHandler; // @synthesize retryHandler=_retryHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
- (void).cxx_destruct;
- (void)promptWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)pairingError:(id)arg1;
- (void)invalidate;
- (void)activate;

@end

