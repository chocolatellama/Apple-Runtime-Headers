//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTKView;

__attribute__((visibility("hidden")))
@interface MTKViewDisplayLinkTarget : NSObject
{
    MTKView *_target;
}

@property(nonatomic) __weak MTKView *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)draw;
- (id)initWithTarget:(id)arg1;

@end

