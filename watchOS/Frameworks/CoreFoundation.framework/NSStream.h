//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;
@protocol NSStreamDelegate;

@interface NSStream : NSObject
{
}


// Remaining properties
@property id <NSStreamDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSError *streamError; // @dynamic streamError;
@property(readonly) unsigned int streamStatus; // @dynamic streamStatus;
@end

