//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SASerializable;

__attribute__((visibility("hidden")))
@interface SAObjectListEntry : NSObject
{
    id <SASerializable> _instance;
    unsigned long long _size;
}

@property unsigned long long size; // @synthesize size=_size;
@property(retain) id <SASerializable> instance; // @synthesize instance=_instance;
- (void).cxx_destruct;

@end

